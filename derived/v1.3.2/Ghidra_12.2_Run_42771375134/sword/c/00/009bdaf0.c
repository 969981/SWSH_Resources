/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009bdaf0; name: FUN_009bdaf0
 */


void FUN_009bdaf0(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((DAT_02a4fdfb & 1) == 0) {
    DAT_02a4fdfb = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out/data/btl_data_holder.pb.cc"
                );
    FUN_009bbb30();
    FUN_009bf990();
    FUN_009beb70();
    FUN_007e26f0(&DAT_0214c480,0x148);
    FUN_00818650("btl_data_holder.proto",&LAB_009bdc50);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_02718770;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_02718768 = plVar2;
    DAT_02a4fe28 = operator_new(0x18);
    DAT_02a4fe28[1] = 0;
    DAT_02a4fe28[2] = 0;
    *DAT_02a4fe28 = 0;
    *(undefined1 *)(plVar2 + 2) = 1;
    uVar3 = FUN_009bbe60();
    *DAT_02a4fe28 = uVar3;
    uVar3 = FUN_009bfdf0();
    DAT_02a4fe28[1] = uVar3;
    uVar3 = FUN_009beed0();
    DAT_02a4fe28[2] = uVar3;
    FUN_008010b0(PTR_LAB_02718778);
    return;
  }
  return;
}


