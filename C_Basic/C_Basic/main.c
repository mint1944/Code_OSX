#include <stdio.h> // 标准输入输出库
#include <sys/time.h> // 获得当前时间
#include <stdlib.h> // 为了分配内存

void getCurrentTime(void); // 获取当前的时间
void getTimer(void); // 设置定时器
void setMalloc(struct Cus* coo); // 分配内存

int main(int argc, const char * argv[]) {
    struct Cus {
        char Cus_Name[50];
        char Cus_Code[50];
        char Cus_Addr[256];
        char Cus_Phone[50];
        char Cus_LastBillTime[50];
    } cus = {"MINt", "2003410121", "Fujian,Quanzhou, LMU", "18650433278", "2022/04/32"};
    struct Cus *p;
    p = malloc(sizeof(&cus));
    p = &cus;
    printf("p的大小是: %d\n", sizeof(p));
    printf("输出值: %s,%s,%s,%s,%s\n", p->Cus_Name, p->Cus_Code, p->Cus_Phone, p->Cus_Addr, p->Cus_LastBillTime);
    printf("地址值为: %p, %p, %p, %p, %p\n", p->Cus_Name, p->Cus_Code, p->Cus_Phone, p->Cus_Addr, p->Cus_LastBillTime);
    getTimer();
    return 0;
}

void getCurrentTime() {
    time_t timetemp; // 日历时间
    time(&timetemp); // 获取时间
    struct tm *p;
    printf("Now Time: %s", asctime(gmtime(&timetemp))); // asctime将tm结构体中的数据转换成字符串输出
    p = localtime(&timetemp); //转换为当地时间 年的时间是从1900年开始计算
    printf("当地时间是: %d/%d/%d - %d:%d\n", 1900 + p->tm_year, 1 + p->tm_mon, p->tm_mday, p->tm_hour, p->tm_min, p->tm_sec);
}

void getTimer() {
    struct timeval time1, time2; // 定义两个计时器来计算时间差
    struct timezone timeez; // 获取当前时区
    gettimeofday(&time1, &timeez); // 获取当前时间
    //printf("tv_sec: %d\n", time1.tv_sec); // 打印秒
    //printf("tv_usec: %d\n",time1.tv_usec); // 打印毫秒
    //printf("tz_minuteswest: %d\n", timeez.tz_minuteswest);
    //printf("tz_dsttime: %d\n", timeez.tz_dsttime);
    getCurrentTime();
    gettimeofday(&time2, &timeez);
    printf("代码执行时间: %d微秒\n", time2.tv_usec - time1.tv_usec);
}
