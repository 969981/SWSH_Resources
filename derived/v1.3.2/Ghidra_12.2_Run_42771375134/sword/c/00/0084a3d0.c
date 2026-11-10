/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084a3d0; name: FUN_0084a3d0
 */


void FUN_0084a3d0(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                 ,0xbbf);
  }
  bVar2 = *(byte *)(param_2 + 0x10);
  uVar4 = (uint)bVar2;
  if (bVar2 != 0) {
    if ((bVar2 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      *(undefined4 *)(param_1 + 0x18) = uVar1;
      uVar4 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar4 >> 1 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x1c);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      *(undefined4 *)(param_1 + 0x1c) = uVar1;
    }
  }
  uVar5 = *(ulong *)(param_2 + 8);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    uVar6 = FUN_009bb7d0();
    uVar5 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  }
  if ((uVar5 & 1) == 0) {
    uVar3 = FUN_0080f460();
    FUN_0080f7b0(uVar6,uVar3);
    return;
  }
  FUN_0080f7b0(uVar6,uVar5 & 0xfffffffffffffffe);
  return;
}


