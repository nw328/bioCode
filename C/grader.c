#include <stdio.h>

char line[100];
float inp;
char int_grade;
char fin_grade[3];

int main(){
	printf("Enter numerical grade:");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &inp);

	if (inp >= 91){
		int_grade = 'A';
		printf("you have passed\n");
	} else if (91 > inp & inp >= 81){
		int_grade = 'B';
		printf("work harder.  no excuses!\n");
	} else if (inp < 81){
                int_grade = 'F';
                printf("you have failed.  no excuses!\n");
	}
return (0);
}

/*if(91>inp>81) int_grade = "B";*/
/*if (inp>=91) int_grade = "C";*/
/*if (inp>=91) int_grade = "D";*/
/*if (inp>=91) int_grade = "F";	*/
