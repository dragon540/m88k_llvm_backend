//
// Created by shobhit on 6/30/25.
//

#include "M88kTargetMachine.hpp"


M88kTargetMachine::M88kTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                    StringRef FS, const TargetOptions &Options,
                    Optional<Reloc::Model> RM,
                    Optional<CodeModel::Model> CM,
                    CodeGenOpt::Level OL, bool JIT) :
          LLVMTargetMachine(T, TT, CPU, FS, Options, RM.value_or(Reloc::Static),
                            CM.value_or(CodeModel::Small),OL,
                            Subtarget(TT, CPU, FS, *this) {

                  TLOF = ;
                  initAsmInfo();
}

TargetPassConfig *M88kTargetMachine::createPassConfig(PassManagerBase &PM) {
  return new TargetPassConfig(*this, PM);
}
