#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    int i = 5;
    while (i * i <= num) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
        i += 6;
    }
    return true;
}

void solve_test_case() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> prime_elements;
    vector<int> non_prime_elements;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (is_prime(a[i])) {
            prime_elements.push_back(a[i]);
        } else {
            non_prime_elements.push_back(a[i]);
        }
    }

    if (prime_elements.size() >= 1 && non_prime_elements.size() >= 1) {
        cout << prime_elements.size() << " " << non_prime_elements.size() << "\n";
        for (int num : prime_elements) {
            cout << num << " ";
        }
        cout << "\n";
        for (int num : non_prime_elements) {
            cout << num << " ";
        }
        cout << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve_test_case();
    }
    return 0;
}
