#include<stdio.h>
int main ()
{
	int matriz [3][3];
	
	//2 5 8 
	//7 1 10
	//9 5 -3
	
	
	for(int i = 0;i<=2;i++)
	{
	 printf("\nEstoy en la fila %d",i+1);
	  for(int j = 0;j<=2;j++)
	  {
	  	printf("\nEstoy en la columna %d",j+1);
	  	printf("\nIngrese el dato de la fila %d y columna  %d : ",i+1,j+1);
	  	scanf("%d",&matriz[i][j]);
	  }
	 
	}
	printf("\n\n\");
    for(int i = 0;i<=2;i++)
	{
	  for(int j = 0;j<=2;j++)
	  {
	  	//printf("\nEstoy en la columna %d",j+1);
	  	printf(" %d ",matriz[i][j]);
	  }
	  printf("\n");
	}

  //  printf("%d",matriz [0][0]);
   // printf("%d",matriz [0][1]);
   // printf("%d\n",matriz [0][2]);
  //  printf("%d",matriz [1][0]);
  //  printf("%d",matriz [1][1]);
   // printf("%d\n",matriz [1][2]);
   // printf("%d",matriz [2][0]);
   // printf("%d",matriz [2][1]);
   // printf("%d\n",matriz [2][2]);
    return 0;
}
