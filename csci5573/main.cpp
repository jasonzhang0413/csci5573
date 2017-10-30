//
//  main.cpp
//  csci5573
//
//  Created by Jason Zhang on 10/17/17.
//  Copyright © 2017 Jason Zhang. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::string fileContent = "my text here and content!!!";
    std::chrono::milliseconds begin = std::chrono::duration_cast< std::chrono::milliseconds >(std::chrono::system_clock::now().time_since_epoch());
    for (int i=1; i<=1000; i++) {
        std::string filename = "title_" + std::to_string(i) + ".txt";
        std::ofstream outfile("/Users/jzhang201/csci5573/" + filename);
        outfile << fileContent << std::endl;
        outfile.close();
    }
    for (int i=1; i<=1000; i++) {
        std::string filename = "title_" + std::to_string(i) + ".txt";
        std::remove(("/Users/jzhang201/csci5573/" + filename).c_str());
    }
    std::chrono::milliseconds end = std::chrono::duration_cast< std::chrono::milliseconds >(std::chrono::system_clock::now().time_since_epoch());

    std::cout << "begin timestamp " << begin.count();
    std::cout << "\n";
    std::cout << "end timestamp " << end.count();
    std::cout << "\n";
    std::cout << (end - begin).count() << " duration milliseconds";
    return 0;
}
