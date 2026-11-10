/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003672a0; name: FUN_003672a0
 */


void FUN_003672a0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  code *pcVar12;
  char *pcVar13;
  char *local_40;
  undefined1 local_38;
  undefined1 uStack_37;
  undefined6 uStack_36;
  
  lVar4 = *param_1;
  pcVar12 = (code *)param_2[3];
  pcVar13 = (char *)*param_2;
  puVar6 = (uint *)(lVar4 + 0x10);
  uVar8 = *puVar6;
  if (uVar8 != 0) {
    lVar9 = *(long *)(lVar4 + 8);
    uVar10 = (ulong)(uVar8 - 1);
    pbVar11 = (byte *)(lVar9 + uVar10 * 0x10 + 8);
    if (*pbVar11 == 0) {
      bVar2 = 0;
      if ((char)param_1[9] != '\0') {
        bVar2 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar9 + uVar10 * 0x10));
        bVar2 = bVar2 & 1;
        lVar4 = *param_1;
        *(byte *)(param_1 + 9) = bVar2;
        lVar9 = *(long *)(lVar4 + 8);
        puVar6 = (uint *)(lVar4 + 0x10);
        uVar8 = *puVar6;
        uVar10 = (ulong)(uVar8 - 1);
        pbVar11 = (byte *)(lVar9 + uVar10 * 0x10 + 8);
      }
      *(byte *)(lVar9 + uVar10 * 0x10 + 9) = bVar2;
      *pbVar11 = bVar2;
    }
  }
  uStack_37 = (undefined1)param_1[9];
  local_38 = 0;
  if (uVar8 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)uVar8 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_36,uStack_37) << 8;
    *puVar1 = pcVar13;
    *puVar6 = *puVar6 + 1;
    piVar7 = (int *)param_1[0xb];
  }
  else {
    local_40 = pcVar13;
    FUN_00321500(lVar4,&local_40);
    piVar7 = (int *)param_1[0xb];
  }
  if (piVar7 != (int *)0x0) {
    *piVar7 = *piVar7 + 1;
  }
  local_40 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar5 = (long *)param_1[5];
    iVar3 = *(int *)(*param_1 + 0x10);
    if (iVar3 == 0) {
      uVar10 = (**(code **)(*plVar5 + 0x10))(plVar5,"bad__repx__name",&local_40);
    }
    else {
      uVar10 = (**(code **)(*plVar5 + 0x10))
                         (plVar5,*(undefined8 *)
                                  (*(long *)(*param_1 + 8) + (ulong)(iVar3 - 1) * 0x10),&local_40);
    }
    if ((((uVar10 & 1) != 0) && (local_40 != (char *)0x0)) && (*local_40 != '\0')) {
      iVar3 = strcasecmp(local_40,"true");
      (*pcVar12)(param_1[6],iVar3 == 0);
      lVar4 = *param_1;
      iVar3 = *(int *)(lVar4 + 0x10);
      goto joined_r0x00367438;
    }
  }
  lVar4 = *param_1;
  iVar3 = *(int *)(lVar4 + 0x10);
joined_r0x00367438:
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    uVar8 = iVar3 - 1;
    if ((*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar8 * 0x10 + 8) != '\0') &&
       (*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar8 * 0x10 + 9) != '\0')) {
      (**(code **)(*(long *)param_1[5] + 0x50))();
      lVar4 = *param_1;
      uVar8 = *(int *)(lVar4 + 0x10) - 1;
    }
    *(uint *)(lVar4 + 0x10) = uVar8;
    *(undefined1 *)(param_1 + 9) = 1;
    if ((uVar8 != 0) && (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar8 - 1) * 0x10 + 9) == '\0')) {
      *(undefined1 *)(param_1 + 9) = 0;
    }
  }
  return;
}


