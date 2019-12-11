#pragma once
#include <string>
#include <vector>

std::string Max(std::string n1, std::string n2)
{
    if (n1.length() >= n2.length())
    {
        return n1;
    } else
    {
        return n2;
    }
}
std::string Min(std::string n1, std::string n2)
{
    if (n1.length() < n2.length())
    {
        return n1;
    } else
    {
        return n2;
    }
}

int char2int(char c)
{
    return c - '0';
}
char int2char(int num)
{
    return num + '0';
}
std::string Add(std::string n1, std::string n2)
{

    std::string max = Max(n1,n2);
    std::string min = Min(n1,n2);

    std::reverse(max.begin(),max.end());
    std::reverse(min.begin(),min.end());

    std::string append(max.length() - min.length(), '0');

    std::string carry(max.length(),'0');

    std::string result(max.length() + 1, '0');

    for(int i=0; i < max.length(); i++)
    {
        int num1 = char2int(max[i]);
        if(num1 < 0 || num1 > 9)
        {
            return "ERROR";
        }
        int num2 = char2int(min[i]);
        if(num2 < 0 || num2 > 9)
        {
            return "ERROR";
        }
        int sum = num1 + num2 + char2int(carry[i]);
        if (sum >= 10)
        {
            result[i] = int2char(sum - 10);
            result[i+1] = int2char(1);
        } else
        {
            result [i] = int2char(sum);
        }
    }
    std::reverse(result.begin(),result.end());
    if(result[0] == '0')
    {
        result = result.substr(1);
    }
    return result;
}