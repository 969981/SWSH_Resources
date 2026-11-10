/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01302da0; name: FUN_01302da0
 */


long FUN_01302da0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar2 = PTR_DAT_02727d40;
  if (*(long *)PTR_DAT_02727d40 != 0) {
    return *(long *)PTR_DAT_02727d40;
  }
  if ((DAT_02a6ce23 & 1) == 0) {
    DAT_02a6ce23 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/cooking_matching_data.pb.cc"
                );
    FUN_007e26f0(&DAT_0216bd34,0x239);
    FUN_00818650("cooking_matching_data.proto",&LAB_01302b00);
    plVar3 = operator_new(0x30);
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    puVar1 = PTR_DAT_02727d38;
    *(undefined1 *)(plVar3 + 3) = 0;
    *(undefined4 *)((long)plVar3 + 0x2c) = 0;
    *(undefined8 *)((long)plVar3 + 0x24) = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    *(undefined8 *)((long)plVar3 + 0x1c) = 0;
    *(long **)puVar2 = plVar3;
    *(undefined1 *)(plVar3 + 2) = 1;
    FUN_008010b0(PTR_LAB_02727d48);
    return *(long *)puVar2;
  }
  return 0;
}


