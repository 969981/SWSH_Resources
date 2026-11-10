/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084d120; name: FUN_0084d120
 */


void FUN_0084d120(long param_1,long param_2)

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
                 ,0x267b);
  }
  FUN_00855b60(param_1 + 0x38,param_2 + 0x38);
  bVar1 = *(byte *)(param_2 + 0x30);
  uVar4 = (uint)bVar1;
  if (bVar1 == 0) goto LAB_0084d174;
  if ((bVar1 & 1) == 0) {
    if ((bVar1 >> 1 & 1) != 0) {
LAB_0084d1d8:
      uVar2 = *(undefined1 *)(param_2 + 0x51);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
      *(undefined1 *)(param_1 + 0x51) = uVar2;
      uVar4 = *(uint *)(param_2 + 0x30);
    }
  }
  else {
    uVar2 = *(undefined1 *)(param_2 + 0x50);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
    *(undefined1 *)(param_1 + 0x50) = uVar2;
    uVar4 = *(uint *)(param_2 + 0x30);
    if ((uVar4 >> 1 & 1) != 0) goto LAB_0084d1d8;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    uVar2 = *(undefined1 *)(param_2 + 0x52);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
    *(undefined1 *)(param_1 + 0x52) = uVar2;
    uVar4 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar4 >> 3 & 1) != 0) {
    uVar2 = *(undefined1 *)(param_2 + 0x53);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
    *(undefined1 *)(param_1 + 0x53) = uVar2;
  }
LAB_0084d174:
  FUN_00829d00(param_1 + 8,param_2 + 8);
  uVar5 = *(ulong *)(param_2 + 0x28);
  if ((uVar5 & 1) == 0) {
    return;
  }
  uVar6 = *(ulong *)(param_1 + 0x28);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_009bb7d0((ulong *)(param_1 + 0x28));
    uVar5 = *(ulong *)(param_2 + 0x28);
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


