#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char **argv) {
    
    time_t now = time(0); // 获取系统当前时间
    tm *cur = localtime(&now); // 将获取的时间转换为结构体
    cout << cur->tm_year + 1900 << endl;
    return 0;
}
