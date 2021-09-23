#include <bits/stdc++.h>
using namespace std;

void jump(int *arr, int key,int n){
    int step = sqrt(n);
    int start = 0, end = step, comp = 0;
    while (++comp && arr[end] <= key && end < n){
        start = end;
        end += step;
        if (end > n - 1)
            end = n;
    }
    for (int i = start; i < end; i++){
        if (++comp && arr[i] == key){
            cout << key << " is present\n";
            cout << "Total comparisions = " << comp << endl;
            return;
        }
    }
    cout << key << " is not present\n";
    cout << "Total comparisions = " << comp << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, key;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> key;
        jump(arr, key, n);
    }
}