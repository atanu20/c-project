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
	int i;
struct student s;
fp=fopen("stu.txt","rb");
if(fp==NULL)
{
	printf("error!");
	exit(1);
}
/*printf("enter roll no: ");
scanf("%d",&s.ro);
printf("enter name : ");
fflush(stdin);
gets(s.a);
printf("enter depert : ");
fflush(stdin);
gets(s.b);
	printf("date of addmition: ");
	scanf("%d %d %d",&s.dob.d,&s.dom.m,&s.doy.y);*/
		printf("\n%s\t\t\t%s\t\t\t%s\t\t\t%s\n","Roll no","Name","dept","date");
		printf("-------------------------------------------------------------------------------------------------------------\n");
	
	while(fread(&s,sizeof(s),1,fp)==1){
//printf("%-30s %-20s %-10d %s\n",s.na,s.cl,s.rl,s.date);
	

	//fread(&s,sizeof(struct student),i,fp);

	
	printf("%d\t\t",s.ro);
printf("%s\t\t\t",s.a);
printf("%s",s.b);


	
printf("\t\t\t");
	printf("%d-%d-%d\n",s.dob.d,s.dom.m,s.doy.y);

}

fclose(fp);
	return 0;
	
}
