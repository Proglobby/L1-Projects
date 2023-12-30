#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("enter the first parameter : ");
	scanf("%f", &a);
	printf("enter the second parameter : ");
	scanf("%f", &b);
	printf("enter the third parameter : ");
	scanf("%f", &c);
	
	float d = b*b - (4*a*c);
	if(a == 0){
		float x = -c/b;
		printf("there is only one solution : x = %.2f", x);
	}else{
		if(d<0){
		printf("there is no solutions for this equation");
	}else{
		if(d==0){
			float x = -b/(2*a);
			printf("there is only one solution : x = %.2f", x);
		}else{
			float x1 = (-b - sqrt(d))/(2*a);
			float x2 = (-b + sqrt(d))/(2*a);
			printf("first solution : x1 = %.2f", x1);
			printf("second solution : x2 = %.2f", x2);
		}
	}
	}
	return 0;
}
