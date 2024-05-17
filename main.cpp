#include <iostream>
#include "functions.h"
#include <string>
#include "vector"
using namespace std;

int main() {

    cout<<"PROBLEM 1"<<endl;
    float grades[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cin >> grades[i];
    }

    float *ptr = grades; // Assign the pointer to the grades array

    float arr[SIZE]; // Array to store the results

    calculateOverall(ptr, arr, SIZE, 0.3);

    displayReverse(arr, SIZE);

    cout<<"PROBLEM 2"<<endl;
    int size2;
    cin >> size2;

    int array[size2];

    for (int i = 0; i < size2; i++) {
        cin >> array[i];
    }

    int count = evenCount(array + 1, size2 - 1) + 1;

    cout << count << endl;


    cout<<"PROBLEM 3"<<endl;
    int size3;
    cin >> size3;

    int array1[size3], array2[size3];

    for (int i = 0; i < size3; i++) {
        cin >> array1[i];
    }
    // Read elements of the second array in reverse order
    for (int i = 0; i < size3; i++) {
        cin >> array2[size3 - i - 1]; // Store elements in reverse order
    }

    bool result = Mirrored(array1, array2 + size3, size3);

    if (result) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }

    cout<<"PROBLEM 4"<<endl;
    int size4;
    cin >> size4;

    double arr1[size4], arr2[size4], sum[size4];

    for (int i = 0; i < size4; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < size4; i++) {
        cin >> arr2[i];
    }

    sumArrays(arr1, arr2, sum, size4);

    for (int i = 0; i < size4; i++) {
        cout << sum[i] << " ";
    }
    cout<<endl;

    cout<<"PROBLEM 5"<<endl;
    int size5;
    cin >> size5;

    int arr4[size5], arr5[size5];

    for (int i = 0; i < size5; i++) {
        cin >> arr4[i];
    }

    for (int i = 0; i < size5; i++) {
        cin >> arr5[i];
    }

    swap(arr4, arr5, size5);//after swapping

    for (int i = 0; i < size5; i++) {
        cout << arr4[i] << " ";
    }
    cout<<endl;
    for (int i = 0; i < size5; i++) {
        cout << arr5[i] << " ";
    }
    cout<<endl;


    cout<<"PROBLEM 6"<<endl;


    cout<<"PROBLEM 7"<<endl;
    int base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    cout <<power(base, exponent) << endl;




    cout<<"PROBLEM 8"<<endl;


    cout<<"PROBLEM 9"<<endl;
    string input;
    getline(cin, input);

    string normalized = normalizeString(input);
    cout <<  normalized << endl;



    cout<<"PROBLEM 10"<<endl;
    vector<int> v;
    int t;
    while(cin >> t){
        v.push_back(t);
    }
    cout << singleNum(v) << endl;

    return 0;
}
