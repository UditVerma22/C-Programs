#include<stdio.h>
void main()
{
int P,C,M,E,H,Total,Division;
float Percentage;
printf("Enter the marks of Physics Chemistry Maths English Hindi");
scanf("%d%d%d%d%d",&P,&C,&M,&E,&H);
printf("S.No             Subject           Marks\n");
printf("-----------------------------------------------\n");
printf("1                Physics              %d\n",P);
printf("2               Chemistry             %d\n",C);
printf("3                Maths                %d\n",M);
printf("4                English              %d\n",E);
printf("5                Hindi                %d\n",H);
printf("-----------------------------------------------\n");
Total=P+C+M+E+H;
printf("%d\n",Total);


Percentage=(float)(Total/5);
printf("%f\n",Percentage);

if(Percentage>=65)
{
    printf("First Division\n");
}
else if(Percentage>=50)
{
    printf("Second Division\n");
}
else if (Percentage>=40)
{
    printf("Third Division\n");
}
else
{
    printf("Fail\n");
}
return 0;
}

