/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01303d70; name: FUN_01303d70
 */


void FUN_01303d70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  if ((DAT_02a6cef3 & 1) == 0) {
    DAT_02a6cef3 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/cooking_transform.pb.cc"
                );
    FUN_007e26f0(&DAT_0216bf78,0xcf);
    FUN_00818650("cooking_transform.proto",&LAB_01303e70);
    plVar3 = operator_new(0x20);
    puVar2 = PTR_DAT_02727d60;
    puVar1 = PTR_DAT_02727d58;
    *(undefined4 *)((long)plVar3 + 0x1c) = 0;
    *(undefined8 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_02727d68);
    return;
  }
  return;
}


