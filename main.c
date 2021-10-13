#include <stdio.h>
#include <math.h>

int main(){
  
  printf("CALCULADORA BASICA\n");
  
  float n1, n2, res;
  int op;
  printf("Anota dos digitos\n");
  scanf("%f, %f", &n1, &n2);
  
  printf("Elegir una opcion\n");
  printf("1. Sumar\n");
  printf("2. Restar\n");
  printf("3. Multiplicar\n");
  printf("4. Dividir\n");
  printf("5. Exponencial\n");
  printf("6. Raiz\n");
  
  scanf("%d", op);
  
  while(op >= 1 && op <= 6){
    switch(op){
      case 1:
        res = n1 + n2;
        printf("\nLa suma es: %.1f", res);        
        break;
      case 2:
        res = n1 - n2;
        printf("\nLa resta es: %.1f", res);  
        break;
      case 3: 
        res = n1 * n2;
        printf("\nLa multiplicacion es: %.1f", res);  
        break;
      case 4:
        res = n1 / n2;
        printf("\nLa division es: %.1f", res);  
        break;
      case 5:
        res = float pow(n1, n2);
        printf("\nLa exponencial es: %.1f", res);  
        break;
      case 6:
        res = float pow(n1, (1/n2));
        printf("\nLa  es: %.1f", res); 
