#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Пробелы считаются лишними, если их подряд идет более двух, если они стоят в конце строки после
//последней точки, если стоят после открывающегося парного знака препинания.
void f(char *str) {
    int i, neword;
    i = 0;
    neword = 1;
    while (str[i]) {
        if (str[i] == ' ') {
            if ((str[i - 1] == '(') || (str[i - 1] == '"') || (str[i - 1] == ':') || (str[i - 1] == '.')) {
                neword = 0;
            } else {
                neword = 1;
            }
        } else {
            if (neword && i) {
                printf(" ");
            }
            printf("%c", str[i]);
            neword = 0;
        }
        i++;
    }
}

double **Distance(double **mass, int size) {
    double **outmass;
    int num;
    double x1, x2, y1, y2;
    outmass = (double **) malloc(size * sizeof(double *));

    for (int i = 0; i < size; i++) {
        *(outmass + i) = (double *) malloc((size - 1) * sizeof(double));
    }

    /* Пользуемся той же формулой, что и в лабораторной работе 7,
     * для нахождения длины отрезка до других отрезков.
     * Т.к. массив mass - двумерный, мы с легкостью находим
     * расстояние от одной точки до другой.*/

    for (int i = 0; i < size; i++) {
        num = 0;
        for (int j = 0; j < size; j++) {
            if (i != j) {                //Как это выглядит:
                x1 = *(*(mass + i) + 0); //mass[i][0]
                y1 = *(*(mass + i) + 1); //mass[i][0+1]
                x2 = *(*(mass + j) + 0); //mass[j!=i][0]
                y2 = *(*(mass + j) + 1); //mass[j!=i][1]
                *(*(outmass + i) + num) = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));
                num++;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        free(mass[i]);
    }
    free(mass);
    return outmass;
}


void main() {
    printf("Amount of points: \n");
    int N;
    scanf("%d", &N);
    double **mass;
    mass = (double **) malloc(N * sizeof(double *));

    for (int i = 0; i < N; i++) {
        *(mass + i) = (double *) malloc(2 * sizeof(double));
    }
    printf("Points (x;y) values: \n");
    //С помощью подобного ввода мы получаем двумерный массив
    //где mass[i][0] - координата X, mass[i][1] - Y
    for (int i = 0; i < N; i++) {
        scanf("%lf %lf\n", (*(mass + i) + 0), (*(mass + i) + 1));
    }
    double **rez;
    rez = Distance(mass, N);
    printf("\n");
    for (int i = 0; i < N; i++) {
        printf("Distance from point %d to the other points: ", i + 1);
        for (int j = 0; j < N - 1; j++) {
            printf("%3.3lf ", *(*(rez + i) + j));
        }
        printf("\n");
    }
    printf("\n");

    //Task 5
    char str[1024];
    printf("Enter a character string: \n");
    gets(str);
    f(str);
}
