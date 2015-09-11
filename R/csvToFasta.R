###  csv to fasta
#source("http://bioconductor.org/biocLite.R")
#biocLite("Biostrings")


library(Biostrings)
inpPath<-"goTimeaa.csv"
outPath<-"goTimeaa.fasta"
csv <-read.csv(inpPath, header=T,sep=",")
head(csv)

seq = csv$aaseq
names(seq) = csv$qv_anno
dna = DNAStringSet(seq, use.names = T)
#writeXStringSet(dna, outPath)
writeFASTA <- function(sequences, desc=names(sequences), width=80,
                       file=stdout(), append=FALSE) {
  sequences <- as.character(sequences)
  if(!is.null(desc) && length(sequences) != length(desc))
    stop("wrong length of 'desc'")
  desc <- if (is.null(desc))
    paste(">", seq(along=sequences))
  else
    paste(">", desc, "\n", sep="")
  ## Adjust line width or add a \n
  sequences <-  if (! is.null(width))
    gsub( sprintf("(.{1,%d})", width), "\\1\n", sequences )
  else
    paste(sequences, "\n", sep="")
  cat(paste(desc,sequences, sep="", collapse=""), sep="", file=file,
      append=append )
  
}
writeFASTA(seq, csv$qv_anno, file= outPath)
