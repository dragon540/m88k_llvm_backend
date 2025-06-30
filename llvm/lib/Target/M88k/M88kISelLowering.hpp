//
// Created by shobhit on 6/30/25.
//

#ifndef M88KISELLOWERING_HPP
#define M88KISELLOWERING_HPP


class M88kTargetLowering : public TargetLowering {

  const TargetMachine &TM;
  const M88kSubtarget &Subtarget;

public:
  M88kTargetLowering(const TargetMachine &TM, const M88kSubtarget &STI);


};



#endif //M88KISELLOWERING_HPP
