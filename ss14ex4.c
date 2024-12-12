#include <stdio.h>

int main() {
    char str[] = "Phung Van Vuong lop B";
    char ch;
    int count = 0;
    printf("nhap vao mot ki tu: ");
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("ki tu '%c' xuat hien %d trong chuoi", ch, count);
    return 0;
}

