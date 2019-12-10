#pragma once
#include <string>

std::string Add(std::string n1, std::string n2)
{
    long long num1 = std::stoll(n1);
    long long num2 = std::stoll(n2);
    long long result = num1 + num2;
    return std::to_string(result);
}