/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084fbe0; name: FUN_0084fbe0
 */


void FUN_0084fbe0(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                 ,0x2b05);
  }
  FUN_00855b60(param_1 + 0x38,param_2 + 0x38);
  FUN_00829d00(param_1 + 8,param_2 + 8);
  uVar2 = *(ulong *)(param_2 + 0x28);
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar3 = *(ulong *)(param_1 + 0x28);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_009bb7d0((ulong *)(param_1 + 0x28));
    uVar2 = *(ulong *)(param_2 + 0x28);
  }
  else {
    uVar3 = uVar3 & 0xfffffffffffffffe;
  }
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_0080f460();
    FUN_0080f7b0(uVar3,uVar1);
    return;
  }
  FUN_0080f7b0(uVar3,uVar2 & 0xfffffffffffffffe);
  return;
}


