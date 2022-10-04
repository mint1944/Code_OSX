#ifndef __MUTILINKEDSTRUCT_H__
#define __MUTILINKEDSTRUCT_H__

#include <stdio.h>
#include <stdlib.h>

typedef char* Str;

typedef struct node Node;
typedef Node* NodePtr;

typedef struct list List;
typedef List* ListPtr;

typedef strcut lmanage listManagement;
typedef listManagement* listManagementPtr;

struct node {
	Str Strs;
	NodePtr next_node;
};

struct list {
	NodePtr head;
	NodePtr tail;
};

struct lmanage {
	ListPtr head;
	ListPtr tail;
};

void initList(ListPtr l);
void initListManagement(listManagementPtr lm);
ListPtr createList();
listManagementPtr createListManagement();

#endif