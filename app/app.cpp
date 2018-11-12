//
//  app.cpp
//  DeaToCode
//
//  Created by Vincent Gierisch on 09.11.18.
//  Copyright © 2018 Vincent Gierisch. All rights reserved.
//
#include "app.hpp"

Application::Application(string jsonPath, string codePath, DfaToNxc codeGenerator){
    this->_pathToJson = jsonPath;
    this->_pathToCode = codePath;
    this->_codeGenerator = codeGenerator;
}

void Application::run(){
    this->printWelcomeText();
    JsonToDfa jsonMapper(this->_pathToJson);
    Dfa dfa = jsonMapper.generateDfa();
    this->_codeGenerator.generate(this->_pathToCode, dfa);
}

void Application::printWelcomeText(){
        std::cout << "To convert an DFA to valid code, please insert the dfa.json file in the same directory as this program. \n A json example can also be found there" << std::endl;
}
