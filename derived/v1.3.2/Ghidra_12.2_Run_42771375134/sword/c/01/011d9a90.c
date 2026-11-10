/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011d9a90; name: FUN_011d9a90
 */


void FUN_011d9a90(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((DAT_02a65260 & 1) == 0) {
    DAT_02a65260 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/trade/common/pokemon_trade/protocol_buffers/out/data/pokemon_trade_data_holder.pb.cc"
                );
    FUN_011d8ea0();
    FUN_007e26f0(&DAT_02167ddc,0xf3);
    FUN_00818650("pokemon_trade_data_holder.proto",&LAB_011d9bd0);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_02725a50;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_02725a48 = plVar2;
    DAT_02a65280 = operator_new(8);
    *DAT_02a65280 = 0;
    *(undefined1 *)(plVar2 + 2) = 1;
    uVar3 = FUN_011d92e0();
    *DAT_02a65280 = uVar3;
    FUN_008010b0(PTR_LAB_02725a58);
    return;
  }
  return;
}


