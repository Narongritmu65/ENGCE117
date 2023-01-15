#include <stdio.h>

struct him {
    int age;
    int height;
    int weight;
};

int main() {
    struct him body;
    body.age = 21;
    body.height = 173;
    body.weight = 65;
    printf("him age : %d year\n", body.age );
    printf("him height : %d cm\n", body.height );
    printf("him weight : %d kg\n", body.weight );
    return 0;
}