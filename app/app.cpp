//
//  app.cpp
//  DeaToCode
//
//  Created by Vincent Gierisch on 09.11.18.
//  Copyright © 2018 Vincent Gierisch. All rights reserved.
//
#include "app.hpp"
#include "mapper/JsonToDfa.hpp"

Application::Application(string path){
    this->_pathToJson = path;
}

void Application::run(){
    this->printWelcomeText();
    JsonToDfa jsonMapper(this->_pathToJson);
    //jsonMapper.generateDfa();
}

void Application::printWelcomeText(){
        std::cout << "To convert an DFA to valid code, please insert the dfa.json file in the same directory as this program. \n A json example can also be found there" << std::endl;
}
