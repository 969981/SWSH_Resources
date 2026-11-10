/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01178cb0; name: FUN_01178cb0
 */


void FUN_01178cb0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  if ((DAT_02a64298 & 1) == 0) {
    DAT_02a64298 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_buffers/out/data/live_empty.pb.cc"
                );
    FUN_007e26f0(&DAT_01d2d632,0x52);
    FUN_00818650("live_empty.proto",&LAB_01178da0);
    plVar3 = operator_new(0x18);
    puVar2 = PTR_DAT_02725050;
    puVar1 = PTR_DAT_02725048;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_02725058);
    return;
  }
  return;
}


