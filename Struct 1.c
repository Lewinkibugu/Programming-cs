// c structure 
# include<string.h>
#include<stdio.h>
struct student{
      char name [10];
      char email[30];
      char reg_no[20];
      int phone_no;
      int ID_no;
      int marks;
      float height;
      
      };
  struct student student1;
      
int main () {
 struct student student1;
  strcpy( student1.name,"James");
  strcpy(student1.email,"jame@gogmail.com");
  strcpy(student1.reg_no,"CT1101/G/22563/24");
  student1.phone_no=728;
  student1.marks=80;
  student1.height=20.34;
  
  printf("names%s\n",student1.name);
  printf("email%s\n",student1.email);
  printf("reg_no%s\n",student1.reg_no);
  printf("phone_no%d\n",student1.phone_no);
  printf("marks%d\n",student1.marks);
  printf("height%f\n",student1.height);
  
  return 0;
  }
