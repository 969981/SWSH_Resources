/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c2c30; name: FUN_009c2c30
 */


long FUN_009c2c30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar2 = PTR_DAT_02718810;
  if (*(long *)PTR_DAT_02718810 != 0) {
    return *(long *)PTR_DAT_02718810;
  }
  if ((DAT_02a4ff8b & 1) == 0) {
    DAT_02a4ff8b = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl_cmd_out/data/timer.pb.cc"
                );
    FUN_007e26f0(&DAT_01cde0ce,0x5a);
    FUN_00818650("timer.proto",&LAB_009c29e0);
    plVar3 = operator_new(0x20);
    *(undefined4 *)((long)plVar3 + 0x1c) = 0;
    puVar1 = PTR_DAT_02718808;
    *(undefined8 *)((long)plVar3 + 0x14) = 0;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    FUN_008010b0(PTR_LAB_02718818);
    return *(long *)puVar2;
  }
  return 0;
}


