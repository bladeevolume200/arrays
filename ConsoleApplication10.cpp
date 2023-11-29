#include <iostream>
using namespace std;

int main() {
    int M, N;
    cout << "Enter size of first array: ";
    cin >> M;
    cout << "Enter size of second array: ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];
    int* C = new int[M+N];
    int k = 0;
    bool found;

    cout << "Enter elements of first array: ";
    for (int i = 0; i < M; i++) cin >> A[i];
    cout << "Enter elements of second array: ";
    for (int i = 0; i < N; i++) cin >> B[i];

    for (int i = 0; i < M; i++) {
        found = false;
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            C[k] = A[i];
            k++;
        }
    }

    for (int i = 0; i < N; i++) {
        found = false;
        for (int j = 0; j < M; j++) {
            if (B[i] == A[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            C[k] = B[i];
            k++;
        }
    }

    cout << "The third array is: ";
    for (int i = 0; i < k; i++) cout << C[i] << " ";
    cout << endl;

    return 0;
}
