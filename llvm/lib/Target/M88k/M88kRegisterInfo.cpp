//
// Created by shobhit on 6/30/25.
//

#include "M88kRegisterInfo.hpp"

using namespace llvm;

M88kRegisterInfo::M88kRegisterInfo() {
  : M88kGenRegisterInfo() {}

const MCPhysReg* M88kRegisterInfo::getCalleSvedReg(const MachineFunction *MF) {

}

BitVector M88kRegisterInfo::getReservedReg(const MachineFunction &MF) {

}

Register M88kRegisterInfo::getFrameRegister(const MachineFunction &MF) {

}
