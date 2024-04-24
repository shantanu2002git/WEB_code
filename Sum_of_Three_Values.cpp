// #include <bits/stdc++.h>
// #define ll long long int

// using namespace std;

// void solve(vector<int>& arr, int X, int N)
// {

//     vector<vector<int>> vec(N, vector<int>(2));
//     for (int i = 0; i < N; i++) {
//         vec[i][0] = arr[i];
//         vec[i][1] = i + 1;
//     }

//     sort(vec.begin(), vec.end());

//     for (int ptr1 = 0; ptr1 < N - 2; ptr1++) {

//         int ptr2 = ptr1 + 1;
//         int ptr3 = N - 1;

//         while (ptr2 < ptr3) {
//             int currentSum = vec[ptr1][0] + vec[ptr2][0]
//                             + vec[ptr3][0];

//             if (currentSum == X) {
//                 cout << vec[ptr1][1] << " " << vec[ptr2][1]
//                      << " " << vec[ptr3][1] << "\n";
//                 return;
//             }

//             else if (currentSum > X) {
//                 ptr3--;
//             }

//             else if (currentSum < X) {
//                 ptr2++;
//             }
//         }
//     }

//     cout << "IMPOSSIBLE";
// }

// int main()
// {
//     // Sample Input
//     int n, t;
//     cin >> n >> t;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     solve(arr, t, n);

//     return 0;
// }
