/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00684970; name: FUN_00684970
 */


undefined8 FUN_00684970(long param_1,long *param_2,long param_3,long *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  
  lVar5 = (**(code **)(*param_2 + 0xe0))(param_2,1);
  lVar6 = (**(code **)(*param_2 + 0xe0))(param_2,1);
  lVar7 = (**(code **)(*param_2 + 0xe0))(param_2,1);
  uVar8 = (**(code **)(*param_2 + 0xe0))(param_2,1);
  uVar9 = (**(code **)(*param_2 + 0xe0))(param_2,1);
  lVar10 = (**(code **)(*param_2 + 0xe0))(param_2,1);
  uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
  uVar3 = (**(code **)(*param_2 + 0xf8))(param_2,1);
  cVar1 = (**(code **)(*param_2 + 0xe8))(param_2,1);
  (**(code **)(*param_2 + 0xe8))(param_2,1);
  (**(code **)(*param_2 + 0xe8))(param_2,1);
  (**(code **)(*param_2 + 0xe8))(param_2,1);
  (**(code **)(*param_2 + 0x128))(param_2,param_4 + 5,1);
  *(bool *)((long)param_4 + 0x8c) = cVar1 != '\0';
  param_4[0x18] = lVar7;
  lVar7 = *(long *)(param_3 + 0x28);
  param_4[0x14] = lVar10;
  *(undefined4 *)(param_4 + 0x16) = uVar2;
  *(undefined4 *)(param_4 + 0x11) = uVar3;
  param_4[0x12] = lVar7 + lVar5;
  param_4[0x13] = lVar6;
  lVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x50))();
  param_4[0x15] = lVar5 + param_4[0x12];
  *(long **)(*(long *)(param_1 + 0x170) + param_4[0x18] * 8) = param_4;
  uVar11 = (**(code **)(*param_4 + 0x58))(param_4);
  if ((uVar11 & 1) == 0) {
    return 1;
  }
  if (param_4[0x25] == uVar8) {
LAB_00684b78:
    uVar8 = param_4[0x1b];
  }
  else {
    if ((uVar8 < (ulong)param_4[0x26]) ||
       (uVar11 = FUN_006870f0(param_4 + 0x23,uVar8,1), (uVar11 & 1) != 0)) {
      param_4[0x25] = uVar8;
      if (uVar8 != 0) {
        param_4[0x29] = param_4[0x28];
        param_4[0x2a] = param_4[0x28] + uVar8 * 8;
        goto LAB_00684b78;
      }
    }
    else {
      param_4[0x25] = 0;
    }
    param_4[0x29] = 0;
    param_4[0x2a] = 0;
    uVar8 = param_4[0x1b];
  }
  if (uVar8 != uVar9) {
    if ((uVar9 < (ulong)param_4[0x1c]) ||
       (uVar8 = FUN_006870f0(param_4 + 0x19,uVar9,1), (uVar8 & 1) != 0)) {
      param_4[0x1b] = uVar9;
      if (uVar9 != 0) {
        param_4[0x1f] = param_4[0x1e];
        param_4[0x20] = param_4[0x1e] + uVar9 * 8;
        goto LAB_00684bdc;
      }
    }
    else {
      param_4[0x1b] = 0;
    }
    param_4[0x1f] = 0;
    param_4[0x20] = 0;
  }
LAB_00684bdc:
  lVar5 = (**(code **)(*param_4 + 0x78))(param_4);
  if (0 < lVar5) {
    lVar5 = 0;
    do {
      iVar4 = (**(code **)(*param_2 + 0xd8))(param_2,1);
      plVar12 = (long *)(*(long *)(param_1 + 0x120) + (long)iVar4 * 0x170);
      plVar12[4] = (long)param_4;
      *(long **)(param_4[0x28] + lVar5 * 8) = plVar12;
      (**(code **)(*plVar12 + 0x10))();
      lVar5 = lVar5 + 1;
      lVar6 = (**(code **)(*param_4 + 0x78))(param_4);
    } while (lVar5 < lVar6);
  }
  lVar5 = (**(code **)(*param_4 + 0x60))(param_4);
  if (0 < lVar5) {
    lVar5 = 0;
    do {
      iVar4 = (**(code **)(*param_2 + 0xd8))(param_2,1);
      plVar12 = (long *)(*(long *)(param_1 + 0x120) + (long)iVar4 * 0x170);
      plVar12[4] = (long)param_4;
      *(long **)(param_4[0x1e] + lVar5 * 8) = plVar12;
      (**(code **)(*plVar12 + 0x10))();
      lVar5 = lVar5 + 1;
      lVar6 = (**(code **)(*param_4 + 0x60))(param_4);
    } while (lVar5 < lVar6);
  }
  return 1;
}


