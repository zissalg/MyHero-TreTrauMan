#pragma once

#include <vector>
#include <list>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <SFML/Graphics.hpp>

inline bool isFileExist(std::string fileName)
{
    std::ifstream is(fileName);
    return is.good();
}