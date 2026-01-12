/*Evaluate the sine series, sin(x)= x- x3 /3! + x5 /5!–x7 /7!+ ……… to n terms.*/
#include <stdio.h>
#include <math.h>
int main(){
    int n; 
    double sum=0, x;
    printf("Enter 'n': ");
    scanf("%d", &n);
    printf("Enter 'x': ");
    scanf("%lf", &x);
    for (int i=1; i<=n; i++){
        float fact=1;
        for (int j=1; j<=(2*i-1); j++){
            fact= fact*j;
        }
        sum= sum + (pow(x, 2*i-1)/fact)*pow(-1,i+1);
        printf("%lf \n", sum);

    }
    printf("The sum is: %lf", sum);
    return 0;
}