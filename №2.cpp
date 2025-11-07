#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    
    vector<int> calories(N);
    for (int i = 0; i < N; i++) {
        cin >> calories[i];
    }

    sort(calories.begin(), calories.end());

    int minR = calories[N-1] - calories[0];

    for (int i = 0; i <= N - D; i++) {
        int R = calories[i + D - 1] - calories[i];
        if (R < minR) {
            minR = R;
        }
    }
    cout << minR << endl;
    return 0;
}
