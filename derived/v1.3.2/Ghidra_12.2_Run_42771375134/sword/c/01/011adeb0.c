/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011adeb0; name: _INIT_1399
 */


void _INIT_1399(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  if ((DAT_02a64a78 & 1) == 0) {
    DAT_02a64a78 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/out/data/accept_privilege.pb.cc"
                );
    FUN_007e26f0(&DAT_01d118c8,0x86);
    FUN_00818650("accept_privilege.proto",&LAB_011ad530);
    plVar3 = operator_new(0x28);
    puVar2 = PTR_DAT_027254e8;
    puVar1 = PTR_DAT_027254e0;
    *(undefined4 *)((long)plVar3 + 0x24) = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_027254f0);
    return;
  }
  return;
}


