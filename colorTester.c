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
    // Test CMYK to RGB conversion
    if (cmykToRGB(0, 1, 1, 0, &r, &g, &b) == 0) {
        printf("CMYK(0, 1, 1, 0) -> RGB(%d, %d, %d)\n", r, g, b);
    } else {
        printf("Error in CMYK to RGB conversion\n");
    }

    return 0;
}
