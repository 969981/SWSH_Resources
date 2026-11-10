/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d4dc0; name: FUN_009d4dc0
 */


long FUN_009d4dc0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar2 = PTR_DAT_027189a0;
  if (*(long *)PTR_DAT_027189a0 != 0) {
    return *(long *)PTR_DAT_027189a0;
  }
  if ((DAT_02a502cb & 1) == 0) {
    DAT_02a502cb = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffers/out_async/data/watch_winlose.pb.cc"
                );
    FUN_007e26f0(&DAT_01cf9a7f,0x6e);
    FUN_00818650("watch_winlose.proto",&LAB_009d4b70);
    plVar3 = operator_new(0x20);
    *(undefined4 *)((long)plVar3 + 0x1c) = 0;
    puVar1 = PTR_DAT_02718998;
    *(undefined8 *)((long)plVar3 + 0x14) = 0;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    FUN_008010b0(PTR_LAB_027189a8);
    return *(long *)puVar2;
  }
  return 0;
}


