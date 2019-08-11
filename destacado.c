#include<stdio.h>
#include<unistd.h>


int main()
{
    printf("\n\n\t\tCalcularemos tu promedio\n\n\n");

    int n, i1, k,i2, t, i3, n2;
    float sum = 0, x, average=0, p=0, sum2=0;


    printf("Cuantos ramos tienes este semestre: ");
    scanf("%d", &n);



    for(i1 = 0; i1 < n; i1++) //n es la cantidad de ramos
    {
      printf("\nCuantos tipos de evaluación tiene el ramo %d:\t",i1+1);
      scanf("%d",&k);


      for(i2=0; i2<k; i2++) //Tipos de evaluación de el ramo
      {
      printf("\n Que ponderacion tiene la evaluacion tipo %d: ", i2+1);
      scanf("%f",&p);
      printf("\n Cuantas evaluaciones hay de este tipo?");
      scanf("%d",&n2);
      printf("Escribe las %d notas",n2);

      for (i3=0; i3<n2; i3++)
        { scanf("%f", &x);
          sum+=x;
        }
      //el promedio de notas del tipo de evaluacion se tiene con sum y dividiendo por n2

      average+=(p/100)*(sum/n2);
      sum=0;
      }

      printf("tu promedio en ramo %d es %f",i1+1, average);

      sum2+=average;
      average=0;

    }


    printf("\n\n\nTo promedio final es =  %f", (sum2/n));
    sleep(1000);
    getchar();

    return 0;
}
