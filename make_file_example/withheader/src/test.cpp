 /*************************************************************************
    > File Name: test.cpp
    > Author: Shen Bo
    > mail: Bo.A.Shen@alcatel-sbell.com.cn
    > Created Time: Sun 15 Mar 2020 07:05:37 PM CST
 ************************************************************************/

#include <iostream>
#include "test.hpp"
using namespace std;

Test::Test()
{
    std::cout << "new a object of class Test" << std::endl;
}

void Test::sayHello()
{
    std::cout << "saying hello" << std::endl;
}
