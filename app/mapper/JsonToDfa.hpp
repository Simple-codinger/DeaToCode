//
//  JsonToDfa.hpp
//  DeaToCode
//
//  Created by Vincent Gierisch on 10.11.18.
//  Copyright © 2018 Vincent Gierisch. All rights reserved.
//

#ifndef JsonToDfa_hpp
#define JsonToDfa_hpp

#include <stdio.h>
#include <iostream>
//#include "../models/Dfa.hpp"

using namespace std;

class JsonToDfa{
    private:
        string _path;
    
    public:
        JsonToDfa(string path);
        void generateDfa();
        //bool isValidJson();
};
#endif /* JsonToDfa_hpp */
