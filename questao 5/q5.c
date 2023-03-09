#include <stdio.h>
#include <string.h>

void inverteString(char *string) {
    int i, j;
    char temp;
    j = strlen(string) - 1;
    for (i = 0; i < j; i++, j--) {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
}

int main() {
    char string[100];
    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    inverteString(string);
    printf("String invertida: %s", string);
    return 0;
}
