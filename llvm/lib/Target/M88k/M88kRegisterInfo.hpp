//
// Created by shobhit on 6/30/25.
//

#ifndef M88KREGISTERINFO_HPP
#define M88KREGISTERINFO_HPP

#include "llvm/CodeGen/TargetRegisterInfo.h"

namespace llvm
{

class M88kRegisterInfo : public M88kGenRegisterInfo {
public:
  M88kRegisterInfo();

  const MCPhysReg* getCalleSvedReg(const MachineFunction *MF) const override;

  BitVector getReservedReg(const MachineFunction &MF) const override;

  Register getFrameRegister(const MachineFunction &MF) const override;
};

}



#endif //M88KREGISTERINFO_HPP
