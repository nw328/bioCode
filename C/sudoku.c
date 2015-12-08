#include <stdio.h>

/* the purpose of this excercise is to build a sudoku solver with variable
  algorithms just for the fun of it*/
char line[100], menu1;
int inputpuz[9][9], data[4];


int main() {
//printf("enter your puzzle left to right, top to bottom\n");
//printf("\t --use zeros for missingnumbers \n\t use a space ' ' for separating\n");
printf("press 'n' for new game\n");
printf("press 't' for test game\n");
printf("or press 'q' to quit\n");
fgets(line, sizeof(line), stdin);
sscan(line, "%c", &menu1);
switch(menu1){
	case: 'q' ;
	printf("bye now\n");
	return(0);
	case: 'n'{
printf(" the input line was read as %s", line);
sscanf(line, "%d %d %d %d %d", &data[0], &data[1], &data[2], &data[3], &data[4]);
printf("data[0] is %d\n", data[0]);
printf("data[1] is %d\n", data[1]);
printf("data[2] is %d\n", data[2]);
printf("data[3] is %d\n", data[3]);
return(0);
}
}
}


 
