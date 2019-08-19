#include <stdio.h>
#include <stdlib.h>

struct ramo
{
   float promedio;
   char *ramo;
   struct ramo *next;
};

struct ramo *inicio = NULL;
void insertar_ramos(float	promedio, char nombre[]);
void print_prom();
void prom_total();

int main ()
{


    printf("\n\n\t\tCalcularemos tu promedio\n\n\n");

    int n, i1, k,i2, i3, n2;
    float sum = 0, x, average=0, p=0, sum2=0;
    //char nombre_ramo[] = "calculo4XD";
    char nombre_ramo[50];

    struct ramo *temp;


    printf("Cuantos ramos tienes este semestre: ");
    scanf("%d", &n);
    //n = 5;
        for(i1 = 0; i1 < n; i1++) //n es la cantidad de ramos
    {
      temp = (struct ramo*)malloc(sizeof(struct ramo));
	  printf("\nComo se llama el ramo %d:\t",i1+1);
      scanf("%s",&nombre_ramo);

      printf("\nCuantos tipos de evaluacion tiene el ramo %d:\t",i1+1);
      scanf("%d",&k);
      //k = 1;

      for(i2=0; i2<k; i2++) //Tipos de evaluacion de el ramo
      {
      printf("\n Que ponderacion tiene la evaluacion tipo %d: ", i2+1);
      scanf("%f",&p);
      //p=100;
      printf("\n Cuantas evaluaciones hay de este tipo?");
      scanf("%d",&n2);
      //n2=1;
      printf("Escribe las %d notas",n2);

      for (i3=0; i3<n2; i3++)
        { scanf("%f", &x);
          sum+=x;
        }
      //el promedio de notas del tipo de evaluacion se tiene con sum y dividiendo por n2

      average+=(p/100)*(sum/n2);
      sum=0;
      }

      //printf("tu promedio en ramo %d es %f",i1+1, average);

      insertar_ramos(average, nombre_ramo);


      //sum2+=average;
      average=0;

    }




print_prom();
prom_total();



	return 0;
}



void insertar_ramos(float promedio, char nombre[])//Funcion para poder insertar ramos/objetos
{
   struct ramo *temp;
   temp = (struct ramo*)malloc(sizeof(struct ramo));
   struct ramo *aux;
   aux = (struct ramo*)malloc(sizeof(struct ramo));
   if (inicio == NULL)
   {
      inicio = temp;
      inicio->promedio = promedio;
      inicio->ramo = nombre;
      inicio->next = NULL;
      return;
   }

   temp = inicio;


   while (temp->next != NULL)
      temp = temp->next;


      aux->promedio = promedio;
      aux->ramo = nombre;
      aux->next    = NULL;

      temp->next = aux;
}

void print_prom()
{
	struct ramo *temp = (struct ramo*)malloc(sizeof(struct ramo));

      if (inicio == NULL)
   {
      printf("\n\n No hay ramos ingresados");
      return;
   }

temp = inicio;

   while (temp != NULL){
    printf("\n\n El promedio del ramo %s es un %f",temp->ramo,temp->promedio);
      temp = temp->next;
	}
}

void prom_total()
{
	struct ramo *temp = (struct ramo*)malloc(sizeof(struct ramo));
  int i = 0;
  float total = 0;
  int cantidad_ramos=0;

      if (inicio == NULL)
   {
      printf("\n\n No hay ramos ingresados");
      return;
   }

temp = inicio;

   while (temp != NULL){
      total = total + temp->promedio;
      temp = temp->next;
      cantidad_ramos++;
	}

  printf("\n\n Promedio total de notas del semestre es:  %f",(total/cantidad_ramos));
}
