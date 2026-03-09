#include <stdio.h>

int main(void) {
    int count = 0;
    for (int i = 0; i < 6; i++) {
        int v;
        scanf("%d", &v);
        if (v % 2 == 0) count++;
    }
    printf("%d\n", count);
    return 0;
}
