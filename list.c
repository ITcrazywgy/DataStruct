//
// Created by Administrator on 2020/1/15 0015.
//

#include "list.h"
#include <stdlib.h>
#include "fatal.h"

struct Node {
    ElementType Element;
    Position Next;
};

List MakeEmpty(List L) {
    if (L != NULL)
        DeleteList(L);
    L = malloc(sizeof(struct Node));
    if (L == NULL)
        FatalError("Out of memory!");
    L->Next = NULL;
    return L;
}

int IsEmpty(List L) {
    return L->Next == NULL;
}

int IsLast(Position P) {
    return P->Next == NULL;
}

Position Find(ElementType X, List L) {
    Position P;
    P = L->Next;
    while (P != NULL && P->Element != X)
        P = P->Next;
    return P;
}

void Delete(ElementType X, List L) {
    Position P, TmpCell;
    P = FindPrevious(X, L);
    if (!IsLast( P)) {
        TmpCell = P->Next;
        P->Next = TmpCell->Next;
        free(TmpCell);
    }
}

Position FindPrevious(ElementType X,List L){
    Position  P;
    P = L;
    while (P->Next !=NULL && P->Next->Element!=X){
        P = P->Next;
    }
    return P;
}


void DeleteList(List L) {
    Position P;
    P = L->Next;
    while (P != NULL) {
        free(P);
        P = P->Next;
    }
}


