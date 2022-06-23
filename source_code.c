//# CLAP-4
#include <stdio.h>
#include <string.h>
typedef struct {
char name[100];
char adresss[100];
int age;
int salary;
}employee;
void input(employee *p)
{
  printf("Enter first name then adress(city) then age then salary\n");
  scanf("%s\n%s\n%d\n%d",p->name,p->adresss,&p->age,&p->salary);
}
void reorder(employee e[])
{
  employee t;
  int i,j;
  for(i=0;i<5;i++)
    {
    for(j=0;j<4;j++)
      {
        if(strcmp(e[j].name,e[j+1].name)>0)
        {
          t=e[j];
          e[j]=e[j+1];
          e[j+1]=t;
        }
      }
}
  }
void print(employee *p)
{
  printf("name:-\n%s\n\nadress:-\n%s\n\nage:-%d\n\nsalary:-\n%d\n\n",p->name,p->adresss,p->age,p->salary);
}
int main(void) {
  int i,s=0;
  employee arr[5];
  for(i=0;i<5;i++)
    {
      input(&arr[i]);
    }
  reorder(arr);
  for(i=0;i<5;i++)
    {
      printf("\n");
      print(&arr[i]);
    }
 
  return 0;
}
