//
// Created by Muhmmadyusuf Sayidaliyev on 17/05/24.
#include <cctype>
#include "vector"
using namespace std;

//p7
int power(int base, int exponent) {
    int result = 1;
    int *ptr_result = &result; // Pointer to store the result

    for (int i = 0; i < exponent; i++) {
        *ptr_result *= base;
    }

    return result;
}

//p9
string normalizeString(const string& input) {
    string normalized = input;

    // Capitalize the first letter
    if (!normalized.empty()) {
        normalized[0] = toupper(normalized[0]);
    }
    // Convert the remaining letters to lowercase
    for (size_t i = 1; i < normalized.length(); ++i) {
        normalized[i] = tolower(normalized[i]);
    }

    return normalized;
}
//p10
int singleNum(vector<int>& vec){
    int result = 0;
    for (int num : vec) {
        result ^= num;
    }
    return result;
}