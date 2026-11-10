/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013029f0; name: FUN_013029f0
 */


void FUN_013029f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  if ((DAT_02a6ce23 & 1) == 0) {
    DAT_02a6ce23 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/cooking_matching_data.pb.cc"
                );
    FUN_007e26f0(&DAT_0216bd34,0x239);
    FUN_00818650("cooking_matching_data.proto",&LAB_01302b00);
    plVar4 = operator_new(0x30);
    puVar1 = PTR_DAT_02727d38;
    *(undefined4 *)((long)plVar4 + 0x14) = 0;
    puVar3 = PTR_LAB_02727d48;
    *(undefined1 *)(plVar4 + 3) = 0;
    puVar2 = PTR_DAT_02727d40;
    *(undefined4 *)((long)plVar4 + 0x2c) = 0;
    *(undefined8 *)((long)plVar4 + 0x24) = 0;
    *(undefined8 *)((long)plVar4 + 0x1c) = 0;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[1] = 0;
    *(undefined1 *)(plVar4 + 2) = 1;
    *(long **)puVar2 = plVar4;
    FUN_008010b0(puVar3);
    return;
  }
  return;
}


