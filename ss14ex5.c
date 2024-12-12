#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    int i = 0;
    printf("nhap vao chuoi: ");
    gets(str);
    while (str[i] != '\0'){
        while (str[i] == ' ') {
            i++;
        }

        if (str[i] != '\0') {
            count++;
        }

        while (str[i] != ' ' && str[i] != '\0') {
            i++;
        }
    }
    printf("so tu trong chuoi la: %d\n", count);

    return 0;
}

