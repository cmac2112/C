#include <stdio.h>

int main(){
    float fahr, celcius;
    int lower, upper, step;

    lower = 0; /*lower limit of the temp table*/
    upper = 300; /*upper limit of the temp table*/
    step = 20;  /*step size*/

    fahr = lower;
    while(fahr <= upper){
        celcius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", celcius, fahr);
        fahr = fahr + step;
    }
}