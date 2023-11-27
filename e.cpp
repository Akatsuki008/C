//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//    int t;
//    cin >> t;
//    while(t--){
//        string flow;
//        cin >> flow;
//        int balls=0;
//        int runs=0;
//        int wickets=0;
//        for(int i=0;i<flow.size();i++){
//            if(flow[i] == 'W'){
//                wickets++;
//                balls++;
//            }else{
//                balls++;
//                runs+= flow[i] - '0';
//            }
//        }
//        string a = "Over";
//        string b = "Run";
//        string c = "Wicket";
//        if(balls>6){
//            a+="s ";
//        }else{
//            a+=' ';
//        }
//        if(wickets > 1){
//            c+="s.";
//        }else{
//            c+=".";
//        }
//        if(runs>1){
//            b+="s ";
//        }else{
//            b+=" ";
//        }
//        cout << (balls/6)<<"."<<(balls%6)<<" "<< a << runs <<" "<< b << wickets<<" "<< c << endl;
//    }
//}

#include<bits/stdc++.h>
using namespace std;
int sameOccurrence(int arr[], int n, int x, int y)
{
    int result = 0;
 
    for (int i = 0; i <= n - 1; i++) {
        int ctX = 0,  ctY = 0;
        for (int j = i; j <= n - 1; j++) {
            if (arr[j] == x) 
                ctX += 1;
            else if (arr[j] == y) 
                ctY += 1;
            if (ctX == ctY) 
                result += 1;            
        }
    }
 
    return (result);
}
 
// Driver code
int main()
{
    int n,i;
    cin>>n;
	int arr[n+1];
	for(i=0; i<n; i++)
	cin>>arr[i];
    int x = 2, y = 3;
    cout << sameOccurrence(arr, n, x, y);
    return (0);
}
