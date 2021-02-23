#include<stdio.h>
#include<conio.h>
void main(){
struct student{
char name[55];
int rollno;
int age;
};
struct student student1[5];
int i;
for(i=0;i<5;i++){
printf("enter your name ,rollno ,age\n");
scanf("%s%d%d",&student1[i].name,&student1[i].rollno,&student1[i].age);
}
for(i=5;i<5;i++){
printf("name=%s\nrollno=%d\nage=%d\n",student1[i].name,student1[i].rollno,student1[i].age);
}
getch();
}
