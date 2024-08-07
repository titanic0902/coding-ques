#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersection(int arr[], int arr2[], int n, int m) {
    vector<int> ans;
    sort(arr, arr + n);
    sort(arr2, arr2 + m);
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
        if (arr[i] < arr2[j]) {
            i++;
        } else if (arr[i] > arr2[j]) {
            j++;
        } else {
            ans.push_back(arr[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[n];
    int arr2[m];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    vector<int> ans = intersection(arr, arr2, n, m);
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
