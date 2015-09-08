# -*- coding: utf-8 -*-
"""
Created on Tue Dec  2 11:01:06 2014

@author: nicholaswaters
"""

import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
from matplotlib.backends.backend_pdf import PdfPages

#%pylab inline

test_csv=pd.read_csv('heatmap_test.csv')
x1=test_csv['X']
y1=test_csv['Y']
z1=test_csv['Value']

p = test_csv.pivot(columns='X', index='Y', values='Value')
plotdf = test_csv.pivot(columns='X', index='Y', values='Plot')
'''
thr=test_csv.pivot(columns='X', index='Y', values='Thrips')

#Normalize
thrn = (thr - thr.mean()) / (thr.max() - thr.min())
'''

normval = (p- p.mean()) / (p.max() - p.min())


fig, ax = plt.subplots()
p4=p.fillna(0) #fill blank plots with 0's 
heatmap = plt.pcolor(normval, cmap=plt.cm.Reds, alpha=0.9)

for y in range(p4.shape[0]):
    for x in range(p4.shape[1]):
        plt.text(x+0.5, y+0.5, 
                 '%s' %plotdf.values[y][x],
                 fontsize=8,
                 horizontalalignment='center',
                 verticalalignment='center',
                 )  

                
fig = plt.gcf()

fig.set_size_inches(10 , 7)

#Ticmark Labels
#ax.set_xticklabels('North', horizontalalignment='center', minor=False)
#ax.set_yticklabels('West', minor=False)

ax.xaxis.set_ticks_position('top')  # put column labels at the top

ax.autoscale(tight=True)  # get rid of whitespace in margins of heatmap
    
# turn off the frame
ax.set_frame_on(True)

# rotate the ticks
plt.xticks(rotation=0)  

#Toggle Grid
ax.grid(False)

# Turn off all the ticks
ax = plt.gca()
for t in ax.xaxis.get_major_ticks():
    t.tick1On = True
    t.tick2On = True
for t in ax.yaxis.get_major_ticks():
    t.tick1On = True
    t.tick2On = True


#Title it!
plt.text(.5,1.05,' Screening Yield (bu/a @14%)',
         fontsize=25,
         horizontalalignment='center',
         transform=ax.transAxes,
         )
#ax.set_yticks(range(len(plotdf['Y'])))
#ax.set_xticks(range(len(plotdf['X']))) #why doesnt this work?

#ax.set_yticklabels(x1, fontsize=10)
# standard axis elements
#plt.ylabel('West', fontsize=20)
#plt.xlabel('North',fontsize=20)

'''
#X label on Top
plt.text(.5,1.05, 'North',
         horizontalalignment='center',
         fontsize=16,
         transform=ax.transAxes)
  '''       
# Add Colorbar from stackoverflow
from mpl_toolkits.axes_grid1 import make_axes_locatable
divider = make_axes_locatable(ax)
cax = divider.append_axes("right", "3%", pad="1%")
fig.colorbar(heatmap, cax=cax)

#Saving as a pdf
with PdfPages('Brookings_Screening_heatmap.pdf') as pdf:
    pdf.savefig()  
 #   plt.close()

   
plt.show()
