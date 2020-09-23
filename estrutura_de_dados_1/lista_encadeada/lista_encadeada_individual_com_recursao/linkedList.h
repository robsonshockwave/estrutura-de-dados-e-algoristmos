#ifndef _LINKED_LIST_
#define _LINKED_LIST_   

typedef struct student{
    char name[30];
    double grade;
    int registerNumber;
}Student;

typedef struct element *List;

List *createList();

int freeList(List *li);

int printList(List *li);

int insertAtBeginning(List *li, Student stud);

int insertAtEnd(List *li, Student stud);

int insertIncreasingOrder(List *li, Student stud);

int deleteAtBeginning(List *li);

int deleteAtEnd(List *li);

int deleteAnyValue(List *li, int p);

int searchValueByPosition(List *li, int p, int *v);

int sizeByRecursion(List *li);

int searchPositionByValue(List *li, int v, int *p);






#endif