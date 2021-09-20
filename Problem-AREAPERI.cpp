#include <stdio.h>

int main(){
    int p, l;
    scanf("%d %d", &p, &l);
    int area = p * l;
    int perimeter = 2 * (p + l);
    if (area > perimeter){
        printf("Area\n");
        printf("%d\n", area);
    }
    else if (area == perimeter){
        printf("Eq\n");
        printf("%d\n", area);
    }
    else {
        printf("Peri\n");
        printf("%d\n", perimeter);
    }
    return 0;
}
