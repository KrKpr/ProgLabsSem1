#include <stdio.h>
#include <math.h>

enum Paints {
    Aquarelle = 1,
    Oil,
    WaterBased,
    Acrylic,
    Enamel
};

struct Otrezok {
    int x1;
    int y1;
    int x2;
    int y2;
};

struct bitf {
    unsigned int a: 1;
    unsigned int b: 1;
    unsigned int c: 1;
};

union mp3 {
    struct bitf b;
    short i;
};

void main() {
    //Task 1 (отобразить: водоэмульсионная)
    enum Paints display;
    display = WaterBased;
    printf("%d\n", display);

    //Task 2 The segment length formula is √((X2-X1)² + (Y2-Y1)²).
    printf("\n");
    struct Otrezok l;
    float dlina;

    l.x1 = 2;
    l.y1 = 4;
    l.x2 = 4;
    l.y2 = 1;
    //Используем модуль, ибо pow с отрицательными выдает NaN
    int ownX = abs(l.x2 - l.x1);
    int ownY = abs(l.y2 - l.y1);
    dlina = sqrt(pow(ownX, 2) + pow(ownY, 2));
    printf("%f\n", dlina);

    //Task 3
    printf("\n");
    union mp3 t;
    scanf("%x", &t.i);

    if (t.b.a == 1) {
        printf("Play On\n");
    } else {
        printf("Play off\n");
    }
    if (t.b.b == 1) {
        printf("Pause on\n");
    } else {
        printf("Pause off\n");
    }
    if (t.b.c == 1) {
        printf("Recording on\n");
    } else {
        printf("Recording off\n");
    }

    printf("%d\n", t.b.a);
    printf("%d\n", t.b.b);
    printf("%d\n", t.b.c);
}
