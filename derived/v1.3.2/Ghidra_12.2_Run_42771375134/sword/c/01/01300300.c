/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01300300; name: FUN_01300300
 */


long FUN_01300300(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar2 = PTR_DAT_02727d00;
  if (*(long *)PTR_DAT_02727d00 != 0) {
    return *(long *)PTR_DAT_02727d00;
  }
  if ((DAT_02a6cc73 & 1) == 0) {
    DAT_02a6cc73 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/cooking_data.pb.cc"
                );
    FUN_007e26f0(&DAT_01d0e452,0xa3);
    FUN_00818650("cooking_data.proto",&LAB_013000a0);
    plVar3 = operator_new(0x40);
    puVar1 = PTR_DAT_02727cf8;
    *(undefined4 *)((long)plVar3 + 0x3c) = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    *(undefined8 *)((long)plVar3 + 0x14) = 0;
    *(undefined4 *)((long)plVar3 + 0x34) = 0;
    *(undefined1 *)(plVar3 + 7) = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    *(long **)puVar2 = plVar3;
    *(undefined1 *)(plVar3 + 2) = 1;
    FUN_008010b0(PTR_LAB_02727d08);
    return *(long *)puVar2;
  }
  return 0;
}


