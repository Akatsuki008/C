/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1], c=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2 !=0) c++;
        }
        if(c%2==0)
        cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximize_x(int x) {
    int original_x = x;
    int k = 0;
    vector<int> digits;

    while (x > 0) {
        digits.push_back(x % 10);
        x /= 10;
        k++;
    }

    reverse(digits.begin(), digits.end());

    int carry = 0;
    for (int i = k - 1; i >= 0; i--) {
        if (digits[i] >= 5) {
            digits[i] = 0;
            carry = 1;
        } else {
            if (carry == 1 && digits[i] == 4) {
                digits[i] = 5;
                carry = 0;
            }
            break;
        }
    }

    if (carry == 1) {
        digits.insert(digits.begin(), 1);
        k++;
    }

    int new_x = 0;
    for (int i = 0; i < k; i++) {
        new_x = new_x * 10 + digits[i];
    }

    return new_x;
}

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int x;
        cin >> x;  // Input number
        cout << maximize_x(x) << endl;  // Output the maximum possible value of x
    }

    return 0;
}
