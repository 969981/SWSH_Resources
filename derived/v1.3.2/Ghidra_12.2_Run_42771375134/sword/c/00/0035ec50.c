/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0035ec50; name: FUN_0035ec50
 */


void FUN_0035ec50(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  long *plVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_58;
  undefined1 local_50;
  undefined1 uStack_4f;
  undefined6 uStack_4e;
  byte local_48 [8];
  byte local_38 [8];
  
  lVar3 = *param_1;
  uVar13 = param_2[1];
  pcVar11 = (code *)param_2[3];
  uVar12 = *param_2;
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
  uStack_4f = (undefined1)param_1[9];
  local_50 = 0;
  local_58 = uVar12;
  if (uVar6 < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar1 = (ulong *)(*(long *)(lVar3 + 8) + (ulong)uVar6 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_4e,uStack_4f) << 8;
    *puVar1 = uVar12;
    *puVar4 = *puVar4 + 1;
    piVar5 = (int *)param_1[0xb];
  }
  else {
    FUN_00321500(lVar3,&local_58);
    piVar5 = (int *)param_1[0xb];
  }
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  uVar12 = FUN_0035db80(param_1,&local_58);
  if (((uVar12 & 1) != 0) &&
     (((**(code **)(*(long *)param_1[6] + 0x180))(local_48), 1 < (int)uVar13 - 0x2bU ||
      ((local_48[0] & 1) == 0)))) {
    plVar10 = (long *)param_1[6];
    uVar13 = local_58 & 0xffffffff;
    (**(code **)(*plVar10 + 0x180))(local_38,plVar10);
    if ((local_38[0] & 1) == 0) {
      (*pcVar11)(uVar13,plVar10);
    }
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


