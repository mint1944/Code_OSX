#include "linkedStruct.h"

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

int Add(ListPtr l,
        Position p,
        user_Name addName,
        user_Phone addPhone,
        user_Addr addAddr,
        user_Level addLevel,
        user_LastedBillCode addLastedBillCode) {
    
    // 初始化并向表写入内容
    Position node = (Position)malloc(sizeof(Node));
    if(node == NULL) {
        return -1;
    }
    node->Name = *addName == 0 ? "未提供" : addName;
    node->Phone = *addPhone == 0 ? "未提供" : addPhone;
    node->Addr = *addAddr == 0 ? "未提供" : addAddr;
    node->Level = addLevel;
    node->LastedBillCode = *addLastedBillCode == 0 ? "未提供" : addLastedBillCode;
    
    printf("添加内容为: ");
    printf("%s ", node->Name);
    printf("%s ", node->Phone);
    printf("%s ", node->Addr);
    printf("%d ", node->Level);
    
    // 判断插入位置
    if(p == NULL && l->head == NULL) {
        node->next_node = l->head;
        l->head = node;
        printf("表被设置为头部\n");
        return 0;
    } else if(p != NULL) {
        node->next_node = p->next_node;
        p->next_node = node;
        printf("表被插入在头尾之间\n");
        return 0;
    }else if(l->tail == p || p == l->tail) {
        l->tail = node;
        printf("表被设置为尾部\n");
        return 0;
    }
    return 0;
}

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
         ) {
    Position p;
    for(p = l->head; p != NULL; p = p->next_node) {
        if(p->Name == originalName || p->Phone == originalPhone || p->Addr == originalAddr || p->Level == originalLevel || p->LastedBillCode == originalLastedBillCode) {
            printf("已找到需要修改的表\n");
            break;
        } else if(p == NULL) {
            printf("找不到需要修改的表\n");
            return  -1;
        }
    }
    
    if(editName == originalName) {
        editName = originalName;
    } else if(editPhone == originalPhone) {
        editPhone = originalPhone;
    } else if(editAddr == originalAddr) {
        editAddr = originalAddr;
    } else if(editLastedBillCode == originalLastedBillCode) {
        editLastedBillCode = originalLastedBillCode;
    } else if(editLevel == originalLevel) {
        editLevel = originalLevel;
    }
    
    p->Name = editName;
    p->Phone = editPhone;
    p->Addr = editAddr;
    p->Level = editLevel;
    p->LastedBillCode = editLastedBillCode;
    
    printf("修改完成\n");
    
    return 0;
}
