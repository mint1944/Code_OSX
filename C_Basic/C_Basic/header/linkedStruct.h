#ifndef __LINKEDSTRUCT_H__
#define __LINKEDSTRUCT_H__
#include <stdio.h>
#include <stdlib.h>
typedef char* user_Name;
typedef char* user_Phone;
typedef char* user_Addr;
typedef char* user_LastedBillCode;
typedef int user_Level;
typedef struct node Node;
typedef Node* NodePtr;
typedef NodePtr Position;

struct node {
    user_Name Name;
    user_Phone Phone;
    user_Addr Addr;
    user_Level Level;
    user_LastedBillCode LastedBillCode;
    NodePtr next_node;
};

typedef struct {
    NodePtr head;
    NodePtr tail;
}List, *ListPtr;

void init(ListPtr l);
ListPtr Create(void);
int Add(
        ListPtr l,
        Position p,
        user_Name addName,
        user_Phone addPhone,
        user_Addr addAddr,
        user_Level addLevel,
        user_LastedBillCode addLastedBillCode
        );
int Edit(
         ListPtr l,
         user_Name originalName,
         user_Phone originalPhone,
         user_Addr originalAddr,
         user_Level originalLevel,
         user_LastedBillCode originalLastedBillCode,
         user_Name editName,
         user_Phone editPhone,
         user_Addr editAddr,
         user_Level editLevel,
         user_LastedBillCode editLastedBillCode
         );
int Delete(ListPtr l,
           user_Name deleteName,
           user_Phone deletePhone,
           user_Addr deldeteAddr,
           user_Level deleteLevel,
           user_LastedBillCode deleteLastedBillCode
           );


#endif
