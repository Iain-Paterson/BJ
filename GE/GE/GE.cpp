//
//  GE.cpp
//  GE
//
//  Created by Iain Paterson on 16/10/2024.
//

#include <iostream>
#include "GE.hpp"
#include "GEPriv.hpp"

void GE::HelloWorld(const char * s)
{
    GEPriv *theObj = new GEPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void GEPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

