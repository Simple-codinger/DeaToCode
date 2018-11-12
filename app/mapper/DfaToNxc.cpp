//
//  DfaToCode.cpp
//
//
//  Created by Vincent Gierisch on 09.11.18.
//

#include "DfaToNxc.hpp"

void DfaToNxc::generate(string path, Dfa dfa){
  string nxc = "//DO NOT LOOK BEHIND THE CURTAIN!!!\n";
  nxc.append("//ABSOLUTELY PERFECT! \n\n");

  //define states
  int stateNumber = 0;
  for(State s : dfa.getStates()){
    stringstream ss;
    ss <<  "#define " << s.getName() << " " << stateNumber << endl;
    nxc.append(ss.str());
    stateNumber++;
  }

  //task begin
  nxc.append("\n\ntask dfa(){\n\n");

  //startState
  stringstream startStateString;
  startStateString << "int state = " << dfa.getStartState().getName() << ";\n";
  nxc.append(startStateString.str());

  //while(true) begin
  nxc.append("while(1){\n");

  //switch begin
  nxc.append("switch(state){\n");

  for(DeltaFunction deltaFunction : dfa.getDeltaFunctions()){
    stringstream caseStream;
    caseStream << "case " << deltaFunction.getState().getName() << ":" << endl;
    nxc.append(caseStream.str());
    for(Delta delta : deltaFunction.getDeltas()){
      stringstream deltaStream;
      deltaStream << "if(eventIsPresent(" << delta.alphabetLetter << ")){\nstate = " << delta.endState.getName() << ";\n}" << endl;
      nxc.append(deltaStream.str());
    }
    nxc.append("break;\n");
  }

  //switch end
  //while(true) end
  //task end
  nxc.append("}\n}\n}");

  ofstream outfile (path);
  outfile << nxc << std::endl;
  outfile.close();
}
