/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e85a0; name: FUN_009e85a0
 */


undefined4 FUN_009e85a0(long param_1,byte param_2,char param_3,char param_4)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  
  uVar10 = (ulong)param_2;
  if (*(int *)(param_1 + (ulong)param_2 * 4 + 0x124) == 1) {
    lVar1 = param_1 + uVar10 * 4;
    iVar2 = *(int *)(lVar1 + 0x134);
  }
  else {
    cVar6 = FUN_008fb3c0(*(undefined8 *)(param_1 + 0x68),0);
    iVar8 = 0;
    uVar7 = 5;
    if (param_3 != '\0') {
      bVar5 = cVar6 == param_4;
      if (bVar5) {
        iVar8 = *(int *)(param_1 + uVar10 * 4 + 0xd4);
        uVar7 = 0;
      }
      lVar1 = param_1 + uVar10 * 4;
      iVar2 = *(int *)(lVar1 + 0x134);
      goto joined_r0x009e8640;
    }
    lVar1 = param_1 + uVar10 * 4;
    iVar2 = *(int *)(lVar1 + 0x134);
  }
  bVar5 = false;
  uVar7 = 5;
  iVar8 = 0;
joined_r0x009e8640:
  if (((iVar2 == 1) || (cVar6 = FUN_008fb3c0(*(undefined8 *)(param_1 + 0x68),1), param_3 == '\x01'))
     || (cVar6 != param_4)) {
    iVar2 = *(int *)(lVar1 + 0x144);
  }
  else {
    bVar3 = bVar5 ^ 1;
    bVar5 = true;
    if ((bool)(iVar8 < *(int *)(lVar1 + 0xe4) | bVar3)) {
      uVar7 = 1;
      iVar8 = *(int *)(lVar1 + 0xe4);
    }
    iVar2 = *(int *)(lVar1 + 0x144);
  }
  iVar9 = iVar8;
  if (((iVar2 != 1) && (cVar6 = FUN_008fb3c0(*(undefined8 *)(param_1 + 0x68),2), param_3 != '\x02'))
     && (cVar6 == param_4)) {
    bVar3 = bVar5 ^ 1;
    bVar5 = true;
    iVar9 = *(int *)(lVar1 + 0xf4);
    uVar4 = 2;
    if (!(bool)(iVar8 < *(int *)(lVar1 + 0xf4) | bVar3)) {
      iVar9 = iVar8;
      uVar4 = uVar7;
    }
    uVar7 = uVar4;
  }
  iVar8 = iVar9;
  if (((*(int *)(lVar1 + 0x154) != 1) &&
      (cVar6 = FUN_008fb3c0(*(undefined8 *)(param_1 + 0x68),3), param_3 != '\x03')) &&
     (cVar6 == param_4)) {
    bVar3 = bVar5 ^ 1;
    bVar5 = true;
    iVar8 = *(int *)(lVar1 + 0x104);
    uVar4 = 3;
    if (!(bool)(iVar9 < *(int *)(lVar1 + 0x104) | bVar3)) {
      iVar8 = iVar9;
      uVar4 = uVar7;
    }
    uVar7 = uVar4;
  }
  if ((((*(int *)(lVar1 + 0x164) != 1) &&
       (cVar6 = FUN_008fb3c0(*(undefined8 *)(param_1 + 0x68),4), param_3 != '\x04')) &&
      (cVar6 == param_4)) && ((!bVar5 || (iVar8 < *(int *)(lVar1 + 0x114))))) {
    uVar7 = 4;
  }
  return uVar7;
}


