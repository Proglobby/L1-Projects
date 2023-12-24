#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Fraction{
	int numerator;
	int denumerator;
};
int main(int argc, char *argv[]) {
	struct Fraction result;
	
start:
	system("cls");
	printf("enter the numerator of the first number : ");
	scanf("%d", &result.numerator);
	printf("enter the denumerator of the first number : ");
	scanf("%d", &result.denumerator);
	int answer = 0;
	do{
		system("cls");
		printf("RESUULT : %d/%d\n", result.numerator, result.denumerator);
		printf("Choose an operation :\n1- Addition\n2- Substraction\n3- Multiplication\n4- Division\n5- Power \n6- Simplify\n7- Reinitialize the calculator \n8- Exit");
		scanf("%d", &answer);
		struct Fraction f;
		switch(answer){
			case 1:{
				system("cls");
				printf("Enter the numerator of the number you want to add : ");
				scanf("%d", &f.numerator);
				printf("Enter the denumerator of the number you want to add : ");
				scanf("%d", &f.denumerator);
				if(result.denumerator == f.denumerator){
					result.numerator = result.numerator + f.numerator;
				}else{
					int a = result.denumerator;
					result.denumerator = result.denumerator * f.denumerator;
					result.numerator = result.numerator*f.denumerator + a*f.numerator;
				}
				break;
            }
			case 2:{
				system("cls");
				printf("Enter the numerator of the number you want to substract : ");
				scanf("%d", &f.numerator);
				printf("Enter the denumerator of the number you want to substract : ");
				scanf("%d", &f.denumerator);
				if(result.denumerator == f.denumerator){
					result.numerator = result.numerator - f.numerator;
				}else{
					int a = result.denumerator;
					result.denumerator = result.denumerator * f.denumerator;
					result.numerator = result.numerator*f.denumerator - a*f.numerator;
				}
				break;
            }
			case 3:{
				system("cls");
				printf("Enter the numerator of the number you want to multiply : ");
				scanf("%d", &f.numerator);
				printf("Enter the denumerator of the number you want to multiply : ");
				scanf("%d", &f.denumerator);
				result.numerator = result.numerator * f.numerator;
				result.denumerator = result.denumerator * result.denumerator;
				break;
            }
			case 4:{
				system("cls");
				printf("Enter the numerator of the number you want to divide : ");
				scanf("%d", &f.numerator);
				printf("Enter the denumerator of the number you want to divide : ");
				scanf("%d", &f.denumerator);
				result.numerator = result.numerator * f.denumerator;
				result.denumerator = result.denumerator * f.numerator;
				break;
            }
			case 5:{
				system("cls");
				int n;
				printf("Enter the power n : ");
				scanf("%d", &n);
				int i;
				int a = result.numerator;
				int b = result.denumerator;
				for(i = 1; i < n; i++){
					result.numerator = result.numerator * a;
					result.denumerator = result.denumerator * b;
				}
            }
				
			case 6:{
				system("cls");
				if(result.numerator == result.denumerator){
					result.numerator = 1;
					result.denumerator = 1;
				}else{
					if(result.numerator > result.denumerator){
					int i;
					for(i = result.numerator-1; i >= result.denumerator; i--){
						if(result.numerator % i == 0 && result.denumerator % i == 0){
							result.numerator = result.numerator / i;
							result.denumerator = result.denumerator / i;
							break;
						}
					}
				}else{
					int i;
					for(i = result.denumerator-1; i >= result.numerator; i--){
						if(result.numerator % i == 0 && result.denumerator % i == 0){
							result.numerator = result.numerator / i;
							result.denumerator = result.denumerator / i;
							break;
						}
					}
				}	
				}
				
				break;
            }
			case 7:{
				goto start;
				break;
            }
				
		}
	}while(answer != 8);
	
	
	
	return 0;
}
