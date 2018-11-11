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
  ifstream fileStream(this->_path);
  json j;
  try{
    fileStream >> j;
  }catch(...){
    cout << "Error: Parsing file" ;
  }

  list<State> states = this->generateStates(j);
  list<string> strings = this->generateAlphabet(j);
  list<DeltaFunction> deltaFunctions = this->generateDeltaFunctions(j);
}

list<State> JsonToDfa::generateStates(json j){
  list<State> states;
  for (json::iterator it = j.at("Q").begin(); it != j.at("Q").end(); ++it) {
    string s = (*it);
    State state;
    state.setName(s);
    states.push_back(state);
  }
  return states;
}

list<string> JsonToDfa::generateAlphabet(json j){
  list<string> strings;
  for (json::iterator it = j.at("E").begin(); it != j.at("E").end(); ++it) {
    strings.push_back((*it));
  }
  return strings;
}

list<DeltaFunction> JsonToDfa::generateDeltaFunctions(json j){
  list<DeltaFunction> deltaFunctions;
  for (json::iterator it = j.at("d").begin(); it != j.at("d").end(); ++it) {
    cout << (*it)["startState"];
  }
  return deltaFunctions;
}
