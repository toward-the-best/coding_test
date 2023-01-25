#include <algorithm>
#include <cctype>
#include <iostream>

bool isNumber(const std::string &s) {
    // 양의 정수 음의 정수를 처리해야한다.
    auto start = s.begin();
    if (s.c_str()[0] == '+') {
        start++;
    } else if (s.c_str()[0] == '-') {
        start++;
    }

    // find_if는 찾으려는 값에 == 연산자가 없는 경우에 사용한다.
    return !s.empty() && std::find_if(start, s.end(), [](unsigned char c) {
                             return !std::isdigit(c);
                         }) == s.end();
}

int main(int argc, char const *argv[]) {
    std::string number;
    std::cin >> number;

    if (isNumber(number)) {
        std::cout << number << " is number\n";
    } else {
        std::cout << number << " is not number\n";
    }
    return 0;
}
