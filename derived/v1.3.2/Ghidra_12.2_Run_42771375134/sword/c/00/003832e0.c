/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003832e0; name: FUN_003832e0
 */


void FUN_003832e0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  byte bVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 uStack_5f;
  undefined6 uStack_5e;
  undefined8 *local_58;
  undefined8 local_50;
  undefined1 local_48;
  byte bStack_47;
  undefined6 uStack_46;
  int local_34;
  
  local_34 = 0x1b5;
  piVar2 = &local_34;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar2 = (int *)param_1[0xb];
  }
  if ((int *)param_1[0xc] == (int *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)param_1[0xc];
  }
  lVar4 = *param_1;
  uVar11 = *param_2;
  puVar5 = (uint *)(lVar4 + 0x10);
  uVar6 = *puVar5;
  if (uVar6 != 0) {
    lVar7 = *(long *)(lVar4 + 8);
    uVar8 = (ulong)(uVar6 - 1);
    pbVar9 = (byte *)(lVar7 + uVar8 * 0x10 + 8);
    if (*pbVar9 == 0) {
      bVar3 = 0;
      if ((char)param_1[9] != '\0') {
        bVar3 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar7 + uVar8 * 0x10));
        bVar3 = bVar3 & 1;
        lVar4 = *param_1;
        *(byte *)(param_1 + 9) = bVar3;
        lVar7 = *(long *)(lVar4 + 8);
        puVar5 = (uint *)(lVar4 + 0x10);
        uVar6 = *puVar5;
        uVar8 = (ulong)(uVar6 - 1);
        pbVar9 = (byte *)(lVar7 + uVar8 * 0x10 + 8);
      }
      *(byte *)(lVar7 + uVar8 * 0x10 + 9) = bVar3;
      *pbVar9 = bVar3;
    }
  }
  uStack_5f = (undefined1)param_1[9];
  local_60 = 0;
  local_68 = uVar11;
  if (uVar6 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)uVar6 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_5e,uStack_5f) << 8;
    *puVar1 = uVar11;
    *puVar5 = *puVar5 + 1;
  }
  else {
    FUN_00321500(lVar4,&local_68);
  }
  lVar4 = *param_1;
  uVar11 = param_2[2];
  puVar5 = (uint *)(lVar4 + 0x10);
  uVar6 = *puVar5;
  if (uVar6 != 0) {
    lVar7 = *(long *)(lVar4 + 8);
    uVar8 = (ulong)(uVar6 - 1);
    pbVar9 = (byte *)(lVar7 + uVar8 * 0x10 + 8);
    if (*pbVar9 == 0) {
      bVar3 = 0;
      if ((char)param_1[9] != '\0') {
        bVar3 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar7 + uVar8 * 0x10));
        bVar3 = bVar3 & 1;
        lVar4 = *param_1;
        *(byte *)(param_1 + 9) = bVar3;
        lVar7 = *(long *)(lVar4 + 8);
        puVar5 = (uint *)(lVar4 + 0x10);
        uVar6 = *puVar5;
        uVar8 = (ulong)(uVar6 - 1);
        pbVar9 = (byte *)(lVar7 + uVar8 * 0x10 + 8);
      }
      *(byte *)(lVar7 + uVar8 * 0x10 + 9) = bVar3;
      *pbVar9 = bVar3;
    }
  }
  uStack_5f = (undefined1)param_1[9];
  local_60 = 0;
  local_68 = uVar11;
  if (uVar6 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)uVar6 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_5e,uStack_5f) << 8;
    *puVar1 = uVar11;
    *puVar5 = *puVar5 + 1;
  }
  else {
    FUN_00321500(lVar4,&local_68);
  }
  local_60 = 1;
  local_68 = CONCAT71(local_68._1_7_,1);
  local_68 = CONCAT44(iVar10,(undefined4)local_68);
  local_58 = param_2;
  FUN_00383770(param_1,*piVar2,&local_68);
  *piVar2 = *piVar2 + 1;
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
    bStack_47 = 1;
  }
  else {
    uVar6 = *(int *)(lVar4 + 0x10) - 1;
    if ((*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar6 * 0x10 + 8) != '\0') &&
       (*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar6 * 0x10 + 9) != '\0')) {
      (**(code **)(*(long *)param_1[5] + 0x50))();
      lVar4 = *param_1;
      uVar6 = *(int *)(lVar4 + 0x10) - 1;
    }
    *(uint *)(lVar4 + 0x10) = uVar6;
    *(undefined1 *)(param_1 + 9) = 1;
    bStack_47 = 1;
    if (uVar6 != 0) {
      if (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar6 - 1) * 0x10 + 9) == '\0') {
        *(undefined1 *)(param_1 + 9) = 0;
        bStack_47 = 0;
      }
      else {
        bStack_47 = 1;
      }
    }
  }
  uVar11 = param_2[3];
  puVar5 = (uint *)(lVar4 + 0x10);
  uVar6 = *puVar5;
  if (uVar6 != 0) {
    lVar7 = *(long *)(lVar4 + 8);
    uVar8 = (ulong)(uVar6 - 1);
    pbVar9 = (byte *)(lVar7 + uVar8 * 0x10 + 8);
    if (*pbVar9 == 0) {
      if (bStack_47 != 0) {
        bStack_47 = (**(code **)(*(long *)param_1[5] + 0x20))
                              ((long *)param_1[5],*(undefined8 *)(lVar7 + uVar8 * 0x10));
        bStack_47 = bStack_47 & 1;
        lVar4 = *param_1;
        *(byte *)(param_1 + 9) = bStack_47;
        lVar7 = *(long *)(lVar4 + 8);
        puVar5 = (uint *)(lVar4 + 0x10);
        uVar6 = *puVar5;
        uVar8 = (ulong)(uVar6 - 1);
        pbVar9 = (byte *)(lVar7 + uVar8 * 0x10 + 8);
      }
      *(byte *)(lVar7 + uVar8 * 0x10 + 9) = bStack_47;
      *pbVar9 = bStack_47;
    }
  }
  local_48 = 0;
  local_50 = uVar11;
  if (uVar6 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)uVar6 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_46,bStack_47) << 8;
    *puVar1 = uVar11;
    *puVar5 = *puVar5 + 1;
  }
  else {
    FUN_00321500(lVar4,&local_50);
  }
  local_60 = 0;
  local_68 = CONCAT44(iVar10 + 8,(undefined4)local_68);
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_00383770(param_1,*piVar2,&local_68);
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
    iVar10 = *(int *)(lVar4 + 0x10);
  }
  else {
    uVar6 = *(int *)(lVar4 + 0x10) - 1;
    if ((*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar6 * 0x10 + 8) != '\0') &&
       (*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar6 * 0x10 + 9) != '\0')) {
      (**(code **)(*(long *)param_1[5] + 0x50))();
      lVar4 = *param_1;
      uVar6 = *(int *)(lVar4 + 0x10) - 1;
    }
    *(uint *)(lVar4 + 0x10) = uVar6;
    *(undefined1 *)(param_1 + 9) = 1;
    if ((uVar6 == 0) || (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar6 - 1) * 0x10 + 9) != '\0')) {
      iVar10 = *(int *)(lVar4 + 0x10);
    }
    else {
      *(undefined1 *)(param_1 + 9) = 0;
      iVar10 = *(int *)(lVar4 + 0x10);
    }
  }
  if (iVar10 == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    uVar6 = iVar10 - 1;
    if ((*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar6 * 0x10 + 8) != '\0') &&
       (*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar6 * 0x10 + 9) != '\0')) {
      (**(code **)(*(long *)param_1[5] + 0x50))();
      lVar4 = *param_1;
      uVar6 = *(int *)(lVar4 + 0x10) - 1;
    }
    *(uint *)(lVar4 + 0x10) = uVar6;
    *(undefined1 *)(param_1 + 9) = 1;
    if ((uVar6 != 0) && (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar6 - 1) * 0x10 + 9) == '\0')) {
      *(undefined1 *)(param_1 + 9) = 0;
    }
  }
  return;
}


