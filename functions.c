#include <math.h>

double linear (double num){
    return num;
}

double logarithmic (double num){
    if(num <= 0) return 0;
    else return num;
}

double squareroot (double num){
    return sqrt(num);
}

double reciprocal (double num){
    return 1/num;
}

void calc(int min, int max, double(*functionPtr)(double)){
    if (max < min){
        int aux = max;
        max = min;
        min = aux;
    }
    int i = min;
    while(i <= max){

        printf("%f , ", (*functionPtr)(i));
        i++;
    }
}