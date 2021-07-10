#include<stdio.h>
#include<stdlib.h>
struct student{
	
	int ro;
	char a[50];
	char b[50];
	struct date{
		int d,m,y;
		
	}dob,dom,doy;
	
};
int main()
{
	FILE *fp;
	
struct student s;
fp=fopen("stu.txt","ab");
if(fp==NULL)
{
	printf("error!");
	exit(1);
}
printf("enter roll no: ");
scanf("%d",&s.ro);
printf("enter name : ");
fflush(stdin);
gets(s.a);
printf("enter depert : ");
fflush(stdin);
gets(s.b);
	printf("date of addmition: ");
	scanf("%d %d %d",&s.dob.d,&s.dom.m,&s.doy.y);
	
//	printf("%d\n",s.ro);
//	puts(s.a);
//	printf("\n");
//	puts(s.b);
//	printf("\n");
//	printf("%d-%d-%d",s.dob.d,s.dom.m,s.doy.y);

fwrite(&s,sizeof(struct student),1,fp);
printf("data stored successfully");
fclose(fp);
	return 0;
	
}
