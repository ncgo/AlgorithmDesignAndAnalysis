//
//  main.cpp
//  Find the unique character
//
//  Created by Nadia Garcia on 12/02/20.
//  Copyright © 2020 Nadia Garcia. All rights reserved.
//

#include <iostream>
using namespace std;

char findUChar( string str ) {
    long h = str.length();
    for ( int i = 0; i < h;  i += 2 ) {
        if ( str[i] != str[i + 1] ) {
            return str[i];
        }
    }
    return '0';
}
    
int main() {
    string str;
    getline( cin, str );
    cout << findUChar( str ) << endl;
    return 0;
}
