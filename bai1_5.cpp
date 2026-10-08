#include<math.h>
#include<conio.h>
#include<stdio.h>
main () {
 float  max,min,da,dd,d0,n,a[50];
 printf("Nhap so phan tu toi da cua day :");scanf("%f",&n) ;
 for (int i=0;i<n;i++){
 printf("a[%d]=",i+1);scanf("%f",&a[i]);
 max=min=a[0]; }
 for (int i=1;i<n;i++){
 	if (max <a[i]) 
 	max=a[i] ;
 	else {
	if (min>a[i]) 
 	min=a[i] ;
 	da=dd=d0=0;}}
for (int i=0;i<n;i++){
    if  (a[i]>0)
    dd++;
	else {
	if (a[i]<0) 
	da++;
	else  
	d0++;
}}
dd>da>d0?printf("%d",dd):(da>d0?printf("%d",da):printf("%d",d0)); 
	getch();
}
  
