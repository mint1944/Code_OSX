#include <stdio.h>
#include <sys/time.h>

int main(int argc, char *argv[]) {
    time_t now;
    struct tm *p;
    time(&now);
    printf("现在的时间: %s\n", asctime(gmtime(&now)));
    p = localtime(&now);
    printf("%d,%d,%d,%d:%d:%d\n", 1900 + p->tm_year, 1 + p->tm_mon, p->tm_mday ,p->tm_hour, p->tm_min, p->tm_sec);
    return 0;
}
