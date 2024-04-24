// int isCyclicRotation(string &p, string &q)
// {
//    if(p.size()!=q.size())
//    return 0;

//    p=p+p;
//    if(p.find(q)!=string::npos)
//    return 1;
//    else return 0;
// }
int isCyclicRotation(string &p, string &q)
{
    p = p + p;
    int i = 0;
    int j = 0;

    while (i < p.length())
    {
        if (p.at(i) == q.at(j))
        {

            // return 1;
            i++;
            j++;

            if (j == q.length())
                return 1;
        }
        else if (j != 0)
            j = 0;
        else
            i++;
    }
    return 0;
}
