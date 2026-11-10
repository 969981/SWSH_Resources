/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00851c90; name: FUN_00851c90
 */


void FUN_00851c90(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                 ,0x2e0b);
  }
  FUN_00855b60(param_1 + 0x38,param_2 + 0x38);
  if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
    uVar1 = *(undefined1 *)(param_2 + 0x50);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
    *(undefined1 *)(param_1 + 0x50) = uVar1;
  }
  FUN_00829d00(param_1 + 8,param_2 + 8);
  uVar3 = *(ulong *)(param_2 + 0x28);
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar4 = *(ulong *)(param_1 + 0x28);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_009bb7d0((ulong *)(param_1 + 0x28));
    uVar3 = *(ulong *)(param_2 + 0x28);
  }
  else {
    uVar4 = uVar4 & 0xfffffffffffffffe;
  }
  if ((uVar3 & 1) == 0) {
    uVar2 = FUN_0080f460();
    FUN_0080f7b0(uVar4,uVar2);
    return;
  }
  FUN_0080f7b0(uVar4,uVar3 & 0xfffffffffffffffe);
  return;
}


