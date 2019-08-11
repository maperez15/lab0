#include<stdio.h>
#include<unistd.h>

int main()
{
    printf("\n\n\t\tCalcularemos tu promedio\n\n\n");

    int n, i1, k,i2;
    float sum = 0, x, average=0, average2=0;

    printf("Cuantos ramos tienes este semestre: ");
    scanf("%d", &n);

    printf("\n\n\nEnter %d elements\n\n", n);
    for(i1 = 0; i1 < n; i1++)
    {
      printf("\nCuantas notas tiene tu ramo %d:\t",i1+1);

      scanf("%d",&k);

      for(i2=0; i2<k; i2++)
      {
        scanf("%f", &x);
        sum += x;

      }

    printf("tu promedio en ramo %d es %f",i1+1, sum/k );
    printf("%f\n\n",k);

    average+=(sum/k);
    }
    average2+=(average);

    printf("\n\n\nTo promedio final es =  %f", (average2/n));
    sleep(1000);

    return 0;
}
