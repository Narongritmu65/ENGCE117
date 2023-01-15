#include <stdio.h>

struct racc {
    int age;
    int height;
    int weight;
};

void set( struct racc *state ); //Prototype

int main() {
    struct racc d;
    set(&d);
    printf("racc age : %d year\n", d.age);
    printf("racc height : %d cm\n", d.height);
    printf("racc weight : %d kg\n", d.weight);
    return 0;
}

void set( struct racc *state ){
    (*state).age = 2;
    (*state).height = 15;
    (*state).weight = 10;
}