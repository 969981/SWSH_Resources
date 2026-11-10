/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011aa540; name: FUN_011aa540
 */


void FUN_011aa540(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if ((DAT_02a649f0 & 1) == 0) {
    DAT_02a649f0 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/out/data/player_position.pb.cc"
                );
    FUN_007e26f0(&DAT_01d117c4,0x103);
    FUN_00818650("player_position.proto",FUN_011aa700);
    plVar3 = operator_new(0x28);
    puVar1 = PTR_DAT_02725488 + 0x10;
    plVar3[3] = 0;
    plVar3[4] = 0;
    *plVar3 = (long)puVar1;
    plVar3[1] = 0;
    *(long **)PTR_DAT_02725470 = plVar3;
    plVar4 = operator_new(0x38);
    puVar1 = PTR_DAT_02725490;
    *(undefined4 *)(plVar4 + 6) = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    plVar4[3] = 0;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[1] = 0;
    *(long **)PTR_DAT_02725478 = plVar4;
    plVar5 = operator_new(0x18);
    puVar2 = PTR_DAT_02725498;
    puVar1 = PTR_DAT_02725480;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(undefined1 *)(plVar4 + 2) = 1;
    *(undefined4 *)((long)plVar5 + 0x14) = 0;
    *(undefined1 *)(plVar5 + 2) = 1;
    *(long **)puVar1 = plVar5;
    *plVar5 = (long)(puVar2 + 0x10);
    plVar5[1] = 0;
    FUN_008010b0(PTR_FUN_027254a0);
    return;
  }
  return;
}


