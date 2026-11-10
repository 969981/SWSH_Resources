/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011af7d0; name: FUN_011af7d0
 */


void FUN_011af7d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  if ((DAT_02a64af0 & 1) == 0) {
    DAT_02a64af0 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/out/data/regulation_check_result.pb.cc"
                );
    FUN_007e26f0(&DAT_01d1f411,0x7b);
    FUN_00818650("regulation_check_result.proto",&LAB_011af8d0);
    plVar3 = operator_new(0x18);
    puVar2 = PTR_DAT_02725548;
    puVar1 = PTR_DAT_02725540;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)((long)plVar3 + 0x11) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_02725550);
    return;
  }
  return;
}


