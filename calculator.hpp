#pragma once
#include <string>

std::string Add(std::string n1, std::string n2)
{
    int num1 = std::stoi(n1);
    int num2 = std::stoi(n2);
    int result = num1 + num2;
    return std::to_string(result);
}