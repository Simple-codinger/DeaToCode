//
//  Dfa.hpp
//
//
//  Created by Vincent Gierisch on 09.11.18.
//

#ifndef Dfa_hpp
#define Dfa_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <list>
#include "state.hpp"
#include "DeltaFunction.hpp"

using namespace std;

class Dfa{
    private:
        list<State> _states;
        list<string> _alphabet;
        list<DeltaFunction> _deltaFunctions;
        State _startState;
        list<State> _endStates;

    public:
        Dfa(list<State> states, list<string> alphabet, list<DeltaFunction> deltaFunctions, State startState, list<State> endStates);
        //region getter
        list<State> getStates();
        list<string> getAlphabet();
        list<DeltaFunction> getDeltaFunctions();
        State getStartState();
        list<State> getEndStates();
        //endregion
        void addState(State state);
        void addAlphabetLetter(string alphabetLetter);
        void addDeltaFunction(DeltaFunction deltaFunction);
        void addStartState(State startState);
        void addEndState(State endState);
        void compress();
        bool isValid();
};
#endif /* Dfa_hpp */
