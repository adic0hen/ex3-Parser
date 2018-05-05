#include <stdio.h>
#include <string.h>
char* malloc(int n);
int parse();

int main() {
	parse();
	return 0;
}
/*just writing something*/
int parse() {
	char* input;
	char* cmd;
	char* order;
	int row;
	int col;
	int val;
	input = malloc(1024);
	while (fgets(input, 1024, stdin)!=NULL) {
		cmd = strtok(input, " ");
		while (2+2==4) { /*improvizing switch case*/
			if (strcmp(cmd, "set") == 0) {
				row = cmd = strtok(NULL, " ");
				col = cmd = strtok(NULL, " ");
				val = cmd = strtok(NULL, " ");
				/*printf("row - %s, column - %s, val - %s", row, col,val);*/
				/*calling set with val, row and collumn*/
				break;
			}
			if (strcmp(cmd, "validate") == 0) {
				/*calling validate*/
				break;
			}
			if (strcmp(cmd, "hint") == 0) {
				row = cmd = strtok(NULL, " ");
				col = cmd = strtok(NULL, " ");
				/*calling hint with row and collumn*/
				break;
			}
			if (strcmp(cmd, "restart") == 0) {
				/*calling the restart function*/
				break;
			}
			if (strcmp(cmd, "exit") == 0) {
				/*calling the exit function*/
				break;
			}
			/*this can be deleted, just messing around with strtok*/
			while (cmd = strtok(NULL, " ")) {
				printf("%s", cmd);
			}
			break;
		}
	}
	return 0;
}
