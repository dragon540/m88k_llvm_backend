def ADDrr : Instruction {
    let Namespace = "M88k";
    let OutOperandList = (outs GPR:$dst);
    let InOperandList = (ins GPR:$src1, GPR$src2);
    let AsmString = "ADD $ds1, $src1, $src2";
}