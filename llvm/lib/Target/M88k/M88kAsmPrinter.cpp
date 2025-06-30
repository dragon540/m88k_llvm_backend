//
// Created by shobhit on 6/30/25.
//

#include "M88kAsmPrinter.hpp"

using namespace llvm;

void M88kAsmPrinter::emitInstruction(const MachineInstr *MI) {
  MCInst mcinst;
  LowerToMC(MI, mcinst);
  EmitToStreamer(*OutStreamer, MCInst);
}

