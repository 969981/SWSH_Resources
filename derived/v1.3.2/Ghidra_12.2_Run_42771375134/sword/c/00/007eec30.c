/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007eec30; name: FUN_007eec30
 */


void FUN_007eec30(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = param_3;
  if (param_3 == 0) {
    lVar8 = *(long *)(param_1 + 0x50);
  }
  pbVar3 = (byte *)FUN_007e1d20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar8 + 8));
  if ((*pbVar3 & 1) == 0) {
    if (*pbVar3 >> 1 == 0) goto LAB_007eeca4;
  }
  else if (*(long *)(pbVar3 + 8) == 0) goto LAB_007eeca4;
  std::string::append((ulong)pbVar3,'\x01');
LAB_007eeca4:
  pbVar6 = *(byte **)(param_2 + 0x18);
  pbVar2 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbVar2 = pbVar6 + 1;
  }
  std::string::append((char *)pbVar3,(ulong)pbVar2);
  FUN_007ebbc0(param_1,*(undefined8 *)(param_2 + 0x18),pbVar3,param_2);
  uVar4 = FUN_007e1d20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x18));
  *param_4 = uVar4;
  param_4[1] = pbVar3;
  param_4[2] = *(undefined8 *)(param_1 + 0x50);
  param_4[3] = param_3;
  *(undefined2 *)(param_4 + 5) = 0;
  iVar5 = *(int *)(param_2 + 0x28);
  if (iVar5 == 0) {
    FUN_007eac10(param_1,pbVar3,param_2,0,"Enums must contain at least one value.");
    iVar5 = *(int *)(param_2 + 0x28);
  }
  *(int *)((long)param_4 + 0x2c) = iVar5;
  uVar4 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x28) * 0x28);
  param_4[6] = uVar4;
  if ((0 < *(int *)(param_2 + 0x28)) &&
     (FUN_007f16d0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x30) + 8),param_4,uVar4),
     1 < *(int *)(param_2 + 0x28))) {
    lVar8 = 0x28;
    lVar7 = 2;
    do {
      FUN_007f16d0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x30) + lVar7 * 8),param_4,
                   param_4[6] + lVar8);
      lVar8 = lVar8 + 0x28;
      bVar1 = lVar7 < *(int *)(param_2 + 0x28);
      lVar7 = lVar7 + 1;
    } while (bVar1);
  }
  if ((*(byte *)(param_2 + 0x10) >> 2 & 1) == 0) {
    param_4[4] = 0;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x38);
    if (lVar8 == 0) {
      lVar8 = *(long *)(*(long *)PTR_DAT_02716e48 + 0x38);
    }
    FUN_007fd640(param_1,param_4[1],param_4[1],lVar8,param_4);
  }
  FUN_007f02f0(param_1,param_4[1],param_3,*param_4,param_2,4,param_4);
  return;
}


