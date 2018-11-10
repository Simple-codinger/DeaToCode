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
#include "mapper/JsonToDfa.hpp"

class Application{
private:
    std::string _pathToJson;
    void printWelcomeText();
public:
    Application(std::string path);
    void run();
};
#endif /* app_hpp */
