//
// Created by shobhit on 6/30/25.
//

#include "M88kInstrInfo.hpp"

using namespace llvm;

M88kInstrInfo::M88kInstrInfo(const M88kSubtarget &ST)
  : M88kGenInstrInfo(), Subtarget(ST) {}

void M88kInstrInfo::copyPhysReg(MachineBasicBlock &MBB,
                   MachineBasicBlock::iterator MI,
                   const DebugLoc &DL,
                   MCRegister DestReg,
                   MCRegister SrcReg,
                   bool KillSrc) const {
  BuildMI(MBB, MI, DL, get(M88k::ADDrr), DestReg)
     .addReg(SrcReg, getKillRegState(KillSrc));
}
