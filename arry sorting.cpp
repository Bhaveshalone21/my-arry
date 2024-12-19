#include <iostream>
using namespace std;

class Sample {
public:
    void sort(int a[], int n);  // Declaration for integer array sort
    void sort(float a[], int n);  // Declaration for float array sort
};

void Sample::sort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {  // Start j from i + 1 to avoid redundant comparisons
            if (a[i] > a[j]) {  // Compare and swap if a[i] is greater than a[j]
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void Sample::sort(float a[], int n) {
    int i, j;
    float temp;  // Use float for temp
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {  // Start j from i + 1 to avoid redundant comparisons
            if (a[i] > a[j]) {  // Compare and swap if a[i] is greater than a[j]
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    Sample ob1;
    int a[5] = {0, 10, 5, 3, 4};
    float b[5] = {1.1, 1.5, 0.6, 0.9, 1.0};
    
    ob1.sort(a, 5);  // Correct function call
    ob1.sort(b, 5);  // Correct function call
    
    cout << "Sorting for int elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }

    cout << "Sorting for float elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << b[i] << endl;
        return 0;
    } }
