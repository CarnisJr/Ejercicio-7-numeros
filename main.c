#include<stdio.h>

int main(void){

    int num, contadorDivPro, cont, sum;
    int flag, aux;
    float promedioDivPro, contFloat, sumFloat;
    flag = 0;
    promedioDivPro = 0;
    cont = 0;
    sum = 0;

    /*Formula combinatoria C=n!/k!(n-k)!*/
    printf("\t---PROPIEDADES DE LOS NÚMEROS (ALGUNAS)--\t\n");
    printf("Ingrese un número: ");
    scanf("%d", &num);
    contadorDivPro = num;
    
    /*Determinar los divisores propios*/
    while (!flag){
        
        if (contadorDivPro > 1 && num % contadorDivPro == 0){

            aux = num / contadorDivPro; //divisores propios
            sum += aux; //suma de divisores propios
            cont++; //cantidad de divisores propios

            
            //printf("Este es el divisor propio: %d\n", aux);
            //printf("Este es cont: %d\n", cont);
            
        }
        --contadorDivPro;
        flag = (contadorDivPro == 1);
       
    }

    printf("\t---EL NÚMERO %d ES...---\t\n", num);
    /*comprobar si es abundante o deficiente*/
    if (sum > num){
        printf("Abundante\n");
    }else if(sum < num)
        printf("Deficiente\n");

    /*Comprobar si es perfecto o semiperfecto*/
    if(sum == num)
        printf("Perfecto\n");
    else
        printf("Semiperfecto\n");
    

    /*Transformar int a float para sacar el promedio*/
    sumFloat = (float) sum; //No sé si es mejor que se haga la conversión implícita
    contFloat = (float) cont; 
    
    promedioDivPro = sumFloat / cont;
    printf("El promedio es de sus divisores propios es: %.2f", promedioDivPro);


    return 0;
}