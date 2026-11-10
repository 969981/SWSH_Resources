/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a3b80; name: FUN_007a3b80
 */


void FUN_007a3b80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  if ((DAT_029f4bfb & 1) == 0) {
    DAT_029f4bfb = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/cancel_accepted.pb.cc"
                );
    FUN_007e26f0(&DAT_01cf2adc,0x72);
    FUN_00818650("cancel_accepted.proto",&LAB_007a3c80);
    plVar3 = operator_new(0x20);
    puVar2 = PTR_DAT_02716660;
    puVar1 = PTR_DAT_02716658;
    *(undefined4 *)((long)plVar3 + 0x1c) = 0;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)(plVar3 + 3) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_02716668);
    return;
  }
  return;
}


