// Take 2 strings s1 and s2 including only letters from a to z. Return a new sorted string, the longest possible, containing distinct letters - each taken only once - coming from s1 or s2.

// Examples:
// a = "xyaabbbccccdefww"
// b = "xxxxyyyyabklmopq"
// longest(a, b) -> "abcdefklmopqwxy"

// a = "abcdefghijklmnopqrstuvwxyz"
// longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"

#include <unordered_set>
#include <vector>
#include <string>

using namespace std;

class TwoToOne
{
public:
    static string longest(const string &s1, const string &s2)
    {
        vector<char> sortedArr;
        unordered_set<char> stringSet;

        for (unsigned long i = 0; i < s1.size(); i++)
        {
            stringSet.insert(s1[i]);
        }

        for (unsigned long i = 0; i < s2.size(); i++)
        {
            stringSet.insert(s2[i]);
        }

        for (int i = int('a'); i <= int('z'); i++)
        {
            char letter = char(i);
            if (stringSet.count(letter) == 1)
            {
                sortedArr.push_back(letter);
            }
        }

        string sortedString(sortedArr.begin(), sortedArr.end());

        return sortedString;
    }
};