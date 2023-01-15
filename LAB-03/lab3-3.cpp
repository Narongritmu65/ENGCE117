#include <stdio.h>
#include <string.h>
struct Person {
    char name[20];
    int age;
    int score;
};

struct Person findscore(struct Person people[], int count); // prototype

int main() {
    struct Person people[5];
    strcpy(people[0].name, "ben");
    people[0].age = 21;
    people[0].score = 10;
    for( int i = 1 ; i < 5 ; i++ ){
        printf("People %d : name, age, score : ", i);
        scanf("%s %d %d", people[i].name, 
                         &people[i].age, 
                         &people[i].score);
    } // End loop

    struct Person mostscore;
    mostscore = findscore( people, 5 );
    printf("score the most : %s %d %d", mostscore.name, mostscore.age, mostscore.score);
    return 0;
}

struct Person findscore(struct Person people[], int count) {
    int maxscore, maxI;
    maxscore = people[0].score;
    maxI = 0;
    for ( int i = 1 ; i < count ; i++ ){
        if ( people[i].score > maxscore ){
            maxscore = people[i].score;
            maxI = i;
        }
    } // End loop
    return people[maxI];
}