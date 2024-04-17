class Solution
{
public:
    string longestPalindrome(string s)
    {
        if (s.length() <= 1)
        {
            return s;
        }
        int maxlen = 1;
        string maxstr = s.substr(0, 1);

        for (int i = 0; i < s.length(); i++)
        {
            for (int j = i + maxlen; j <= s.length(); ++j)
            {
                if (j - i > maxlen && ispalindrome(s.substr(i, j - i)))
                {
                    maxlen = j - i;
                    maxstr = s.substr(i, j - i);
                }
            }
        }

        return maxstr;
    }

private:
    bool ispalindrome(const std::string &str)
    {
        int left = 0;
        int right = str.size() - 1;
        while (left < right)
        {
            if (str[left] != str[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};