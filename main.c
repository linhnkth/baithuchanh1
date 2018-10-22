#include <stdio.h>
#include <mem.h>
char s1[200];
char s2[200];

void concat() {
strcat(s1, s2);
};

int main() {
  concat();
    printf("nhap s1: \n");
    fgets(s1, sizeof(s1) * sizeof(char), stdin);
    printf("nhap s2: \n");
    fgets(s2, sizeof(s2) * sizeof(char), stdin);
    printf("sau khi thay doi la: %s", concat);
    return 0;
}
