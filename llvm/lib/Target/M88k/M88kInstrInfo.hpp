//
// Created by shobhit on 6/30/25.
//

#ifndef M88KINSTRINFO_HPP
#define M88KINSTRINFO_HPP

#include "llvm/CodeGen/TargetInstrInfo.h"
#include "M88kRegisterInfo.h"

namespace llvm
{

class M88kSubtarget;

class M88kInstrInfo : public M88kGenInstrInfo {
  const M88kSubtarget &Subtarget;

public:
  explicit M88kInstrInfo(const M88kSubtarget &ST);

  void copyPhysReg(MachineBasicBlock &MBB,
                   MachineBasicBlock::iterator MI,
                   const DebugLoc &DL,
                   MCRegister DestReg,
                   MCRegister SrcReg,
                   bool KillSrc) const override;

};

}

#endif //M88KINSTRINFO_HPP
