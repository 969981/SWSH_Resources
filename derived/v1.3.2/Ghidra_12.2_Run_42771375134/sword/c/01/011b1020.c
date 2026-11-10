/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b1020; name: _INIT_1403
 */


void _INIT_1403(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  if ((DAT_02a64b20 & 1) == 0) {
    DAT_02a64b20 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/out/data/refusal_for_regulation.pb.cc"
                );
    FUN_007e26f0(&DAT_01cfdd64,0x9e);
    FUN_00818650("refusal_for_regulation.proto",&LAB_011b0440);
    plVar3 = operator_new(0x20);
    puVar1 = PTR_DAT_02725570;
    *(undefined8 *)((long)plVar3 + 0x14) = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    *(long **)PTR_DAT_02725560 = plVar3;
    plVar4 = operator_new(0x18);
    puVar2 = PTR_DAT_02725578;
    puVar1 = PTR_DAT_02725568;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(undefined4 *)((long)plVar4 + 0x14) = 0;
    *(undefined1 *)(plVar4 + 2) = 1;
    *(long **)puVar1 = plVar4;
    *plVar4 = (long)(puVar2 + 0x10);
    plVar4[1] = 0;
    FUN_008010b0(PTR_FUN_02725580);
    return;
  }
  return;
}


