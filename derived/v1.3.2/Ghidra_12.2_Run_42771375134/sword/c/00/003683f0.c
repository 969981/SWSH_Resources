/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003683f0; name: FUN_003683f0
 */


void FUN_003683f0(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  int local_54;
  ulong local_50;
  undefined1 local_48;
  byte bStack_47;
  undefined6 uStack_46;
  undefined4 local_38;
  undefined4 local_34;
  
  local_54 = 0x56;
  lVar6 = *param_1;
  uVar12 = *param_2;
  piVar2 = &local_54;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar2 = (int *)param_1[0xb];
  }
  puVar7 = (uint *)(lVar6 + 0x10);
  uVar8 = *puVar7;
  if (uVar8 != 0) {
    lVar9 = *(long *)(lVar6 + 8);
    uVar10 = (ulong)(uVar8 - 1);
    pbVar11 = (byte *)(lVar9 + uVar10 * 0x10 + 8);
    if (*pbVar11 == 0) {
      bVar5 = 0;
      if ((char)param_1[9] != '\0') {
        bVar5 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar9 + uVar10 * 0x10));
        bVar5 = bVar5 & 1;
        lVar6 = *param_1;
        *(byte *)(param_1 + 9) = bVar5;
        lVar9 = *(long *)(lVar6 + 8);
        puVar7 = (uint *)(lVar6 + 0x10);
        uVar8 = *puVar7;
        uVar10 = (ulong)(uVar8 - 1);
        pbVar11 = (byte *)(lVar9 + uVar10 * 0x10 + 8);
      }
      *(byte *)(lVar9 + uVar10 * 0x10 + 9) = bVar5;
      *pbVar11 = bVar5;
    }
  }
  bStack_47 = (byte)param_1[9];
  local_48 = 0;
  local_50 = uVar12;
  if (uVar8 < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
    puVar1 = (ulong *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_46,bStack_47) << 8;
    *puVar1 = uVar12;
    *puVar7 = *puVar7 + 1;
  }
  else {
    FUN_00321500(lVar6,&local_50);
  }
  lVar6 = *param_1;
  uVar12 = param_2[2];
  puVar7 = (uint *)(lVar6 + 0x10);
  uVar8 = *puVar7;
  if (uVar8 != 0) {
    lVar9 = *(long *)(lVar6 + 8);
    uVar10 = (ulong)(uVar8 - 1);
    pbVar11 = (byte *)(lVar9 + uVar10 * 0x10 + 8);
    if (*pbVar11 == 0) {
      bVar5 = 0;
      if ((char)param_1[9] != '\0') {
        bVar5 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar9 + uVar10 * 0x10));
        bVar5 = bVar5 & 1;
        lVar6 = *param_1;
        *(byte *)(param_1 + 9) = bVar5;
        lVar9 = *(long *)(lVar6 + 8);
        puVar7 = (uint *)(lVar6 + 0x10);
        uVar8 = *puVar7;
        uVar10 = (ulong)(uVar8 - 1);
        pbVar11 = (byte *)(lVar9 + uVar10 * 0x10 + 8);
      }
      *(byte *)(lVar9 + uVar10 * 0x10 + 9) = bVar5;
      *pbVar11 = bVar5;
    }
  }
  bStack_47 = (byte)param_1[9];
  local_48 = 0;
  local_50 = uVar12;
  if (uVar8 < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
    puVar1 = (ulong *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_46,bStack_47) << 8;
    *puVar1 = uVar12;
    *puVar7 = *puVar7 + 1;
    uVar12 = FUN_00367de0(param_1,&local_38);
    uVar4 = local_38;
  }
  else {
    FUN_00321500(lVar6,&local_50);
    uVar12 = FUN_00367de0(param_1,&local_38);
    uVar4 = local_38;
  }
  local_38 = uVar4;
  if ((uVar12 & 1) != 0) {
    lVar6 = param_1[6];
    (*(code *)param_2[5])(lVar6,&local_50,&local_34);
    (*(code *)param_2[4])(uVar4,local_34,lVar6);
  }
  *piVar2 = *piVar2 + 1;
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    uVar8 = *(int *)(lVar6 + 0x10) - 1;
    if ((*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10 + 8) != '\0') &&
       (*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10 + 9) != '\0')) {
      (**(code **)(*(long *)param_1[5] + 0x50))();
      lVar6 = *param_1;
      uVar8 = *(int *)(lVar6 + 0x10) - 1;
    }
    *(uint *)(lVar6 + 0x10) = uVar8;
    *(undefined1 *)(param_1 + 9) = 1;
    if (uVar8 != 0) {
      if (*(char *)(*(long *)(lVar6 + 8) + (ulong)(uVar8 - 1) * 0x10 + 9) == '\0') {
        *(undefined1 *)(param_1 + 9) = 0;
        uVar12 = param_2[3];
        puVar7 = (uint *)(lVar6 + 0x10);
        uVar8 = *puVar7;
        bVar5 = 0;
      }
      else {
        bVar5 = 1;
        uVar12 = param_2[3];
        puVar7 = (uint *)(lVar6 + 0x10);
        uVar8 = *puVar7;
      }
      goto joined_r0x003686ac;
    }
  }
  bVar5 = 1;
  uVar12 = param_2[3];
  puVar7 = (uint *)(lVar6 + 0x10);
  uVar8 = *puVar7;
