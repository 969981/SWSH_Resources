/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0035cae0; name: FUN_0035cae0
 */


void FUN_0035cae0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 local_48;
  undefined1 local_40;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  byte local_38 [8];
  
  lVar4 = *param_1;
  iVar2 = *(int *)(param_2 + 1);
  pcVar11 = (code *)param_2[3];
  uVar12 = *param_2;
  puVar5 = (uint *)(lVar4 + 0x10);
  uVar7 = *puVar5;
  if (uVar7 != 0) {
    lVar8 = *(long *)(lVar4 + 8);
    uVar9 = (ulong)(uVar7 - 1);
    pbVar10 = (byte *)(lVar8 + uVar9 * 0x10 + 8);
    if (*pbVar10 == 0) {
      bVar3 = 0;
      if ((char)param_1[9] != '\0') {
        bVar3 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar8 + uVar9 * 0x10));
        bVar3 = bVar3 & 1;
        lVar4 = *param_1;
        *(byte *)(param_1 + 9) = bVar3;
        lVar8 = *(long *)(lVar4 + 8);
        puVar5 = (uint *)(lVar4 + 0x10);
        uVar7 = *puVar5;
        uVar9 = (ulong)(uVar7 - 1);
        pbVar10 = (byte *)(lVar8 + uVar9 * 0x10 + 8);
      }
      *(byte *)(lVar8 + uVar9 * 0x10 + 9) = bVar3;
      *pbVar10 = bVar3;
    }
  }
  uStack_3f = (undefined1)param_1[9];
  local_40 = 0;
  local_48 = uVar12;
  if (uVar7 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)uVar7 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_3e,uStack_3f) << 8;
    *puVar1 = uVar12;
    *puVar5 = *puVar5 + 1;
    piVar6 = (int *)param_1[0xb];
  }
  else {
    FUN_00321500(lVar4,&local_48);
    piVar6 = (int *)param_1[0xb];
  }
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + 1;
  }
  uVar9 = FUN_0035db80(param_1,&local_48);
  if (((uVar9 & 1) == 0) ||
     (((**(code **)(*(long *)param_1[6] + 0x180))(local_38), iVar2 - 0x2bU < 2 &&
      ((local_38[0] & 1) != 0)))) {
    lVar4 = *param_1;
    iVar2 = *(int *)(lVar4 + 0x10);
  }
  else {
    (*pcVar11)((undefined4)local_48,param_1[6]);
    lVar4 = *param_1;
    iVar2 = *(int *)(lVar4 + 0x10);
  }
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    uVar7 = iVar2 - 1;
    if ((*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar7 * 0x10 + 8) != '\0') &&
       (*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar7 * 0x10 + 9) != '\0')) {
      (**(code **)(*(long *)param_1[5] + 0x50))();
      lVar4 = *param_1;
      uVar7 = *(int *)(lVar4 + 0x10) - 1;
    }
    *(uint *)(lVar4 + 0x10) = uVar7;
    *(undefined1 *)(param_1 + 9) = 1;
    if ((uVar7 != 0) && (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar7 - 1) * 0x10 + 9) == '\0')) {
      *(undefined1 *)(param_1 + 9) = 0;
    }
  }
  return;
}


