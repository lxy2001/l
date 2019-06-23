#include <iostream>
#include <string>
using namespace std;
void delchar(string str,char c){
    string s2;
    int q=0;
    for(int i=0;str[i]!='\0';i++){
        q++;
    }
    int p=0;
    for(int j=0;j<q;j++){
        if(str[j]!=c){
            s2[p]=str[j];
            p++;
        }
    }
    s2[p]='\0';
    cout<<"result: ";
    for(int k=0;s2[k]!='\0';k++){
        cout<<s2[k];
    }
    cout<<'\n';
    
}
int main (){
    int a;
    cin>>a;
    getchar();
    string s1;
    char c;
    for(int i=1;i<=a;i++){
        getline(cin,s1);
        cin>>c;
        delchar(s1,c);
        getchar();
    }
    
    
    
    return 0;
}
#include <iostream>
using namespace std;
template<class T>
class Point{
private:
    T a,b,c;
public:
    Point(T w,T e,T p){
        a=w;
        b=e;
        c=p;
    }
    Point(T w,T e){
        a=w;
        b=e;
    }
    double dist(T a,T b){
        
    }
};

