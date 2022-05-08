#include <stdio.h>

int main() {

    int i, j, n1, n2;
    char setA[10], setB[10];

    printf("Enter the size of set A: ");
    scanf("%d", &n1);
    printf("Enter the size of set B: ");
    scanf("%d", &n2);

    printf("Enter elements of setA: \n");
    for (i = 0; i < n1; i++) {
        scanf(" %c", &setA[i]);
    }

    printf("\nEnter elements of setB: \n");
    for (i = 0; i < n2; i++) {
        scanf(" %c", &setB[i]);
    }

    printf("Cartesian Product:: \n{");
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            printf("(%c, %c), ", setA[i], setB[j]);
        }
    }
    printf("}");

    return 0;
}
