
bool areIsomorphic(string &str1, string &str2)
{

    // Write your code here

    if (str1.length() != str2.length())
    {

        return false;
    }

    unordered_map<char, char> map1;

    unordered_map<char, char> map2;

    for (int i = 0; i < str1.length(); i++)
    {

        if (map1.find(str1[i]) == map1.end() && map2.find(str2[i]) == map2.end())
        { // matlab dono map empty hai

            map1[str1[i]] = str2[i];

            map2[str2[i]] = str1[i];
        }

        else
        {

            if (map1[str1[i]] != str2[i] || map2[str2[i]] != str1[i])
            {

                return false;
            }
        }
    }

    return true;
}
// bool areIsomorphic(string &str1, string &str2) {
//     if(str1.size()!=str2.size())
//     return false;
//     unordered_map<char,char>map1;
//     unordered_map<char,char>map2;
//     for(int i=0;i<str1.size();i++){
//         if(map1.find(str1[i])==map1.end() && map2.find(str2[i]==map2.end())){
//             map1[str1]=str2[i];
//             map2[str2]=str1[i];
//         }
//         else{
//             if(map1[str1[i]]!=str2[i]  || map2[str2[i]]!=str1[i]){
//                 return false;
//             }
//         }
//     }
//     return true;

// }

// bool areIsomorphic(string &str1, string &str2)
// {
//         set<char>set1;
//         set<char>set2;
//         int n1=str1.size();
//         int n2=str2.size();
//         for(int i=0;i<n1;i++){
//             set1.insert(str1[i]);
//         }
//         for(int i=0;i<n2;i++){
//             set2.insert(str2[i]);
//         }
//         if(set1.size()==set2.size() && n1==n2){
//             return true;
//         }
//         else
//             return false;

// }

// bool areIsomorphic(string &str1, string &str2) {
//     int c1=0;
//     int c2=0;

//     if(str1.size()!=str2.size())
//     return false;

//     for(int i=0;i<str1.size();i++){
//         if(str1[i]!=str1[i+1])
//         c1++;
//     }
//     for(int i=0;i<str2.size();i++){
//         if(str2[i]!=str2[i+1])
//         c2++;
//     }
//     if(c1==c2){
//         return true;
//     }
//     else return false;
// }