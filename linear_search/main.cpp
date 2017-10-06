//
//  main.cpp
//  linear_search
//
//  Created by 村上候助 on 2017/10/06.
//  Copyright © 2017 村上候助. All rights reserved.
//

#include <iostream>

using namespace std;

bool linear_search(int A[], int n, int key){
    int i = 0;
    A[n] = key;
    while(A[i] != key){
        i++;
    }
    if (i == n){
        return false;
    }
    return true;
}

int main(int argc, const char * argv[]) {
    int n, i, q, key, ct;
    
    scanf("%d", &n);
    int S[n];
    for(i = 0; i < n; i++){
        scanf("%d", &S[i]);
    }
    
    ct = 0;
    scanf("%d", &q);
    for(i = 0; i < q; i++){
        scanf("%d", &key);
        bool found = linear_search(S, n, key);
        if(found) ct ++;
    }
    cout << ct << endl;
    return 0;
}
