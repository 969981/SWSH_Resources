/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b1f00; name: FUN_011b1f00
 */


void FUN_011b1f00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  if ((DAT_02a64b80 & 1) == 0) {
    DAT_02a64b80 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/out/data/empty.pb.cc"
                );
    FUN_007e26f0(&DAT_01cf03ea,0x48);
    FUN_00818650("empty.proto",&LAB_011b1ff0);
    plVar3 = operator_new(0x18);
    puVar2 = PTR_DAT_027255b8;
    puVar1 = PTR_DAT_027255b0;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_027255c0);
    return;
  }
  return;
}


