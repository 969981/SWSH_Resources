/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013013e0; name: FUN_013013e0
 */


void FUN_013013e0(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((DAT_02a6cd33 & 1) == 0) {
    DAT_02a6cd33 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/pokecamp_data_holder.pb.cc"
                );
    FUN_012fff90();
    FUN_013029f0();
    FUN_01304b90();
    FUN_01303d70();
    FUN_012f90b0();
    FUN_007e26f0(&DAT_0216baf8,0x208);
    FUN_00818650("pokecamp_data_holder.proto",&LAB_01301560);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_02727d20;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_02727d18 = plVar2;
    puVar3 = operator_new(0x28);
    puVar3[3] = 0;
    puVar3[4] = 0;
    *puVar3 = 0;
    DAT_02a6cd60 = puVar3;
    *(undefined1 *)(plVar2 + 2) = 1;
    puVar3[1] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_01300300();
    *DAT_02a6cd60 = uVar4;
    uVar4 = FUN_01302da0();
    DAT_02a6cd60[1] = uVar4;
    uVar4 = FUN_01304f40();
    DAT_02a6cd60[2] = uVar4;
    uVar4 = FUN_013040c0();
    DAT_02a6cd60[3] = uVar4;
    uVar4 = FUN_012fd8a0();
    DAT_02a6cd60[4] = uVar4;
    FUN_008010b0(PTR_FUN_02727d28);
    return;
  }
  return;
}