joined_r0x003686ac:
  if (uVar8 != 0) {
    lVar9 = *(long *)(lVar6 + 8);
    uVar10 = (ulong)(uVar8 - 1);
    pbVar11 = (byte *)(lVar9 + uVar10 * 0x10 + 8);
    if (*pbVar11 == 0) {
      if (bVar5 != 0) {
        bVar5 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar9 + uVar10 * 0x10));
        bVar5 = bVar5 & 1;
        lVar6 = *param_1;
        *(byte *)(param_1 + 9) = bVar5;
        lVar9 = *(long *)(lVar6 + 8);
        puVar7 = (uint *)(lVar6 + 0x10);
        uVar8 = *puVar7;
        uVar10 = (ulong)(uVar8 - 1);
        pbVar11 = (byte *)(lVar9 + uVar10 * 0x10 + 8);
      }
      *(byte *)(lVar9 + uVar10 * 0x10 + 9) = bVar5;
      *pbVar11 = bVar5;
    }
  }
  bStack_47 = bVar5;
  local_48 = 0;
  local_50 = uVar12;
  if (uVar8 < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
    puVar1 = (ulong *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_46,bStack_47) << 8;
    *puVar1 = uVar12;
    *puVar7 = *puVar7 + 1;
    uVar12 = FUN_00367de0(param_1,&local_38);
    uVar4 = local_38;
  }
  else {
    FUN_00321500(lVar6,&local_50);
    uVar12 = FUN_00367de0(param_1,&local_38);
    uVar4 = local_38;
  }
  if ((uVar12 & 1) != 0) {
    lVar6 = param_1[6];
    (*(code *)param_2[5])(lVar6,&local_50,&local_34);
    (*(code *)param_2[4])(local_50 & 0xffffffff,uVar4,lVar6);
  }
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
    iVar3 = *(int *)(lVar6 + 0x10);
  }
  else {
    uVar8 = *(int *)(lVar6 + 0x10) - 1;
    if ((*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10 + 8) != '\0') &&
       (*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10 + 9) != '\0')) {
      (**(code **)(*(long *)param_1[5] + 0x50))();
      lVar6 = *param_1;
      uVar8 = *(int *)(lVar6 + 0x10) - 1;
    }
    *(uint *)(lVar6 + 0x10) = uVar8;
    *(undefined1 *)(param_1 + 9) = 1;
    if ((uVar8 == 0) || (*(char *)(*(long *)(lVar6 + 8) + (ulong)(uVar8 - 1) * 0x10 + 9) != '\0')) {
      iVar3 = *(int *)(lVar6 + 0x10);
    }
    else {
      *(undefined1 *)(param_1 + 9) = 0;
      iVar3 = *(int *)(lVar6 + 0x10);
    }
  }
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    uVar8 = iVar3 - 1;
    if ((*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10 + 8) != '\0') &&
       (*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10 + 9) != '\0')) {
      (**(code **)(*(long *)param_1[5] + 0x50))();
      lVar6 = *param_1;
      uVar8 = *(int *)(lVar6 + 0x10) - 1;
    }
    *(uint *)(lVar6 + 0x10) = uVar8;
    *(undefined1 *)(param_1 + 9) = 1;
    if ((uVar8 != 0) && (*(char *)(*(long *)(lVar6 + 8) + (ulong)(uVar8 - 1) * 0x10 + 9) == '\0')) {
      *(undefined1 *)(param_1 + 9) = 0;
    }
  }
  return;
}


