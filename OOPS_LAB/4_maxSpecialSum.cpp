#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int answer = -1000000000;
    for (int start = 0; start < n; start++) {

        int sum = 0;
        int index = start;
        int count = 1;
    while (index + count <= n) {

            for (int j = 0; j < count; j++) {
                sum += a[index + j];
            }
            index += count;
            count++;
        }
        answer = max(answer, sum);
    }
    cout << answer;
    return 0;
}