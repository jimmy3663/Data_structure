//
//  Rectangle.hpp
//  2.3
//
//  Created by 이진수 on 11/01/2019.
//  Copyright © 2019 이진수. All rights reserved.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
public:
    Rectangle();
    ~Rectangle();
    int GetHeight();
    int GetWidth();
private:
    int xLow, yLow, height, width;
    
};

#endif /* Rectangle_hpp */
