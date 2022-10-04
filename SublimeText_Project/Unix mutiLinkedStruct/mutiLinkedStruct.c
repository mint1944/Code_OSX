#include "mutiLinkedStruct.h"

void initList(ListPtr l) {
	l->head = l->tail = NULL;
}

void initListManagement(listManagementPtr lm) {
	listManagementPtr lm = (listManagementPtr)malloc(sizeof(listManagement));

	if(lm != NULL) {
		initListManagement(lm);
	}

	printf("成功创建链表管理器\n")
	return l;
}

ListPtr createList() {
	
}

listManagementPtr createListManagement() {

}