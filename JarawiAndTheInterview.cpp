#include <iostream>

int main() {
    std::string s;
    int q;
    std::string p[100];

    int m;
    int n;
    int result = 0;

    std::cin >> s;
    std::cin >> q;
    for (int i = 0; i < q; i++) {
        std::cin >> p[i];
    }

    for (int i = 0; i < q; i++) {
        
        for (int y = 0; y < p[i].size(); y++) {
            m = p[i].size() - 1;
            n = s.size()-1;
            result = 0;
            for (int k = m; k >= y; k--) {
                for (int j = n; j >= 0; j--) {
                    if (p[i][k] == s[j]) {
                        m--;
                        result++;
                        n = j-1;
                        break;
                    }
                }
            }
            if (result == p[i].size() - y) {
                break;
            }
        }
        std::cout << result << std::endl;
    }
    return 0;
}
