include "llvm/Target/Target.td"

class M88kReg<string Mnemonic> : Register<Mnemonic> {
    let Namespace = "M88k";
    //let HWEncoding {4-0} = RegEnc;
    //let HWEncoding {15-5} = 0;
}

foreach I = 0-31 in {
    def R#I : M88kReg<"R"#I> {
        let isConstant = !eq(I, 0);
    }
}
