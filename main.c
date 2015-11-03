#include <stdio.h>
#include <string.h>

int str2int(int len, char str[len]);
void printSteps(int n);

int main(int argc, char *argv[]){
	if (argc < 2)
		return 1;

	int n = str2int(strlen(argv[1]), argv[1]);
	printSteps(n);
	printf("1\n");

	return 0;
}

void printSteps(int n){
	while (n > 1){
		int rem = n % 3;
		if (rem == 1){
			printf("%d -1\n", n);
			n--;
		}
		else if (rem == 2){
			printf("%d 1\n", n);
			n++;
		}
		else {
			printf("%d 0\n", n);
		}
		n /= 3;
	}
}

int str2int(int len, char str[len]){
	int result = 0;
	int i;
	for (i = 0; i < len; i++){
		result = result*10 + (str[i]-'0');
	}
	return result;
}