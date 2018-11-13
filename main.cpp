//
//  main.cpp
//
//
//  Created by Vincent Gierisch on 09.11.18.
//

#include "app/app.hpp"
#include "app/mapper/DfaToNxc.hpp"
#include <iostream>


int main(){
    //TODO add mappers object to constructor, it should indicate to which code it should transfer
    DfaToNxc codeGenerator;
    Application app("robotic.json", "dfaTask.nxc", codeGenerator);
    app.run();
}
