#include <bits/stdc++.h>
#include <iostream>

int main()
{
    std::set<int> conj;
    int n, num;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        conj.insert(num);
    }
    
    
    std::cout<<conj.size()<<std::endl;

    return 0;
}
