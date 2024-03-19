int map[26] = {0};
bool isAnagram(string str1, string str2)
{
    if (str1.size() != str2.size())
    {
        return false;
    }

    for (int i = 0; i < str1.size(); i++)
    {
        int index = str1[i] - 'a';
        map[index]++;
    }
    for (int i = 0; i < str2.size(); i++)
    {
        int index = str2[i] - 'a';
        map[index]--;
    }
    for (int k = 0; k < 26; k++)
    {
        if (map[k] != 0)
            return false;
    }
    return true;
}