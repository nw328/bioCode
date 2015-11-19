#include <stdio.h>
#include <string.h>
char inp1;
char line[100];

int main() {
	while (1) {
		printf("Choose from the following options:\n");
		printf("1) read a book\n");
		printf("2)do some flippin molarity calcs\n");
		printf("q) Quit\n");
		printf("what do you qwant to do?\n");
		fgets(line, sizeof(line), stdin);
 		sscanf(line, "%c", &inp1);
		if ((inp1=='q') || (inp1=='Q'))
			break;
		switch(inp1){
		case '1':
			printf("%c, a book, good choice!\n", inp1);
			printf("when you are done, you can start again");
			break;
		default:
			printf("did i stutter?");
			break;
		}
		break;
	printf("thats all for now, folks!\n");
	return(0);
	}
}
