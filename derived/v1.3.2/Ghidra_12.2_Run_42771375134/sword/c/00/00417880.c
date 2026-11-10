/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00417880; name: FUN_00417880
 */


undefined8 FUN_00417880(undefined8 param_1,long *param_2,int param_3,long *param_4,char *param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  
  puVar4 = PTR_DAT_02712a90;
  uVar2 = *(uint *)(param_4 + 1);
  uVar11 = *(uint *)((long)param_4 + 0xc);
  if (uVar2 < uVar11) goto LAB_00417940;
  uVar11 = uVar11 + 8;
  puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar11 << 3);
  if (puVar6 == (undefined8 *)0x0) {
    return 2;
  }
  puVar9 = (undefined8 *)*param_4;
  if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar6)) {
    uVar3 = *(uint *)(param_4 + 1);
    if (uVar3 != 0) {
      *puVar6 = *puVar9;
      if (uVar3 != 1) {
        if (uVar3 == 2) {
          lVar10 = 1;
        }
        else {
          lVar5 = 0;
          do {
            lVar10 = lVar5;
            puVar6[lVar10 + 1] = *(undefined8 *)(*param_4 + lVar10 * 8 + 8);
            puVar6[lVar10 + 2] = *(undefined8 *)(*param_4 + lVar10 * 8 + 0x10);
            lVar5 = lVar10 + 2;
          } while (((ulong)uVar3 - 1) - (ulong)(~uVar3 & 1) != lVar10 + 2);
          lVar10 = lVar10 + 3;
          if ((~uVar3 & 1) == 0) goto LAB_0041792c;
        }
        puVar6[lVar10] = *(undefined8 *)(*param_4 + lVar10 * 8);
      }
LAB_0041792c:
      puVar9 = (undefined8 *)*param_4;
    }
    FUN_00404870(*(undefined4 *)puVar4,puVar9);
  }
  *param_4 = (long)puVar6;
  *(uint *)((long)param_4 + 0xc) = uVar11;
LAB_00417940:
  if (uVar11 <= uVar2) {
    return 2;
  }
  plVar1 = (long *)(*param_4 + (ulong)*(uint *)(param_4 + 1) * 8);
  *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) + 1;
  if (plVar1 == (long *)0x0) {
    return 2;
  }
  *plVar1 = (long)param_2;
  if ((int)param_2[2] == param_3) {
    *param_5 = '\x01';
    return 1;
  }
  uVar7 = (**(code **)(*param_2 + 0x10))(param_2);
  if ((uVar7 & 1) == 0) {
    if (*param_5 != '\0') {
      return 1;
    }
    if ((int)param_2[5] != 0) {
      puVar6 = (undefined8 *)param_2[4];
      do {
        uVar8 = FUN_00417880(param_1,*puVar6,param_3,param_4,param_5);
        if ((int)uVar8 != 1) {
          return uVar8;
        }
        if (*param_5 != '\0') {
          return 1;
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 != (undefined8 *)(param_2[4] + (ulong)*(uint *)(param_2 + 5) * 8));
    }
  }
  else if (*param_5 != '\0') {
    return 1;
  }
  *(int *)(param_4 + 1) = (int)param_4[1] + -1;
  return 1;
}


