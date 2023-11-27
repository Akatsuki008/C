#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *file; //file pointer
    string name;
    getline(cin, name);
    int i,n = name.length();
    file = fopen("test.txt", "w"); //file open (name, mode)
    if(file == NULL) cout<<"File doesn't exist.\n";
    else {
            cout<<"File is open!\n";
            for(i=0; i<n; i++)
            {
                fputc(name[i],file);
            }
            cout<<"File is written";
            fclose(file); //file close
    }
    return 0;
}
