//
// Created by Muhmmadyusuf Sayidaliyev on 17/05/24.
#include <cctype>
#include "vector"
using namespace std;

const int SIZE = 10;

void calculateOverall(float *ptr, float *arr, int size, float weight) {
    for (int i = 0; i < size; i++) {
        arr[i] = ptr[i] * weight; // Calculate the weighted score of Midterm grade in Overall grade
    }
}

void displayReverse(float *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


// p2
int evenCount(const int* a, int size) {
    int count = 0;

    for (const int* ptr = a; ptr < a + size; ptr++) {
        if (*ptr % 2 == 0) {
            count++;
        }
    }
    return count;
}

// p3
bool Mirrored(const int* a, const int* b, int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] != *(b - i - 1)) {
            return false;
        }
    }
    return true;
}
// p4
void sumArrays(const double* arr1, const double* arr2, double* sum, int size) {
    for (int i = 0; i < size; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
}


// p5
void swap(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++) {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}
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
int singleNum(vector<int>& vec) {
    int result = 0;
    for (int num : vec) {
        result ^= num;
    }
    return result;
}