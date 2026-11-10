/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084edc0; name: FUN_0084edc0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0084edc0(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                 ,0x292f);
  }
  FUN_00855b60(param_1 + 0x40,param_2 + 0x40);
  bVar2 = *(byte *)(param_2 + 0x30);
  uVar5 = (uint)bVar2;
  if (bVar2 == 0) goto LAB_0084ee1c;
  if ((bVar2 & 1) == 0) {
    if ((bVar2 >> 1 & 1) != 0) {
LAB_0084ee80:
      uVar3 = *(undefined1 *)(param_2 + 0x58);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
      *(undefined1 *)(param_1 + 0x58) = uVar3;
      uVar5 = *(uint *)(param_2 + 0x30);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x38);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    uVar5 = *(uint *)(param_2 + 0x30);
    if ((uVar5 >> 1 & 1) != 0) goto LAB_0084ee80;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x3c);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    uVar5 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar5 >> 3 & 1) != 0) {
    uVar3 = *(undefined1 *)(param_2 + 0x59);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
    *(undefined1 *)(param_1 + 0x59) = uVar3;
    uVar5 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar5 >> 4 & 1) != 0) {
    uVar3 = *(undefined1 *)(param_2 + 0x5a);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x10;
    *(undefined1 *)(param_1 + 0x5a) = uVar3;
    uVar5 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar5 >> 5 & 1) != 0) {
    uVar3 = *(undefined1 *)(param_2 + 0x5b);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20;
    *(undefined1 *)(param_1 + 0x5b) = uVar3;
  }
LAB_0084ee1c:
  FUN_00829d00(param_1 + 8,param_2 + 8);
  uVar6 = *(ulong *)(param_2 + 0x28);
  if ((uVar6 & 1) == 0) {
    return;
  }
  uVar7 = *(ulong *)(param_1 + 0x28);
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_009bb7d0((ulong *)(param_1 + 0x28));
    uVar6 = *(ulong *)(param_2 + 0x28);
  }
  else {
    uVar7 = uVar7 & 0xfffffffffffffffe;
  }
  if ((uVar6 & 1) == 0) {
    uVar4 = FUN_0080f460();
    FUN_0080f7b0(uVar7,uVar4);
    return;
  }
  FUN_0080f7b0(uVar7,uVar6 & 0xfffffffffffffffe);
  return;
}


