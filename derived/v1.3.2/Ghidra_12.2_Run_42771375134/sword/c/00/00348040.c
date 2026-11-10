/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00348040; name: FUN_00348040
 */


void FUN_00348040(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined1 local_58 [4];
  int local_54;
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
  uVar8 = *puVar6;
  if (uVar8 != 0) {
    lVar9 = *(long *)(lVar4 + 8);
    uVar10 = (ulong)(uVar8 - 1);
    pbVar11 = (byte *)(lVar9 + uVar10 * 0x10 + 8);
    if (*pbVar11 == 0) {
      bVar3 = 0;
      if ((char)param_1[9] != '\0') {
        bVar3 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar9 + uVar10 * 0x10));
        bVar3 = bVar3 & 1;
        lVar4 = *param_1;
        *(byte *)(param_1 + 9) = bVar3;
        lVar9 = *(long *)(lVar4 + 8);
        puVar6 = (uint *)(lVar4 + 0x10);
        uVar8 = *puVar6;
        uVar10 = (ulong)(uVar8 - 1);
        pbVar11 = (byte *)(lVar9 + uVar10 * 0x10 + 8);
      }
      *(byte *)(lVar9 + uVar10 * 0x10 + 9) = bVar3;
      *pbVar11 = bVar3;
    }
  }
  uStack_27 = (undefined1)param_1[9];
  local_28 = 0;
  local_30 = uVar2;
  if (uVar8 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)uVar8 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_26,uStack_27) << 8;
    *puVar1 = uVar2;
    *puVar6 = *puVar6 + 1;
    piVar7 = (int *)param_1[0xc];
  }
  else {
    FUN_00321500(lVar4,&local_30);
    piVar7 = (int *)param_1[0xc];
  }
  if (piVar7 == (int *)0x0) {
    local_54 = 0x48;
  }
  else {
    local_54 = *piVar7 + 0x48;
  }
  local_58[0] = 1;
  piVar7 = (int *)param_1[0xb];
  if (piVar7 == (int *)0x0) {
    iVar5 = 0xbd;
  }
  else {
    iVar5 = *piVar7;
    *piVar7 = iVar5 + 1;
  }
  FUN_00348d40(param_1,iVar5,local_58);
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
    return;
  }
  uVar8 = *(int *)(lVar4 + 0x10) - 1;
  if ((*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar8 * 0x10 + 8) != '\0') &&
     (*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar8 * 0x10 + 9) != '\0')) {
    (**(code **)(*(long *)param_1[5] + 0x50))();
    lVar4 = *param_1;
    uVar8 = *(int *)(lVar4 + 0x10) - 1;
  }
  *(uint *)(lVar4 + 0x10) = uVar8;
  *(undefined1 *)(param_1 + 9) = 1;
  if ((uVar8 == 0) || (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar8 - 1) * 0x10 + 9) != '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


