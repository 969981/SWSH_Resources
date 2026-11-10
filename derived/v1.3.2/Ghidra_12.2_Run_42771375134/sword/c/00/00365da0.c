/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00365da0; name: FUN_00365da0
 */


void FUN_00365da0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined6 uStack_26;
  
  local_58[0] = 0;
  local_54 = 0;
  local_38 = param_2[3];
  local_40 = param_2[2];
  uVar2 = *param_2;
  local_48 = param_2[1];
  local_50 = *param_2;
  lVar4 = *param_1;
  puVar6 = (uint *)(lVar4 + 0x10);
  uVar9 = *puVar6;
  if (uVar9 != 0) {
    lVar10 = *(long *)(lVar4 + 8);
    uVar11 = (ulong)(uVar9 - 1);
    pbVar12 = (byte *)(lVar10 + uVar11 * 0x10 + 8);
    if (*pbVar12 == 0) {
      bVar3 = 0;
      if ((char)param_1[9] != '\0') {
        bVar3 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar10 + uVar11 * 0x10));
        bVar3 = bVar3 & 1;
        lVar4 = *param_1;
        *(byte *)(param_1 + 9) = bVar3;
        lVar10 = *(long *)(lVar4 + 8);
        puVar6 = (uint *)(lVar4 + 0x10);
        uVar9 = *puVar6;
        uVar11 = (ulong)(uVar9 - 1);
        pbVar12 = (byte *)(lVar10 + uVar11 * 0x10 + 8);
      }
      *(byte *)(lVar10 + uVar11 * 0x10 + 9) = bVar3;
      *pbVar12 = bVar3;
    }
  }
  uStack_27 = (undefined1)param_1[9];
  local_28 = 0;
  local_30 = uVar2;
  if (uVar9 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)uVar9 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_26,uStack_27) << 8;
    *puVar1 = uVar2;
    *puVar6 = *puVar6 + 1;
    puVar7 = (undefined4 *)param_1[0xc];
    if (puVar7 == (undefined4 *)0x0) {
      local_54 = 0;
      goto LAB_00365eb4;
    }
  }
  else {
    FUN_00321500(lVar4,&local_30);
    puVar7 = (undefined4 *)param_1[0xc];
    local_54 = 0;
    if (puVar7 == (undefined4 *)0x0) goto LAB_00365eb4;
  }
  local_54 = *puVar7;
LAB_00365eb4:
  local_58[0] = 1;
  piVar8 = (int *)param_1[0xb];
  if (piVar8 == (int *)0x0) {
    iVar5 = 0x48;
  }
  else {
    iVar5 = *piVar8;
    *piVar8 = iVar5 + 1;
  }
  FUN_00367890(param_1,iVar5,local_58);
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
    return;
  }
  uVar9 = *(int *)(lVar4 + 0x10) - 1;
  if ((*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar9 * 0x10 + 8) != '\0') &&
     (*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar9 * 0x10 + 9) != '\0')) {
    (**(code **)(*(long *)param_1[5] + 0x50))();
    lVar4 = *param_1;
    uVar9 = *(int *)(lVar4 + 0x10) - 1;
  }
  *(uint *)(lVar4 + 0x10) = uVar9;
  *(undefined1 *)(param_1 + 9) = 1;
  if ((uVar9 == 0) || (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar9 - 1) * 0x10 + 9) != '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


