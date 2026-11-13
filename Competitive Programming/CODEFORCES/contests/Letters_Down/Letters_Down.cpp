// #include <iostream>
// #include <algorithm>
// #include <cmath>
// #include <string>

// //#include <bits/stdc++.h>

// using ll = unsigned long long int;

// std::string strrev(std::string string)
// {
//     std::reverse(string.begin(), string.end());
//     return string;
// }

// char maxValue(std::string string, ll size)
// {
//     int maxChar = 'a';
//     for (int i = 0; i < size; i++)
//     {
//         if (string[i] > maxChar)
//         {
//             maxChar = string[i];
//         }
        
//     }

//     return maxChar;
// }


// int main()
// {
//     ll num = 0;
//     std::cin >> num;
//     ll sizeString = 0;
//     std::string str;
//     int count = 0;
//     char x = 'a';
//     char max_val = 'z';

//     for (ll i = 0; i < num; i++)
//     {
//         count = 0;
//         std::cin >> sizeString;
//         std::getline(std::cin >> std::ws, str);

//         if (str != strrev(str))
//         {
//             strrev(str);
//             max_val = maxValue(str, str.length());

//             for (int k = 0; k < str.length(); k++)
//             {
//                 if (str[k] > 'a' && str[k] == max_val)
//                 {
//                     str[k] = str[k] - 1;
//                 }
//             }
//             count++;
            
//         } else {
//             strrev(str);
//         }
        
//         std::cout << count << std::endl;

//     }
    
//     return 0;
// }
