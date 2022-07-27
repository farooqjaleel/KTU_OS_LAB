#include<stdio.h>
#include<string.h>
struct file
{
char fn[120];
}f[100];
int main()
{
int n=0;
char dir[100];
char key[100];
int check,d;
printf("Enter the choice \n1.Create directory\n2.Create file directory\n3.Search\n4.Delete\n5.Display");
while(1)
{
int c;
printf("\nEnter the choice :");
scanf("%d",&c);
switch(c)
{
case 1:printf("\nEnter the directory name :");
       scanf("%s",dir);
       break;
case 2:n++;
       printf("\nEnter the name of files :");
       scanf("%s",f[n].fn);
       break;
case 3:
       printf("Enter the key to search :");
       scanf("%s",key);
       
       for(int i=0;i<=n;i++)
       {
       check=strcmp(key,f[i].fn);
       if(chzeck==0)
       {
       break;
       }
       }
       if(check==0)
       {
       printf("Matched");
       break;
       }
       else
       {
       printf("Not matched");
       }
       break;
case 4:printf("Enter the element to be deleted :");
       scanf("%s",key);
       for(int i=0;i<=n;i++)
       {
       check=strcmp(key,f[i].fn);
       if(check==0)
       {
       strcpy(f[i].fn,f[n-1].fn);
       n--;
       break;
       }
       }
       if(check==0)
       {
       printf("File deleted");
       break;
       }
       else
       {
       printf("Not matched can't delete !");
       }
       break;
case 5:printf("Directory name :");
       printf("%s",dir);
       printf("\nFilename :");
       for(int i=0;i<=n;i++)
       printf("%s",f[i].fn);
       printf(" ");
       
} 
}
}
