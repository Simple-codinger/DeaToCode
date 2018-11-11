//
//  JsonToDfa.cpp
//  DeaToCode
//
//  Created by Vincent Gierisch on 10.11.18.
//  Copyright © 2018 Vincent Gierisch. All rights reserved.
//

#include "JsonToDfa.hpp"

JsonToDfa::JsonToDfa(string path){
    this->_path = path;
}

void JsonToDfa::generateDfa(){
  //read the json-File
  ifstream i(this->_path);
  json j;
  i >> j;

  cout << j.at("q0");
}
