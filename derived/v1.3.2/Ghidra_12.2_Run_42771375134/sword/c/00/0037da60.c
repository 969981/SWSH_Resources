/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0037da60; name: FUN_0037da60
 */


void FUN_0037da60(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint *puVar7;
  code *pcVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  char *pcVar12;
  int local_74;
  long local_70;
  undefined1 local_68;
  uint7 uStack_67;
  
  lVar4 = *param_1;
  lVar10 = *param_3;
  puVar7 = (uint *)(lVar4 + 0x10);
  uVar9 = *puVar7;
  if (uVar9 != 0) {
    if (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar9 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(lVar4 + 8) + (ulong)(uVar9 - 1) * 0x10));
      lVar4 = *param_1;
      puVar7 = (uint *)(lVar4 + 0x10);
      uVar9 = *puVar7;
      *(undefined1 *)(*(long *)(lVar4 + 8) + (ulong)(uVar9 - 1) * 0x10 + 8) = 1;
    }
  }
  local_68 = 0;
  local_70 = lVar10;
  if (uVar9 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    plVar11 = (long *)(*(long *)(lVar4 + 8) + (ulong)uVar9 * 0x10);
    plVar11[1] = (ulong)uStack_67 << 8;
    *plVar11 = lVar10;
    *puVar7 = *puVar7 + 1;
  }
  else {
    FUN_00327960(lVar4,&local_70);
  }
  local_74 = 0x1c6;
  lVar4 = *param_1;
  lVar10 = *param_4;
  puVar7 = (uint *)(lVar4 + 0x10);
  uVar9 = *puVar7;
  piVar1 = &local_74;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar1 = (int *)param_1[5];
  }
  bVar2 = uVar9 == 0;
  if (lVar10 != 0) {
    do {
      if (bVar2) {
        uVar9 = 0;
      }
      else if (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar9 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x20))
                  ((long *)param_1[1],
                   *(undefined8 *)(*(long *)(lVar4 + 8) + (ulong)(uVar9 - 1) * 0x10));
        lVar4 = *param_1;
        puVar7 = (uint *)(lVar4 + 0x10);
        uVar9 = *puVar7;
        *(undefined1 *)(*(long *)(lVar4 + 8) + (ulong)(uVar9 - 1) * 0x10 + 8) = 1;
      }
      local_68 = 0;
      local_70 = lVar10;
      if (uVar9 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
        plVar11 = (long *)(*(long *)(lVar4 + 8) + (ulong)uVar9 * 0x10);
        plVar11[1] = (ulong)uStack_67 << 8;
        *plVar11 = lVar10;
        *puVar7 = *puVar7 + 1;
        lVar4 = *param_1;
        plVar11 = (long *)param_1[1];
        uVar5 = (undefined4)param_4[1];
        iVar3 = *(int *)(lVar4 + 0x10);
        if (iVar3 != 0) goto LAB_0037dc30;
LAB_0037dc5c:
        pcVar12 = "bad__repx__name";
      }
      else {
        FUN_00327960(lVar4,&local_70);
        lVar4 = *param_1;
        plVar11 = (long *)param_1[1];
        uVar5 = (undefined4)param_4[1];
        iVar3 = *(int *)(lVar4 + 0x10);
        if (iVar3 == 0) goto LAB_0037dc5c;
LAB_0037dc30:
        pcVar12 = *(char **)(*(long *)(lVar4 + 8) + (ulong)(iVar3 - 1) * 0x10);
      }
      iVar3 = (*(code *)param_3[3])(param_1[2],uVar5);
      if (iVar3 == 2) {
        pcVar8 = *(code **)(*plVar11 + 0x10);
        pcVar6 = "eFREE";
LAB_0037dcc4:
        (*pcVar8)(plVar11,pcVar12,pcVar6);
      }
      else {
        if (iVar3 == 1) {
          pcVar8 = *(code **)(*plVar11 + 0x10);
          pcVar6 = "eLIMITED";
          goto LAB_0037dcc4;
        }
        if (iVar3 == 0) {
          pcVar8 = *(code **)(*plVar11 + 0x10);
          pcVar6 = "eLOCKED";
          goto LAB_0037dcc4;
        }
      }
      lVar4 = *param_1;
      puVar7 = (uint *)(lVar4 + 0x10);
      if (*puVar7 != 0) {
        uVar9 = *puVar7 - 1;
        if (*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar9 * 0x10 + 8) != '\0') {
          (**(code **)(*(long *)param_1[1] + 0x28))();
          lVar4 = *param_1;
          puVar7 = (uint *)(lVar4 + 0x10);
          uVar9 = *puVar7 - 1;
        }
        *(uint *)(lVar4 + 0x10) = uVar9;
      }
      *piVar1 = *piVar1 + 1;
      lVar10 = param_4[2];
      uVar9 = *puVar7;
      bVar2 = uVar9 == 0;
      param_4 = param_4 + 2;
    } while (lVar10 != 0);
  }
  if (!bVar2) {
    uVar9 = uVar9 - 1;
    if (*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar9 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_1[1] + 0x28))();
      puVar7 = (uint *)(*param_1 + 0x10);
      uVar9 = *puVar7 - 1;
    }
    *puVar7 = uVar9;
  }
  return;
}


