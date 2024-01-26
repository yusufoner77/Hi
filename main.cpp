#include <iostream>
#include <cctype>
#include "hi.hpp"
using namespace std;

int main() {
    
    char s1[] = "hello";
    char s2[] = "HeLLo my";
    
    int result = strcmp_case_insensitive(s1, s2);

    cout << result << endl;

}