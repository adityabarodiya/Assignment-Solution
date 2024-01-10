/*
		Aditya Barodiya
*/

#include <bits/stdc++.h>
using namespace std;

constexpr int64_t lcm(int64_t a, int64_t b) {
    return (a * b) / gcd(a, b);
}

void process_test_case() {
    int64_t a, b;
    cin >> a >> b;

    int64_t least_common_multiple = lcm(a, b);
    cout << (least_common_multiple == b ? least_common_multiple * (b / a) : least_common_multiple) << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;

    while (t--) process_test_case();

    return 0;
}
