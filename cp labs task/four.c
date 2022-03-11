#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int TOTAL_MARKS=300;
	char std_name[20];
	int sub1,sub2,sub3;
	float percentage;
	
//	user name
	printf("Enter student name= ");
	scanf("%s",&std_name);
//	marks 1
	printf("Enter marks of sub1= ");
	scanf("%d",&sub1);
//	marks 2
	printf("Enter marks of sub2= ");
	scanf("%d",&sub2);
//	marks 3
	printf("Enter m0arks of sub3= ");
	scanf("%d",&sub3);
	
	//USEING OF ARTHMATIC OPERATORS// 
	
//	calculation of percentage

    percentage=((  sub1 + sub2 + sub3)*100)/TOTAL_MARKS;
	
	printf("percentage is %.2f %%", percentage);

//Rational operators
    printf("\n%d",sub1==sub2); 
    printf("%d\n",sub2>=sub3);
    printf("%d",sub1!=sub2!=sub3);

//logical operators
    printf("\n%d",sub1&&sub2);
    printf("%d\n",sub2||sub3);
    printf("%d",sub1!=sub2!=sub3);
    
//    size of operator
    int  INT;
    float  FLOAT;
    double DOUBLE;
    char CHAR;
    printf("size of int = %lu bytes\n",sizeof(INT));   
    printf("size of int = %lu bytes\n",sizeof(FLOAT));
    printf("size of int = %lu bytes\n",sizeof(DOUBLE));
    printf("size of int = %lu bytes\n",sizeof(CHAR));
  


	return 0;
}
