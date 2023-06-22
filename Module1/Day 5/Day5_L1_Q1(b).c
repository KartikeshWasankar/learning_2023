#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box *box) {
    return box->length * box->width * box->height;
}

double calculateSurfaceArea(struct Box *box) {
    double topArea = box->length * box->width;
    double frontArea = box->length * box->height;
    double sideArea = box->width * box->height;

    return 2 * (topArea + frontArea + sideArea);
}

int main() {
    struct Box myBox;
    struct Box *boxPtr = &myBox;

    boxPtr->length = 7.0;
    boxPtr->width = 6.0;
    boxPtr->height = 5.0;

   
    (*boxPtr).length = 7.0;
    (*boxPtr).width = 6.0;
    (*boxPtr).height = 5.0;

    
    double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
