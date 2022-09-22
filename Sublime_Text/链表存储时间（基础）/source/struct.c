#include "struct.h"

// 函数实现

void init(ListPtr l) {
	l->head = l->tail = NULL;
}

ListPtr Create() {
	ListPtr l = (ListPtr)malloc(sizeof(List));
	if(l != NULL) {
		init(l);
	}

	return l;
}
int addNode(ListPtr l, NodePtr p, getedTime (*getNowTime)(void)) {
	NodePtr node = (NodePtr)malloc(sizeof(Node));
	if(node == NULL) {
		return -1;
	}

	node->nowTime = getNowTime();

	
}

int deleteNode(ListPtr l, getedTime delTime) {

}

int eidtNode(ListPtr l, getedTime originalTime, getedTime newTime) {

}

NodePtr findNode(ListPtr l, getedTime findTime) {

}