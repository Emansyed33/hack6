#include <stdio.h>
#include "colorUtils.h"

int main() {
    double c, m, y, k;
    int r, g, b;

    // Test RGB to CMYK conversion
    if (rgbToCMYK(255, 0, 0, &c, &m, &y, &k) == 0) {
        printf("RGB(255, 0, 0) -> CMYK(%.2f, %.2f, %.2f, %.2f)\n", c, m, y, k);
    } else {
        printf("Error in RGB to CMYK conversion\n");
    }