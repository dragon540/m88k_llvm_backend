//
// Created by shobhit on 6/30/25.
//

#ifndef M88KTARGETMACHINE_HPP
#define M88KTARGETMACHINE_HPP

#include "llvm/Target/TargetMachine.h"

namespace llvm
{

class M88kTargetMachine : public LLVMTargetMachine {
public:
  M88kTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                    StringRef FS, const TargetOptions &Options,
                    Optional<Reloc::Model> RM,
                    Optional<CodeModel::Model> CM,
                    CodeGenOpt::Level OL, bool JIT);

  const M88kSubtarget *getSubtarget() const { return &SubTarget; }

  TargetPassConfig *createPassConfig(PassManagerBase &PM) override;

};

}



#endif //M88KTARGETMACHINE_HPP
