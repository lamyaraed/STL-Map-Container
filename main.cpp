/**
 *  @file    main.cpp
 *  @author  Mahmoud Ahmed Tawfik (20160227) - Sara Zakareia Adam (20170384) - Lamya Raed Aly (20170339)
 *  @date    31/03/2019
 *  @version 1.0
 *
 *  @Problem words(P2)
 *
 */

#include <iostream>
#include <map>
#include <cstring>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

void print(map<string, int> _m)
{
	for(auto it = _m.begin(); it != _m.end() ; ++it)
        cout << "key = " << setw(15) << it->first << " , Value = "  << setw(15) << it->second << "\n";
}

int main()
{
    string str;
    map<string, int> m;

    cout << "Write The Worlds :" << endl;

    do
    {
        cin >> str;

        if (str=="done" || str == "DONE" || str == "Done")
            break;

        if (m[str])
            m[str] += 1;
        else
            m[str] = 1;
    }
    while (true);

    cout << "\n---------Map Values and Keys Before Erasing --------\n" <<endl;
	print(m);

    for(auto it = m.begin(); it != m.end() ;)
    {
        auto temp = it;
        temp++;

        string key = it->first;

        if (key[0] == 'a')
            m.erase(it);
        
        it = temp;
    }

    cout << "\n---------Map Values and Keys After Erasing --------\n" <<endl;
    print(m);
  
    return 0;
}
