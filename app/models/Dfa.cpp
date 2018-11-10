//
//  Dfa.cpp
//
//
//  Created by Vincent Gierisch on 09.11.18.
//

#include "Dfa.hpp"
Dfa::Dfa(list<State> states, list<string> alphabet, list<DeltaFunction> deltaFunctions, State startState, list<State> endStates){
    this->_states = states;
    this->_alphabet = alphabet;
    this->_deltaFunctions = deltaFunctions;
    this->_startState = startState;
    this->_endStates = endStates;
}

void Dfa::addState(State state){
    this->_states.push_back(state);
}

void Dfa::addAlphabetLetter(string alphabetLetter){
    this->_alphabet.push_back(alphabetLetter);
}

void Dfa::addDeltaFunction(DeltaFunction deltaFunction){
    this->_deltaFunctions.push_back(deltaFunction);
}

void Dfa::addStartState(State startState){
    this->_startState = startState;
}

void Dfa::addEndState(State endState){
    this->_endStates.push_back(endState);
}

void Dfa::compress(){

}

bool Dfa::isValid(){
    //TODO: check if DFA is valid
    return true;
}
