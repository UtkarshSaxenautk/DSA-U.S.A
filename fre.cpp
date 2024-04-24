class Solution
{
public:
    int maxDepth(string s)
    {
        int c = 0;
        int open = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                open++;
            }

            else if (s[i] == ')')
            {
                c = max(c, open);
                open--;
            }
        }
        return c;
    }
};