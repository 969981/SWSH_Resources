/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01304b90; name: FUN_01304b90
 */


void FUN_01304b90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  if ((DAT_02a6cfb3 & 1) == 0) {
    DAT_02a6cfb3 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/cooking_spiece.pb.cc"
                );
    FUN_007e26f0(&DAT_01d26073,0x7b);
    FUN_00818650("cooking_spiece.proto",&LAB_01304c90);
    plVar4 = operator_new(0x28);
    puVar3 = PTR_LAB_02727d88;
    puVar1 = PTR_DAT_02727d78;
    *(undefined1 *)((long)plVar4 + 0x11) = 0;
    *(undefined4 *)((long)plVar4 + 0x24) = 0;
    *(undefined8 *)((long)plVar4 + 0x1c) = 0;
    puVar2 = PTR_DAT_02727d80;
    *(undefined8 *)((long)plVar4 + 0x14) = 0;
    *(long **)puVar2 = plVar4;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[1] = 0;
    *(undefined1 *)(plVar4 + 2) = 1;
    FUN_008010b0(puVar3);
    return;
  }
  return;
}


