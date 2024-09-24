#include<stdio.h>
void main(){
struct stud{
char usn[20];
char name[20];
long phoneno;}s1;
printf("Enter usn, name and phone no: ");
scanf("%s",s1.usn);
scanf("%s",s1.name);
scanf("%ld",&s1.phoneno);
printf("Details are:\n%s\n%s\n%ld",s1.usn,s1.name,s1.phoneno);}
