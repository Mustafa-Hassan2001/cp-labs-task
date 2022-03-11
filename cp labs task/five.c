#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	//ceil----upper roundoff(ceil)
//	float val1=1.6 ,val2=1.2, val3=-2.8, val4=-2.3;
//	
//	printf("value1=%.1lf \n",ceil(val1));
//	printf("value2=%.1lf \n",ceil(val2));
//	printf("value3=%.1lf \n",ceil(val3));
//	printf("value4=%.1lf \n",ceil(val4));
//	




//	//floor--lower roundoff  (floor)
//	printf("value1=%.1lf \n",floor(val1));
//	printf("value2=%.1lf \n",floor(val2));
//	printf("value3=%.1lf \n",floor(val3));
//	printf("value4=%.1lf \n",floor(val4));
//	
	
	//absolute---convert - to +.(fabs)
//	int a=1234 , b=-344;
//	printf("The absolute value of %d is %lf\n",a,fabs(a));
//	printf("The absolute value of %d is %lf\n",b,fabs(b));	
//	



//modulator---for reminder when divide (fmod)
//  int a=4 ; 
//  float b=3.9 , c=4.1;
//  printf("The reminder of %d/%f is %.1lf \n",a,b,fmod(a,b));
//  printf("The reminder of %f/%f is %.1lf \n",b,c,fmod(a,c));	

	
//square root  (sqrt)
//int a;
//int b;
//
//printf("Enter number a=");
//scanf("%d",&a);
//
//printf("Enter number b=");
//scanf("%d",&b);
//
//printf("square root of your number %d is  %.0lf \n",a,sqrt(a));
//printf("square root of your number %d is  %.0lf \n",b,sqrt(b));


	
// power----(pow)
// int a;
// int b;
//
// printf("Enter number of base a=");
// scanf("%d",&a);
//
// printf("Enter number of power b=");
// scanf("%d",&b);
//	
// printf("value %d^%d = %lf",a,b,pow(a,b));	



	
//conditional statements
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//(1)IF CONDITION:-

//int x =20, y=18;
//if(x>y){
//	printf("x is greater then y");
//}
	
//----------------------------------


//if(20>18){
//	printf("20 is greater then 18");
//}	

//(2)IF ELES CONDITION:-

//int time=20;
//if(time<18){
//	printf("GOOD MORNING");
//}
//else{
//	printf("Good Evening");
//}

//ELSE IF CONDITION:-
//int time=22;
//if(time>10){
//	printf("good morning");
//}
//else if(time==22){
//printf("good evening");
//}
//else{
//	printf("Assalamoalikum");
//}



//MS.task:-

int sub1 , sub2 , sub3 , sub4 , sub5;
const int total_marks=500;
int obtain_marks;
float precentage;

printf("Enter marks of sbu1=");
scanf("%d", &sub1);

printf("Enter marks of sbu2=");
scanf("%d", &sub2);

printf("Enter marks of sbu3=");
scanf("%d", &sub3);

printf("Enter marks of sbu4=");
scanf("%d",&sub4);

printf("Enter marks of sbu5="); 
scanf("%d",&sub5);


obtain_marks= sub1 + sub2 + sub3 + sub4 + sub5 ;

precentage=(obtain_marks*100)/total_marks;

printf("The precentage is %f \n",precentage);

if(precentage>80){
	printf("A+\n");
}
else if(precentage=80){
	printf("A\n");
}
else if(precentage>70){
	printf("A\n");
}
 else if(precentage>60){
	printf("B\n");
} 
else if(precentage>50){
	printf("C\n");
}
else {
	printf("F\n");
}













//===================================================












// task 2:-

//int a ;
// printf("Enter the number=");
// scanf("%d",&a);
//  
//if (a%2==0){
//	printf("your number is even");
//} 
//else{
//
//	printf("your number is odd");
//}











	
	return 0;
	
}
