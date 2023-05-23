#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int mas[21];
int show(int mas2[]) {
    int r = 1;
    for (int i = 1; i < 21; i++) {
        if (i == 2 * r) {
            cout << '\n';
            r = i;
        }
        cout << mas[i] << ' ';
    }
    cout << '\n';
    return 0;
}
int shift(int mas1[]) {
    show(mas);
    for (int i = 0; i < 21; i++) {
        if (mas1[i] < mas1[i + 1]) {
            swap(mas1[i], mas1[i + 1]);
        }
    }
    return 0;
}
int main()
{
    mas[0] = 0;
    vector <int> v1 = {45, 33, 37, 48, 26, 20, 53, 55, 59, 50, 56, 20, 33, 50, 28, 11, 41, 26, 38, 41};
    sort(v1.begin(), v1.end());
    for (int i : v1) {
        cout << i << ' ';
    }
    cout << "\n\n";
    for (int i = 1; i <= 20; i++) {
        mas[i] = v1[i-1];
    }
    show(mas);
    mas[10] = 49;
    shift(mas);
    show(mas);
}
