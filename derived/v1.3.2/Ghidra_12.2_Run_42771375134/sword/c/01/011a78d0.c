/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011a78d0; name: FUN_011a78d0
 */


long FUN_011a78d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar2 = PTR_DAT_02725438;
  if (*(long *)PTR_DAT_02725438 != 0) {
    return *(long *)PTR_DAT_02725438;
  }
  if ((DAT_02a64940 & 1) == 0) {
    DAT_02a64940 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/out/data/pass_action.pb.cc"
                );
    FUN_007e26f0(&DAT_01cd7ba5,0x53);
    FUN_00818650("pass_action.proto",&LAB_011a7690);
    plVar3 = operator_new(0x18);
    puVar1 = PTR_DAT_02725430;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *(long **)puVar2 = plVar3;
    *(undefined1 *)(plVar3 + 2) = 1;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_02725440);
    return *(long *)puVar2;
  }
  return 0;
}


