#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    printf("nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            count++;
        }
    }

    printf("S? k� t? l� ch? c�i trong chu?i l�: %d\n", count);

    return 0;
}

