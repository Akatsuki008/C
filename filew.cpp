#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *file;
    string name;
    getline(cin, name);
    int i,n = name.length();
    file = fopen("test.txt", "w");
    if(file == NULL) cout<<"File doesn't exist.\n";
    else {
            cout<<"-------->File is open!\n\n\n";
            fputs("\n", file);
                fputs(name.c_str( ),file);
            cout<<"-------->File is written\n\n\n";

            fclose(file);
    }
    string ch;
     file = fopen("test.txt", "r");
            cout<<"The file: \n";
            while(!feof(file))
            {

                char c[1007];
                fgets(c, 1000, file);
                ch = c;
            }
            code here

            fclose(file);


            cout<<"\n\n-------->File is read\n";

    return 0;
}
