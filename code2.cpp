//Ishita Gandotra
//2010990318
//code 2

#include <bits/stdc++.h>

using namespace std;


void findRepeat(int* a, int n){
    unordered_map<int,int> hash;
    
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    
    cout<<"Repeated Number    Frequency\n";
   
    for(auto it=hash.begin();it!=hash.end();it++)
    if(it->second>1)
    cout<<it->first<<"                  "<<it->second<<endl;
    
}

int main()
{
    int n;
  
    cin>>n;
    int* a=(int*)(malloc(sizeof(int)*n));
    
    
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    findRepeat(a,n);

    return 0;
}
