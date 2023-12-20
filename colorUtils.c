include<stdio.h>
#include<math.h>
#include<stddef.h>
int rgbtoCMYK(int r, int g, int b, double *c, double *m, double *y, double *k){
    if (r < 0 || r > 255 || g < 0 || b < 0 || b > 255)
    return 1;
    if(r == 0 && g == 0 && b == 0){
        *c = 0; *m =0; *y = 0; *k = 1;
        return 0;
    } 
double rPrime = r/255.0;
double gPrime = g/255.0;
double bPrime = b/255.0;
*k = 1 - fmax(rPrime, fmax(gPrime, bPrime));
*c = (1 - rPrime - *k) / (1 - *k);
    *m = (1 - gPrime - *k) / (1 - *k);
    *y = (1 - bPrime - *k) / (1 - *k);

    return 0;
}

int cmykToRGB(double c, double m, double y, double k, int *r, int *g, int *b) {
    if (c < 0 || c > 1 || m < 0 || m > 1 || y < 0 || y > 1 || k < 0 || k > 1) return 1; // Out of bounds error
    if (!r || !g || !b) return 2; // Null pointer error

    *r = (int) round((1 - c) * (1 - k) * 255);
    *g = (int) round((1 - m) * (1 - k) * 255);
    *b = (int) round((1 - y) * (1 - k) * 255);

    return 0;
}


}
