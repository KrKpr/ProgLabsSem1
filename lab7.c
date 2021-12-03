#include <stdio.h>

enum Paints {
    Aquarelle = 1,
    Oil,
    WaterBased,
    Acrylic,
    Enamel
};

struct Otrezok {
    int x;
    int y;
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
    //Task 1 (отобразить: водоэмульсионная) //поменять названия переменных
    enum Paints a, b, c, d, e;
    a = Aquarelle;
    b = Oil;
    c = WaterBased;
    d = Acrylic;
    e = Enamel;
    //printf("a = %d\n", a);
    //printf("b = %d\n", b);
    printf("%d\n", c);
    //printf("d = %d\n", d);
    //printf("e = %d\n", e);

    //Task 2 //Переписать структуру (и формулу) открезка
    printf("\n");
    struct Otrezok l;
    int dlina;

    l.x = -7;
    l.y = 6;
    dlina = l.y - l.x;
    printf("%d\n", dlina);

    //Task 3 //Починить вывод на русском
    printf("\n");
    union mp3 t;
    scanf("%x", &t.i);

    if (t.b.a == 1) {
        printf("Воспроизведение вкл\n");
    } else {
        printf("Воспроизведение выкл\n");
    }
    if (t.b.b == 1) {
        printf("Пауза вкл\n");
    } else {
        printf("Пауза выкл\n");
    }
    if (t.b.c == 1) {
        printf("Запись вкл\n");
    } else {
        printf("Запись выкл\n");
    }

    printf("%d\n", t.b.a);
    printf("%d\n", t.b.b);
    printf("%d\n", t.b.c);
}
