/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00325190; name: FUN_00325190
 */


void FUN_00325190(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 local_50;
  long lStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = *param_1;
  pcVar10 = (code *)param_2[3];
  uVar11 = *param_2;
  puVar4 = (uint *)(lVar3 + 0x10);
  uVar6 = *puVar4;
  if (uVar6 != 0) {
    lVar7 = *(long *)(lVar3 + 8);
    uVar8 = (ulong)(uVar6 - 1);
    pbVar9 = (byte *)(lVar7 + uVar8 * 0x10 + 8);
    if (*pbVar9 == 0) {
      bVar2 = 0;
      if ((char)param_1[9] != '\0') {
        bVar2 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar7 + uVar8 * 0x10));
        bVar2 = bVar2 & 1;
        lVar3 = *param_1;
        *(byte *)(param_1 + 9) = bVar2;
        lVar7 = *(long *)(lVar3 + 8);
        puVar4 = (uint *)(lVar3 + 0x10);
        uVar6 = *puVar4;
        uVar8 = (ulong)(uVar6 - 1);
        pbVar9 = (byte *)(lVar7 + uVar8 * 0x10 + 8);
      }
      *(byte *)(lVar7 + uVar8 * 0x10 + 9) = bVar2;
      *pbVar9 = bVar2;
    }
  }
  local_38 = (ulong)CONCAT61((int6)((ulong)local_38 >> 0x10),(char)param_1[9]) << 8;
  local_40 = uVar11;
  if (uVar6 < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 8) + (ulong)uVar6 * 0x10);
    puVar1[1] = local_38;
    *puVar1 = uVar11;
    *puVar4 = *puVar4 + 1;
    piVar5 = (int *)param_1[0xb];
  }
  else {
    FUN_00321500(lVar3,&local_40);
    piVar5 = (int *)param_1[0xb];
  }
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  local_50 = 0;
  lStack_48 = 0;
  uVar8 = FUN_00326370(param_1,&local_50);
  if ((uVar8 & 1) != 0) {
    local_40 = local_50;
    local_38 = lStack_48;
    (*pcVar10)(param_1[6],&local_40);
  }
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    uVar6 = *(int *)(lVar3 + 0x10) - 1;
    if ((*(char *)(*(long *)(lVar3 + 8) + (ulong)uVar6 * 0x10 + 8) != '\0') &&
       (*(char *)(*(long *)(lVar3 + 8) + (ulong)uVar6 * 0x10 + 9) != '\0')) {
      (**(code **)(*(long *)param_1[5] + 0x50))();
      lVar3 = *param_1;
      uVar6 = *(int *)(lVar3 + 0x10) - 1;
    }
    *(uint *)(lVar3 + 0x10) = uVar6;
    *(undefined1 *)(param_1 + 9) = 1;
    if ((uVar6 != 0) && (*(char *)(*(long *)(lVar3 + 8) + (ulong)(uVar6 - 1) * 0x10 + 9) == '\0')) {
      *(undefined1 *)(param_1 + 9) = 0;
    }
  }
  return;
}


