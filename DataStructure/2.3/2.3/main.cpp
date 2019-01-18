//
//  main.cpp
//  2.3
//
//  Created by 이진수 on 11/01/2019.
//  Copyright © 2019 이진수. All rights reserved.
//

#include <iostream>
#include "Rectangle.hpp"

using namespace std;

int main(){
    Rectangle r,s;
    Rectangle *t=&s;
    
    if(r.GetHeight()*r.GetWidth()>t->GetHeight()*t->GetWidth())
        cout<<"r";
    else cout<<"s";
    cout<<"has the greater area"<<endl;
}
