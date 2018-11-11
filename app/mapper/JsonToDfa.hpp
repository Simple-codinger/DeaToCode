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
#include <fstream>
#include <list>
#include "../models/state.hpp"
#include "../models/DeltaFunction.hpp"
#include "../../nlohmann/json.hpp"
#include "../models/Dfa.hpp"

using namespace std;
using json = nlohmann::json;

class JsonToDfa{
    private:
        string _path;
        list<State> generateStates(json j);
        list<string> generateAlphabet(json j);
        list<DeltaFunction> generateDeltaFunctions(json j);


    public:
        JsonToDfa(string path);
        void generateDfa();
        //bool isValidJson();
};
#endif /* JsonToDfa_hpp */
