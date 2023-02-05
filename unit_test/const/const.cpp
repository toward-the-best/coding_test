/*
 * 연관 자료 
 * url : https://doitnow-man.tistory.com/entry/%EC%BD%94%EC%A7%80-const-%EC%9C%84%EC%B9%98%EB%B3%84-%EC%82%AC%EC%9A%A9%EB%B2%95
 */

#include <iostream>

int main(int argc, char const *argv[])
{

    int var = 10;  
    int var_1 = 20;
    const int* const var_p = &var;
    *var_p = 10;
    var_p = &var_1;

    /*
        int var = 10;
        int var_1 = 20;
        const int* var_p = &var;
        var_p = &var_1;
    */
    std::cout << *var_p << std::endl;
    return 0;
}
