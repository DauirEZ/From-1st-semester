/*#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    getline(cin, s);

    cout<<s;
}*/

/*#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int x,y;
    cin>>s;
    cin>>x>>y;
    for(int i=x; i<=y; i++){

    }
}*/



/*#include <iostream> 
#include <string> 
#include <cmath>
using namespace std; 
int main(){ 
    int p=0;
    string s;
    cin>>s;
    string k=s;
    int n=s.length()-1;
    for(int i=0; i<=n; i++)
    {
        if(s[i] == k[n-i]){
            p++;
            
        }
        }
        if(p==s.length()){
            cout<<"YES";
        }
        else cout<<"NO";
}*/



/*#include <iostream> 
#include <string> 
#include <cmath>
using namespace std; 
int main(){
    string s;
    int i, k=0;
    for(i=0; i<s.length(); i++){
        if(s[i]==' '){
            k++;
        }
        else if(s[i]!=' '){
            if(k>0){
                for(int j=0; j<=k-1; j++){
                    s.erase(i-j, i-j); 
                }
            }
        }
    }
}*/



#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <cstring>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    if (s[i] == ' ' && s[i + 1] == ' ')
    {
        s.erase(i, 1);
        i = (i - 1);
    }
    cout << s;
   
 
}




/*#include <iostream> 
#include <algorithm> 
 
using namespace std; 
 
void rec(size_t sum){ 
    if (sum<2){ 
        cout << sum; 
        return; 
    }rec (sum/2); 
    cout << sum%2; 
    return; 
} 
int main(){ 
    size_t sum = 0; size_t l = 1; 
    string ssum=""; 
    string s;cin >> s; 
    for(int i=0;i<s.length();i++){ 
    if(s[i]>='0' && s[i] <= '9'){ 
    ssum+=s[i]; 
    if (s[i+1]>='0' && s[i+1] <= '9'){  
    continue; 
    } 
        for (int i=ssum.length()-1;i>=0;i--){ 
        int k = int(ssum[i]-48); 
        sum+=k*l; 
        l*=10; 
        } 
    rec(sum);     
    ssum = ""; 
    sum = 0; 
    l=1; 
    }else{ 
        cout << s[i]; 
    } 
   } 
}*/



/*using namespace std;
#include <string>
#include <iostream>
#include <algorithm>
int main()
{
    int k = 0;
    string s, res = "";
    cin >> s;
    string s1 = s;
    reverse(s1.begin(), s1.end());
    if(s == s1){
        cout << s;
        return 0;
    }
    for(int i = 0; i < s.size(); ++i){
        for(int j = i; j < s.size(); ++j){
            string t = s.substr(i, j - i + 1);
            string t1 = t;
            reverse(t.begin(), t.end());
            if(t == t1 && t.size() > k){
                res = t;
                k = res.size();
            }
        }
    }
    cout<<k<<endl;
    cout << res;
    return 0;
}*/