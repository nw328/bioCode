#include <stdio.h>
#include <string.h>
char inp1;
char line[100];

int main() {
	inp1 = 1;
	float molarMass, desiredConcentration, desiredVolume, massToAdd;
	int unitArray[4][2] = {{1, 1} ,{2,1000}, {3,1000000}, {4,1000000000}};
	int arrayIndex;
	float nanoVal, dnaMass;

	while (inp1) {
		printf("Choose from the following options:\n");
		printf("1) read a book\n");
		printf("2) do some flippin molarity calcs\n");
		printf("3) nanodrop calcs\n");
		printf("q) Quit\n");
		printf("what do you want to do?\n");
		fgets(line, sizeof(line), stdin);
		sscanf(line, " %c", &inp1);
		printf("inp1 is %c\n", inp1);
		switch(inp1){
		case 'q' | 'Q':
  			inp1=0;
			break;
		case '1':
			printf("%c, a book, good choice!\n", inp1);
			printf("when you are done, you can start again\n");
	 		break;
		case '2':
			printf("Enter the molar mass of the stuff:");
			fgets(line, sizeof(line), stdin);
			sscanf(line, "%f", &molarMass);
			printf("Enter the desire concentration of the solution:");
                        fgets(line, sizeof(line), stdin);
                        sscanf(line, "%f", &desiredConcentration);
                        printf("Enter the desired volume (L) of the solution:");
                        fgets(line, sizeof(line), stdin);
                        sscanf(line, "%f", &desiredVolume);
//                        massToAdd = ((desiredConcentrations/1liter)/(1mol/molarMass))*desiredVolume
			massToAdd = ((desiredConcentration/1.0)/(1.0/molarMass))*desiredVolume ;
                        printf("To make %.4f L a %.4f Molar solution, add %.4f grams of your compound (molar mass = %.4f)\n\n\n", 
				desiredVolume, desiredConcentration, massToAdd, molarMass);
			break;
		case '3':
			printf("enter what the nanodrop said (ng/ul):");
                        fgets(line, sizeof(line), stdin);
                        sscanf(line, "%f", &nanoVal);
			printf("your sample is %.4f ul per ug\n", 1.0/(nanoVal/1000));
			//printf("enter the unit you are calculating for: 1=micro, 2=nano, 3=femto\n");
                        //fgets(line, sizeof(line), stdin);
                        //sscanf(line, "%d", &arrayIndex);
                        printf("enter the desired mass of DNA (ng):");
                        fgets(line, sizeof(line), stdin);
                        sscanf(line, "%f", &dnaMass);
			printf("Add %.5ful of your sample to", (dnaMass*(1.0/(nanoVal/1000)))/1000);
			break;
		default:
			printf("did i stutter?\n");
			break;
		}
	}
return(0);
}
