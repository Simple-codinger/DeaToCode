//
//  main.cpp
//
//
//  Created by Vincent Gierisch on 09.11.18.
//

#include "app/app.hpp"
#include <iostream>
//#include <nlohmann/json.hpp>


int main(){
    //TODO add mappers object to constructor, it should indicate to which code it should transfer
    Application app("jsonExample.json");
    app.run();
}
