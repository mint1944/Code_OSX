#pragma once
#ifndef __STRUCT_H__
#define __STRUCT_H__
#include "header.h"

// 类型自定义
typedef char* getedTime;
typedef struct node Node;
typedef Node* NodePtr;
typedef struct list List;
typedef List* ListPtr;

// 结构体定义
struct node {
	getedTime nowTime;
	NodePtr next_node;
};

struct list {
	NodePtr head;
	NodePtr tail;
};

// 函数定义
void init(ListPtr l);
ListPtr Create();
int addNode(ListPtr l, NodePtr p, getedTime addTime);
int deleteNode(ListPtr l, getedTime delTime);
int eidtNode(ListPtr l, getedTime originalTime, getedTime newTime);
NodePtr findNode(ListPtr l, getedTime findTime);

#endif