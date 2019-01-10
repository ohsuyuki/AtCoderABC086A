//
//  main.cpp
//  AtCoderABC086A
//
//  Created by osu on 2018/12/20.
//  Copyright © 2018 osu. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a = 0;
    int b = 0;

    std::cin >> a >> b;

    std::string result = ((a*b)%2 == 0 ? "Even" : "Odd");

    std::cout << result;

    return 0;
}
