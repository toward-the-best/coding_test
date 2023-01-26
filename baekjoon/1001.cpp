#include <iostream>
#include <algorithm> // find_if

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

int main(int argc, const char *argv[]) {
    try
    {
        std::string a , b;
        std::cin >> a >> b;

        if (isNumber(a) && isNumber(b)) {
            std::cout << std::stoi(a) - std::stoi(b);
        }
        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}