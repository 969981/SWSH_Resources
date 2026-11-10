/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117a240; name: FUN_0117a240
 */


void FUN_0117a240(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((DAT_02a642e8 & 1) == 0) {
    DAT_02a642e8 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_buffers/out/data/net_live_data_holder.pb.cc"
                );
    FUN_01178cb0();
    FUN_01179650();
    FUN_007e26f0(&DAT_02166298,0x139);
    FUN_00818650("net_live_data_holder.proto",&LAB_0117a390);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_02725090;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_02725088 = plVar2;
    DAT_02a64300 = operator_new(0x10);
    *DAT_02a64300 = 0;
    DAT_02a64300[1] = 0;
    *(undefined1 *)(plVar2 + 2) = 1;
    uVar3 = FUN_01178fe0();
    *DAT_02a64300 = uVar3;
    uVar3 = FUN_01179a90();
    DAT_02a64300[1] = uVar3;
    FUN_008010b0(PTR_LAB_02725098);
    return;
  }
  return;
}


