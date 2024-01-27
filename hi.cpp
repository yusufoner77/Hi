#include <iostream>
#include <cctype>
#include "hi.hpp"
using namespace std;

int strcmp_case_insensitive(const char *s1, const char *s2) {

    int comparison;

    if (s1 == s2) {
        comparison = 0;
    }

    else if (s1 == NULL) {
        comparison = -1;
    }

    else if (s2 == NULL) {
        comparison = 1;
    }

    else {
        while (tolower(*s1) == tolower(*s2) && *s1 != 0 && *s2 !=0) {
            ++s1;
            ++s2;
        }

        if (*s1 < *s2) {
            comparison = -1;
        }

        else if (*s1 > *s2) {
            comparison = 1;
        }

        else {
            comparison = 0;
        }
    }

return comparison;

}