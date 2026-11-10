/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085e700; name: FUN_0085e700
 */


void FUN_0085e700(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                 ,0x3b5f);
  }
  FUN_0081a4e0(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1fe) != 0) {
    if ((uVar1 >> 1 & 1) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      FUN_00860e40(param_1 + 0x30,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x30));
      uVar1 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      *(undefined4 *)(param_1 + 0x38) = uVar2;
      uVar1 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x3c);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
    }
  }
  uVar4 = *(ulong *)(param_2 + 8);
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_009bb7d0((ulong *)(param_1 + 8));
    uVar4 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar5 = uVar5 & 0xfffffffffffffffe;
  }
  if ((uVar4 & 1) == 0) {
    uVar3 = FUN_0080f460();
    FUN_0080f7b0(uVar5,uVar3);
    return;
  }
  FUN_0080f7b0(uVar5,uVar4 & 0xfffffffffffffffe);
  return;
}


