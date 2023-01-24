#include <iostream>

int main(int argc, char const *argv[]) {
    if (argc < 2) {
        std::cout << "인자 없음\n";
        return 0;
    }

    // 파일명은 첫번째 parameter들어오기 때문에 
    // parameter 입력시 2부터 시작 한다
    std::cout << "input parameter : " << argc << "\n";
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << "\n";
    }
    return 0;
}