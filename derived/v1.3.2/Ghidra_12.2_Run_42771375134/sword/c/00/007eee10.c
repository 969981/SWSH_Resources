/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007eee10; name: FUN_007eee10
 */


void FUN_007eee10(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  
  pbVar3 = (byte *)FUN_007e1d20(*(undefined8 *)(param_1 + 8),
                                *(undefined8 *)(*(long *)(param_1 + 0x50) + 8));
  if ((*pbVar3 & 1) == 0) {
    if (*pbVar3 >> 1 == 0) goto LAB_007eee70;
  }
  else if (*(long *)(pbVar3 + 8) == 0) goto LAB_007eee70;
  std::string::append((ulong)pbVar3,'\x01');
LAB_007eee70:
  pbVar5 = *(byte **)(param_2 + 0x18);
  pbVar2 = *(byte **)(pbVar5 + 0x10);
  if ((*pbVar5 & 1) == 0) {
    pbVar2 = pbVar5 + 1;
  }
  std::string::append((char *)pbVar3,(ulong)pbVar2);
  FUN_007ebbc0(param_1,*(undefined8 *)(param_2 + 0x18),pbVar3,param_2);
  uVar4 = FUN_007e1d20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x18));
  *param_4 = uVar4;
  param_4[1] = pbVar3;
  param_4[2] = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 0x28);
  uVar4 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x28) * 0x38);
  param_4[5] = uVar4;
  if ((0 < *(int *)(param_2 + 0x28)) &&
     (FUN_007f1eb0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x30) + 8),param_4,uVar4),
     1 < *(int *)(param_2 + 0x28))) {
    lVar7 = 0x38;
    lVar6 = 2;
    do {
      FUN_007f1eb0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x30) + lVar6 * 8),param_4,
                   param_4[5] + lVar7);
      lVar7 = lVar7 + 0x38;
      bVar1 = lVar6 < *(int *)(param_2 + 0x28);
      lVar6 = lVar6 + 1;
    } while (bVar1);
  }
  if ((*(byte *)(param_2 + 0x10) >> 2 & 1) == 0) {
    param_4[3] = 0;
  }
  else {
    lVar7 = *(long *)(param_2 + 0x38);
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)PTR_DAT_02716e50 + 0x38);
    }
    FUN_007fdec0(param_1,param_4[1],param_4[1],lVar7,param_4);
  }
  FUN_007f02f0(param_1,param_4[1],0,*param_4,param_2,6,param_4);
  return;
}


