#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll A, N, t, i;
	cin>>t;
	ll res = 0;
	while(t--)
	{
		
		cin>>A>>N;
		for(i=1; i<=N; i++)
		{
			res += abs((i%A)-(i%(A-1)));
		}
		cout<<res<<endl;
	}
	return 0;
}

//int main() {
//    int T;
//    cin >> T;
//
//    for (int t = 0; t < T; t++) {
//        string ball;
//        cin >> ball;
//        int len = ball.length();
//
//        int overs = 0;
//        int balls = 0;
//        int runs = 0;
//        int wickets = 0;
//
//        for (int j =0; j<len ; j++) {
//            if (ball[j] == 'W') {
//                wickets++;
//                balls++;
//            } else {
//                runs += ball[j] - '0';
//                balls++;
//
//                if (balls % 6 == 0) {
//                    overs++;
//                    balls = 0;
//                }
//            }
//        }
//        cout << overs << '.' << balls << " Overs" << (overs != 1 ? "s" : "") << ' ' << runs << " Run" << (runs != 1 ? "s" : "") << ' ' << wickets << " Wicket" << (wickets != 1 ? "s" : "") << endl;
////        cout<< overs<< "."<<balls;
////        if(overs>1 || overs==1 && balls>=1)
////        cout<<" Overs ";
////        else {
////        	cout<<" Over ";
////		}
////		cout<< runs;
////		if(runs>1) cout<< " Runs ";
////		else cout<< " Run ";
////		cout<<wickets;
////		if(wickets >1)
////		cout<< " Wickets.\n";
////		else cout<<" Wicket.\n";
////		
//////        cout<<overs<<"."<<balls<<" Overs "<<runs<< " Runs " <<wickets <<" Wicket.\n";
////		
//    }
//
//    return 0;
//}

//int countIdenticalSubarrays(const int arr[], int n) {
//    int count = 0;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j <= n; j++) {
//            const int* subarray1 = &arr[i];
//            
//            for (int k = i + 1; k <= n; k++) {
//                if (j != k) {
//                    const int* subarray2 = &arr[i];
//                    bool identical = true;
//                    // Compare the elements in subarrays
//                    for (int x = 0; subarray1 + x < subarray1 + (j - i); x++) {
//                        if (*(subarray1 + x) != *(subarray2 + x)) {
//                            identical = false;
//                            break;
//                        }
//                    }
//                    if (identical) {
//                        count++;
//                    }
//                }
//            }
//        }
//    }
//
//    return count;
//}
//int main()
//{
//	long long n, t, i;
//	int t;
//	cin>>t;
//	while(t--){
//		cin>>n;
//		long long arr[n+1];
//	for(i =0; i<n; i++)
//	{
//		cin>>arr[n];
//		int pos_sub = n*(n+1)/2;
//	}
//}
//}


