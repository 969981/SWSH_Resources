/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c31250; name: FUN_00c31250
 */


void FUN_00c31250(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((DAT_02a56ee3 & 1) == 0) {
    DAT_02a56ee3 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/btl_spot/source/state/protocol_buffers/out/data/btl_spot_data_holder.pb.cc"
                );
    FUN_00c307e0();
    FUN_007e26f0(&DAT_0215cd78,0xd0);
    FUN_00818650("btl_spot_data_holder.proto",&LAB_00c31390);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_0271bc58;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_0271bc50 = plVar2;
    DAT_02a56f18 = operator_new(8);
    *DAT_02a56f18 = 0;
    *(undefined1 *)(plVar2 + 2) = 1;
    uVar3 = FUN_00c30b10();
    *DAT_02a56f18 = uVar3;
    FUN_008010b0(PTR_LAB_0271bc60);
    return;
  }
  return;
}


