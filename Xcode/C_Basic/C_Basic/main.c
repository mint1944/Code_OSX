#include "linkedStruct.h"

int main(int argc, char *argv[]) {
    ListPtr l = Create();
    int AddCode = Add(l, NULL, "MINt", "", "", 0, "");
    if(AddCode != 0) {
        printf("添加错误\n");
        return -1;
    }
    int editCode = Edit(l, "MINt", "", "", 0, "", "Jack", "", "", 1, "");
    if(editCode != 0) {
        printf("修改错误\n");
        return -1;
    }
    return 0;
}
