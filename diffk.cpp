int countSubStrings(string s, int k)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        unordered_map<char, int> mp;
        int c = 0;
        for (int j = i; j < s.size(); j++)
        {
            if (mp[s[j]])
            {
                if (c == k)
                    count++;
            }
            else
            {
                c++;
                if (c == k)
                    count++;
            }
            mp[s[j]]++;
        }
    }
    return count;
}
