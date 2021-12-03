#include <stdio.h>
#include <stdlib.h>

char *strcopy(const char *source) {
    int len = sizeof(source) / sizeof(source[0]);
    char *copy = malloc(len + 1);
    char *dest = copy;

    while (*source != '\0') {
        *dest++ = *source++;
    }
    *dest = '\0';
    return copy;
}

char *strchr(const char *p, int ch) {
    char c;
    c = ch;
    for (;; ++p) {
        if (*p == c)
            return ((char *) p);
        if (*p == '\0')
            return (NULL);
    }
}

int main(void) {
    //Task 1
    char *str1 = (char *) malloc(1024);
    char *str2 = (char *) malloc(1024);
    scanf("%s", str1);
    scanf("%s", str2);
    char third[1024];
    snprintf(third, sizeof third, "%s%s", str1, str2);
    printf("%s\n", third);
    free(str1);
    free(str2);

    //Task 3
    printf("\n");
    char *str3 = (char *) malloc(1024);
    char *str4 = (char *) malloc(1024);
    scanf("%s", str3);
    scanf("%s", str4);

    int flag = 0;
    for (int index = 0; index < 10; index++)
        if (str3[index] != str4[index]) {
            flag = 1;
            break;
        }

    if (flag == 1) {
        puts("Строки не совпадают");
    } else {
        puts("Строки совпадают");
    }
    free(str3);
    free(str4);


    //Task 5
    printf("\n");
    char *src = (char *) malloc(1024);
    scanf("%s", src);
    printf("%s\n", strcopy(src));
    free(src);


    //Task 10
    printf("\n");
    char *p;
    char *fst = (char *) malloc(1024);
    char *scd = (char *) malloc(1024);
    scanf("%s", fst);
    scanf("%s", scd);
    for (p = fst; *p; ++p) {
        if (strchr(scd, *p)) {
            printf("Найден: %c\n", *p);
        }
    }
    free(fst);
    free(scd);

    //Task 12
    printf("\n");
    char *s1 = (char *) malloc(1024);
    char *s2 = (char *) malloc(1024);
    scanf("%s", s1);
    scanf("%s", s2);
    int len = 0, i, j;
    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                break;
            }
        }
        if (s1[i] == s2[j]) {
            break;
        }
        len++;
    }
    printf("%d\n", len);
    free(s1);
    free(s2);
}

//Починить русский
