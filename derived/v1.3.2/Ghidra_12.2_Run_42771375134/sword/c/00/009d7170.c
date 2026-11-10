/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d7170; name: FUN_009d7170
 */


void FUN_009d7170(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((DAT_02a5039b & 1) == 0) {
    DAT_02a5039b = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffers/out/data/btlwatch_data_holder.pb.cc"
                );
    FUN_009d7bd0();
    FUN_007e26f0(&DAT_0214cab0,0xb4);
    FUN_00818650("btlwatch_data_holder.proto",&LAB_009d72b0);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_02718a00;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_027189f8 = plVar2;
    DAT_02a503d0 = operator_new(8);
    *DAT_02a503d0 = 0;
    *(undefined1 *)(plVar2 + 2) = 1;
    uVar3 = FUN_009d8020();
    *DAT_02a503d0 = uVar3;
    FUN_008010b0(PTR_LAB_02718a08);
    return;
  }
  return;
}


