/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085aad0; name: FUN_0085aad0
 */


void FUN_0085aad0(long param_1,long param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                 ,0x3256);
  }
  bVar1 = *(byte *)(param_2 + 0x10);
  uVar4 = (uint)bVar1;
  if (bVar1 != 0) {
    if ((bVar1 & 1) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      FUN_00860e40(param_1 + 0x18,*(undefined8 *)PTR_DAT_02716d10,*(undefined8 *)(param_2 + 0x18));
      uVar4 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar4 >> 1 & 1) != 0) {
      uVar2 = *(undefined1 *)(param_2 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      *(undefined1 *)(param_1 + 0x20) = uVar2;
    }
  }
  uVar5 = *(ulong *)(param_2 + 8);
  if ((uVar5 & 1) == 0) {
    return;
  }
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_009bb7d0((ulong *)(param_1 + 8));
    uVar5 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar6 = uVar6 & 0xfffffffffffffffe;
  }
  if ((uVar5 & 1) == 0) {
    uVar3 = FUN_0080f460();
    FUN_0080f7b0(uVar6,uVar3);
    return;
  }
  FUN_0080f7b0(uVar6,uVar5 & 0xfffffffffffffffe);
  return;
}


