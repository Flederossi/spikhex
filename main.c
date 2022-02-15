/* includes */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	FILE *fp;
	int c;

	// max count of chars per line
	long mc = strtol(argv[2], NULL, 10);
	// templist for str at end
	int temp[mc];
	
	// char count on current line
	int cc = 0;
	// full char count
	int fcc = 0;

	void writeStr(){
        	for (int i = 1; i <= mc; i++){
                	if (temp[i] > 32 && temp[i] < 128){
                                printf("%c", temp[i]);
                	}else{
                        	printf(".");
                	}
                	temp[i] = 0;
        	}
	}	
	
	fp = fopen(argv[1], "r");

	if(fp != NULL){
		while (1){
			c = fgetc(fp);
			if (c == EOF){
				break;
			}
			if (cc == 0){
				printf("0x%x\t", fcc);
			}

			cc++;
			fcc++;
			
			if (c <= 15){
				printf("0");
			}
			
			temp[cc] = c;
			printf("%x ", c);
			
			if (!(cc < mc)){
				cc = 0;
				writeStr();
				printf("\n");
			}
		}
	}

	fclose(fp);

	if (cc != 0){
		while (cc < mc){
			cc++;
			printf("   ");
		}
		writeStr();
		printf("\n");
	}

	return 0;
}
