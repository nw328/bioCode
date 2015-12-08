#include <stdio.h>
/* the purpose of this excercise is to build a sudoku solver with variable
  algorithms just for the fun of it*/
char line[100], menu1;
//int testpuz[9][9];
//int inputpuz[9][9], data[4], i, j;
int testpuz[9][9]={{9,5,6,4,1,7,8,2,3},{8,3,1,9,2,5,7,4,6},{4,2,7,8,6,3,9,5,1},{2,8,5,7,9,6,3,1,4},{7,9,4,5,3,1,2,6,8},{6,1,3,2,4,8,5,7,9},{3,7,2,1,8,4,6,9,5},{5,4,8,6,7,9,1,3,2},{1,6,9,3,5,2,4,8,7}};
//int testpuz[9][10]={{0,9,5,6,4,1,7,8,2,3},{0,8,3,1,9,2,5,7,4,6},{0,4,2,7,8,6,3,9,5,1},{0,2,8,5,7,9,6,3,1,4},{0,7,9,4,5,3,1,2,6,8},{0,6,1,3,2,4,8,5,7,9},{0,3,7,2,1,8,4,6,9,5},{0,5,4,8,6,7,9,1,3,2},{0,1,6,9,3,5,2,4,8,7}};
// NOTE: In C, we cannot derive the length of an array from within a function,
// so any call of "inArray" must be preceded by a operation getting the size 
// of the array, or arraySize
int inArray(int test,int array[], int size){
    printf("array[1] is %d, test term is %d",array[1], test);
    int res = 0, array_max, i;
    array_max = size; /*sizeof(array) / sizeof(array[0]);*/
    printf("array max is %d\n", array_max);
    for (i=0; i< array_max; i++){
	printf("i = %d\n", i);
        if (test==array[i]){res++;}}
    if (res>0){return(1);} else {return(0);}}
int main(){
/*###########################################*/
/* calulate and confirm dimensions*/
int xdim=( sizeof testpuz[0] / sizeof testpuz[0][0]);
int ydim=( sizeof testpuz / sizeof testpuz[0]);
int i;
int j;
int bankmax;
int arraySize;
/*determine max of bank array*/
if (ydim >= xdim){printf("largest dim is ydim\n");bankmax=ydim;} else if (ydim < xdim){printf("largest dim is xdim\n");bankmax=xdim;};
int bank[bankmax];
for (i=0;i< bankmax;i++){bank[i] = i+1;}
/* confirm bank is populated*/
//for (i=0;i< bankmax;i++){printf("bank[%d] is %d\n", i, bank[i]);}
printf("puzzle is %d by %d; it looks like this:\n", xdim, ydim);
//check if number is in bank NEED THESE TWO LINES ALWAYS
arraySize= sizeof(bank) / sizeof(bank[0]);
//if(inArray(5, bank, arraySize)){printf("it sure is!");} //else {printf("nope");}
//printf(the bank consists of )
/* input new game*/
/*###########################################*/
/*
i=0;
for (i=0; i<9; i++){
printf("enter the line %d:\n", i+1);
fgets(line, sizeof(line), stdin);
sscanf(line, "%d %d %d %d %d %d %d %d %d",&inputpuz[i][0], &inputpuz[i][1], &inputpuz[i][2], &inputpuz[i][3], &inputpuz[i][4], &inputpuz[i][5], &inputpuz[i][6], &inputpuz[i][7], &inputpuz[i][8]);
//printf("%d",inputpuz[i][1]);
}
i=0;
j=0;

printf("look, a sudoku puzzle!\n");
for (i=0; i<9; i++){
for (j=0; j<9; j++){
printf("| %d",inputpuz[i][j]);
}
printf("|\n");
printf("_________________________\n");

}
*/
/*###########################################*/
/*now, print test puzzle */
i=0;
j=0;
printf("look, a test sudoku puzzle!\n");
for (i=0; i<ydim; i++){
for (j=0; j<xdim; j++){
printf("| %d",testpuz[i][j]);
}
printf("|\n");
//printf("____________________________\n");
printf("----------------------------\n");
}
/*###########################################*/
/* Select boxes */
int  box[xdim][ydim];
/*###########################################*/
/*solve lines missing single values*/
/*for (i=0; i=ydim; i++){
//if(inArray(5, bank, arraySize)){printf("it sure is!");} //else {printf("nope"$

}
if 
*/

/*###########################################*/
/*###########################################*/

return 0 ;
}
/*###########################################*/

