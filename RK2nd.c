#include <stdio.h>

float f(float x, float y){
    return (x + y + (x*y));
}

int main(){
    float  y0, x0, h, k1, k2;
    
    printf("Input x0: ");
    scanf("%f", &x0);

    printf("Input y0: ");
    scanf("%f", &y0);

    printf("Input h: ");
    scanf("%f", &h);

    float x;
    printf("Enter value of x for which f(x) is to be calculated: ");
    scanf("%f", &x);

    int n = (x-x0)/h;

    float xs[n], ys[n];
    for (int i=0; i<n; i++){
        xs[i] = x0 + h * (i+1);
        printf("x%d: %.4f\n", i+1, xs[i]);
    }

    int counter = 0;
    while (counter < n){
        k1 = h * f(x0, y0);
        k2= h * f(x0 + h, y0 + k1);
        ys[counter] = y0 + 0.5 * (k1 + k2);

        printf("y%d: %f \n", counter + 1, ys[counter]);

        x0 = xs[counter];
        y0 = ys[counter];
        counter++;
    }

    return 0;

}