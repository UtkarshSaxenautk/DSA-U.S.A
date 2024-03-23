int romanToInt(string s)
{

    unordered_map<char, int> digits;

    digits['M'] = 1000;

    digits['D'] = 500;

    digits['C'] = 100;

    digits['L'] = 50;

    digits['X'] = 10;

    digits['V'] = 5;

    digits['I'] = 1;

    int ans = 0;

    for (int i = s.length() - 1; i >= 0; i--)

    {

        if (digits[s[i]] < digits[s[i + 1]])

        {

            ans -= digits[s[i]];
        }

        else

        {

            ans += digits[s[i]];
        }
    }

    return ans;
}