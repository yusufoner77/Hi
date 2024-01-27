#include <iostream>
#include <cctype>
#include "hi.hpp"
using namespace std;

int main() {
    
    char s1[] = "hello";
    char s2[] = "HeLLo";
    
    int result = strcmp_case_insensitive(s1, s2);

    cout << "The comparison of \"" << s1 << "\" and \"" << s2 << "\" returns " << result << endl;

    char s3[] = "hello my name is Yusuf";
    char s4[] = "HeLLo";

    result = strcmp_case_insensitive(s3, s4);

    cout << "The comparison of \"" << s3 << "\" and \"" << s4 << "\" returns " << result << endl;

    result = strcmp_case_insensitive(s4, s3);
 
    cout << "The comparison of \"" << s4 << "\" and \"" << s3 << "\" returns " << result << endl;

    char s5[] = "String";
    char s6[] = "strong";

    result = strcmp_case_insensitive(s5, s6);

    cout << "The comparison of \"" << s5 << "\" and \"" << s6 << "\" returns " << result << endl;

    char s7[10];
    char s8[] = "Hi";

    result = strcmp_case_insensitive(s7, s8);

    cout << "The comparison of \"" << s7 << "\" and \"" << s8 << "\" returns " << result << endl;

    result = strcmp_case_insensitive(s8, s7);

    cout << "The comparison of \"" << s8 << "\" and \"" << s7 << "\" returns " << result << endl;

    char s9[] = "hi";
    char s10[] = "hi";

    result = strcmp_case_insensitive(s9, s10);

    cout << "The comparison of \"" << s9 << "\" and \"" << s10 << "\" returns " << result << endl;
}