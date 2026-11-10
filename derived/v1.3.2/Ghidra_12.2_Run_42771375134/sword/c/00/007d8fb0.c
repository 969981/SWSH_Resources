/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d8fb0; name: FUN_007d8fb0
 */


void FUN_007d8fb0(long param_1,long param_2)

{
  byte bVar1;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/data/out/data/data.pb.cc"
                 ,0x1bd);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  bVar1 = **(byte **)(param_2 + 0x30);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x30) + 8) == 0) {
    return;
  }
  FUN_00860e40(param_1 + 0x30,*(undefined8 *)PTR_DAT_02716d10);
  return;
}


