//
//  main.cpp
//  ProyB - BeagleBalls
//
//  Created by Nadia Garcia on 26/05/20.
//  Copyright © 2020 Nadia Garcia. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void standingSoldiers(vector<int> soldiers, vector<int> bBalls, int q, int n){
    vector<int> standing;
    for( int i = 0; i < q; i++ ){
        bBalls[i];
        
        
        standing.push_back(n);
    }
    
    for(int i = 0; i < q; i++ ){
        cout << standing[i] << endl;
    }
}

int main(){
    int n, q, sol, bBall;
    vector<int> soldiers;
    vector<int> bBalls;
    vector<int> solution;
    cin >> n >> q;
    for( int i = 0; i < n; i++ ){
        cin >> sol;
        soldiers.push_back(sol);
    }
    
    for( int i = 0; i < q; i++ ){
        cin >> bBall;
        bBalls.push_back(bBall);
    }
    
    standingSoldiers(soldiers, bBalls, q, n);
    
    return 0;
}
