//
// Created by shobhit on 6/30/25.
//

#ifndef M88KASMPRINTER_HPP
#define M88KASMPRINTER_HPP

#include "llvm/CodeGen/AsmPrinter.h"
#include "M88kTargetMachine.h"

namespace llvm
{

class M88kAsmPrinter : public AsmPrinter {
public:
  explicit M88kAsmPrinter(TargetMachine &TM, std::unique_ptr<MCStreamer> Streamer)
           : AsmPrinter(TM, std::move(Streamer)) {}

  StringRef getPassName() const override { return "M88k Assembly Printer"; }

  void emitInstruction(const MachineInstr *MI) override;
};

}

#endif //M88KASMPRINTER_HPP
