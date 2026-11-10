/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085c710; name: FUN_0085c710
 */


void FUN_0085c710(long param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                 ,0x37bc);
  }
  FUN_0081a4e0(param_1 + 0x18,param_2 + 0x18);
  FUN_0081a4e0(param_1 + 0x30,param_2 + 0x30);
  FUN_0081cef0(param_1 + 0x58,param_2 + 0x58);
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 0x3fc) != 0) {
    if ((uVar2 >> 2 & 1) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      FUN_00860e40(param_1 + 0x48,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x48));
      uVar2 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar2 >> 3 & 1) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      FUN_00860e40(param_1 + 0x50,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x50));
    }
  }
  uVar3 = *(ulong *)(param_2 + 8);
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_009bb7d0((ulong *)(param_1 + 8));
    uVar3 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar4 = uVar4 & 0xfffffffffffffffe;
  }
  if ((uVar3 & 1) == 0) {
    uVar1 = FUN_0080f460();
    FUN_0080f7b0(uVar4,uVar1);
    return;
  }
  FUN_0080f7b0(uVar4,uVar3 & 0xfffffffffffffffe);
  return;
}


