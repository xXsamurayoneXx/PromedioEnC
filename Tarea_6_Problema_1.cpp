#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{
long Matricula [100], M;
float E1[100], E2[100], P[100], PE1, PE2, PP, SE1, SE2, SP, A;
int N, i, j;
do 
{
printf ("\nEscribe la cantidad de Estudiantes:");
scanf ("%d", &N);
}
while (N<=0||N>100);

      SE1=0;
      SE2=0;
      SP=0;
      
for (i=0; i<N; i++)
{
    printf ("\nEscribe la matricula:");
    scanf ("%d", &Matricula [i]);
    printf ("\nEscribe la calificacion del primer examen:");
    scanf ("%f", &E1[i]);
    printf ("\nEscriba la calificacion del egundo examen:");
    scanf ("%f", &E2[i]);
    P[i]=(E1[i]+E2[i])/2;
    SE1+=E1[i];
    SE2+=E2[i];
    SP+=P[i];
}
    for (i=0; i<N-1; i++)
    {
    for (j=0; j<N-1; j++)
    if (P[i]<P[j])
    {
    	A=P[i];
    	P[i]=P[j];
    	P[j]=A;
    	
    	A=E2[i];
    	E2[i]=E2[j];
    	E2[j]=A;
    	
    	A=E1[i];
    	E1[i]=E1[j];
    	E1[j]=A;
    	
    	M=Matricula[i];
    	Matricula[i]=Matricula[j];
    	Matricula[j]=M;
    }
    }
system ("cls");
 printf ("\nLa matricula de Estudiantes ordenada por promedio asendentemente:");  
 for (i=0; i<N; i++)
 printf ("\nMatricula:%d Examen 1:%.2f Examen 2:%.2f Promedio:%.2f", Matricula[i], E1[i], E2[i], P[i]);
 
 PE1=SE1/N;
 PE2=SE2/N;
 PP=SP/N;
 
 printf ("\nEl promedio del Examen 1 es:%.2f", PE1);
 printf ("\nEl promedio del Examen 2 es:%.2f", PE2);   
 printf ("\nEl promedio final es:%.2f", PP);
 
 printf ("\nLa lista de estudiantes que reprobaron el examen 1 es:");
 
 for (i=0; i<N; i++)
 if (E1[i]<70)
 printf ("%d %.2f", Matricula[i], E1[i]);
 
 printf ("\nLa lista de estudiantes que reprobaron el examen 2 es:");
 
 for (i=0; i<N; i++)
 if (E2[i]<70)
 printf ("%d %.2f", Matricula[i], E2[i]);
 
 printf ("\nLa lista de estudiantes con promedio superior a 95:");
 for (i=0; i<N; i++)
 if (P[i]>95)
 printf ("%d %.2f", Matricula[i], P[i]);
 
 getch();
return 0;
}
