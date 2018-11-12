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

Dfa JsonToDfa::generateDfa(){
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
  State startState;
  startState.setName(j["q0"]);
  list<State> endStates =this->generateEndStates(j);


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
    State startState;
    startState.setName((*it)["startState"]);
    list<Delta> deltas;
    for(json::iterator itDelta = (*it)["deltaFunction"].begin(); itDelta != (*it)["deltaFunction"].end(); ++itDelta){
      struct Delta delta;
      delta.alphabetLetter = (*itDelta)["letter"];
      State endState;
      endState.setName((*itDelta)["endState"]);
      delta.endState = endState;
      deltas.push_back(delta);
    }
    DeltaFunction delta(startState, deltas);
    deltaFunctions.push_back(delta);
  }
  return deltaFunctions;
}

list<State> JsonToDfa::generateEndStates(json j){
  list<State> endStates;
  for (json::iterator it = j.at("F").begin(); it != j.at("F").end(); ++it) {
    string s = (*it);
    State state;
    state.setName(s);
    endStates.push_back(state);
  }
  return endStates;
}
