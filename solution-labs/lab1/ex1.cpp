#include <bits/stdc++.h>

using namespace std;

void inputData(int *a, int n) {
    srand(time(0));
    for (int i = 0; i < n; i++)
        *(a + i) = rand() % 100;
}

void outputData(int *a, int n) {
    for (int i = 0; i < n; i++)
        cout << *(a + i) << " ";
}
//remove an item
void remove(int *a, int *n, int k) {
    for (int i = 0; i < * n; i++) {
        if (*(a + i) == k) {
            for (int j = i; j < *n - 1; j++) {
                *(a + j) = *(a + j + 1);
            }
            (*n)--;
            i--;
        }
    }
}

//remove all odd items
void removeOdd(int *a, int *n) {
    for (int i = 0; i < *n; i++) {
        if (*(a + i) % 2 == 1) {
            for (int j = i; j < *n - 1; j++) {
                *(a + j) = *(a + j + 1);
            }
            (*n)--;
            i--;
        }
    }
}

int main() {
    int n = 5;
    int *a = (int *) malloc(sizeof(int) * n);
    inputData(a, n);
    outputData(a, n);
    int k;
    return 0;
}