//
//  app.hpp
//  DeaToCode
//
//  Created by Vincent Gierisch on 09.11.18.
//  Copyright © 2018 Vincent Gierisch. All rights reserved.
//

#ifndef app_hpp
#define app_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "mapper/JsonToDfa.hpp"
#include "mapper/interfaces/ICodeGenerator.hpp"
#include "mapper/DfaToNxc.hpp"

using namespace std;

class Application{
private:
    string _pathToJson;
    string _pathToCode;
    ICodeGenerator* _codeGenerator;
    void printWelcomeText();

public:
    Application(string jsonPath, string codePath, ICodeGenerator* codeGenerator);
    void run();
};
#endif /* app_hpp */
