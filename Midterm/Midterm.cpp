//นายณรงฤทธิ์ มูลเหลา 65543206054-0 sec 2
#include <stdio.h>

struct NumNode{
   int num;
   struct NumNode *next;
};

struct NumNode *Addnode(struct NumNode **walk, int n);
void Showall(struct NumNode *walk);
void Updatenode( struct NumNode **walk, int select, int num1);
void Showback( struct NumNode **walk );
void Swapnode( struct NumNode **walk, int select, int num1);

int main(){
    struct NumNode *start;
    start = NULL;
    Addnode(&start, 10);
    Addnode(&start, 20);
    Addnode(&start, 30);
    Addnode(&start, 40);
    Showall(start);
    Updatenode(&start, 10, 99 );
    Showall(start);
    Showback(&start);
    Showall(start);
    Swapnode(&start, 40, 99);
    Showall(start);
    Swapnode(&start, 20, 30);
    Showall(start);
   return 0;
}

struct NumNode *Addnode(struct NumNode **walk, int num1){
    while (*walk != NULL){
        walk = &(*walk)->next;
    }
    *walk = new struct NumNode;
    (*walk)->num = num1;
    (*walk)->next = NULL; 
    return *walk;
}

void Showall(struct NumNode *walk){
    while (walk != NULL)
    {
        printf("%d ",walk->num);
        walk = walk->next;
    }
}

void Updatenode ( struct NumNode **walk, int select, int num1){
    while ( ((*walk)->num != select)){
        walk = &(*walk)->next;
    }
     (*walk)->num = num1;
     printf("\n");
}

void Showback(struct NumNode** walk){

    struct NumNode *pren = NULL;
    struct NumNode *next = NULL;

    while ((*walk) != NULL) {
        next = (*walk)->next;
        (*walk)->next = pren;
        pren = (*walk);
        (*walk) = next;
    }
    *walk = pren;
     printf("\n");
}

void Swapnode( struct NumNode **walk, int selectA, int numA){
   
    struct NumNode *PrenodeA = NULL, *CurrentA = *walk;
    while (CurrentA && CurrentA->num != numA) {
        PrenodeA = CurrentA;
        CurrentA = CurrentA->next;
    }
    
    struct NumNode *PrenodeB = NULL, *CurrentB = *walk;
    while (CurrentB && CurrentB->num != selectA) {
        PrenodeB = CurrentB;
        CurrentB = CurrentB->next;
    }
    
    if (PrenodeA != NULL){
        PrenodeA->next = CurrentB;
    }else{
        *walk = CurrentB;
    }

    if (PrenodeB != NULL){
        PrenodeB->next = CurrentA;
    }else{ 
        *walk = CurrentA;
    }
    struct NumNode* temp = CurrentB->next;
    CurrentB->next = CurrentA->next;
    CurrentA->next = temp;
    printf("\n");
}
