#include<stdio.h>
 int main(){
 	float a,b;
 	printf("chieu dai hcn la:");
 	scanf("%f",&a);
 	printf("chieu rong hcn la:");
 	scanf("%f",&b);
 	float c,d;
 	c=(a+b)*2;
 	printf("chu vi hinh chu nhat la:%.1f\n",c);
 	d=a*b;
 	printf("dien tich hinh chu nhat la:%.1f",d);
 	return 0;
 }
