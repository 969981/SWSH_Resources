/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009da450; name: FUN_009da450
 */


void FUN_009da450(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  if ((DAT_02a504b3 & 1) == 0) {
    DAT_02a504b3 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffers/out_async/data/watch_seq.pb.cc"
                );
    FUN_007e26f0(&DAT_01d28b0e,0x66);
    FUN_00818650("watch_seq.proto",&LAB_009da550);
    plVar3 = operator_new(0x20);
    puVar2 = PTR_DAT_02718a60;
    puVar1 = PTR_DAT_02718a58;
    *(undefined4 *)((long)plVar3 + 0x1c) = 0;
    *(undefined8 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_02718a68);
    return;
  }
  return;
}


