/// 类型转换
/// int to char
/// int to char*
/// int to string
/// char to int
/// float to string
/// float to char*
/// double to string
/// double to char*

#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char* argv[]) {
    char str[12] = "Number is 1";
    char str2[13];
    for(int x = 0; x <= 12; x++) {
        if (x == 12) {
            str2[12] = 2;
            break;
        }
        
        str2[x] = str[x];
        
    }
    
    string x = to_string(2);
    
    string s = str2;
    
    string c = s + x;
    
    cout << c << endl;
    
    return 0;
}
