/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003341e0; name: FUN_003341e0
 */


void FUN_003341e0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  undefined8 uVar9;
  char *pcVar10;
  code *pcVar11;
  undefined8 local_40;
  undefined1 local_38;
  uint7 uStack_37;
  
  lVar4 = *param_1;
  pcVar11 = (code *)param_2[2];
  uVar9 = *param_2;
  puVar6 = (uint *)(lVar4 + 0x10);
  uVar8 = *puVar6;
  if (uVar8 != 0) {
    if (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar8 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(lVar4 + 8) + (ulong)(uVar8 - 1) * 0x10));
      lVar4 = *param_1;
      puVar6 = (uint *)(lVar4 + 0x10);
      uVar8 = *puVar6;
      *(undefined1 *)(*(long *)(lVar4 + 8) + (ulong)(uVar8 - 1) * 0x10 + 8) = 1;
    }
  }
  local_38 = 0;
  local_40 = uVar9;
  if (uVar8 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)uVar8 * 0x10);
    puVar1[1] = (ulong)uStack_37 << 8;
    *puVar1 = uVar9;
    *puVar6 = *puVar6 + 1;
    piVar7 = (int *)param_1[5];
  }
  else {
    FUN_00327960(lVar4,&local_40);
    piVar7 = (int *)param_1[5];
  }
  if (piVar7 != (int *)0x0) {
    *piVar7 = *piVar7 + 1;
  }
  plVar2 = (long *)param_1[1];
  iVar3 = *(int *)(*param_1 + 0x10);
  if (iVar3 == 0) {
    pcVar10 = "bad__repx__name";
    iVar3 = (*pcVar11)(param_1[2]);
    if (iVar3 == 1) goto LAB_0033431c;
LAB_003342ec:
    if (iVar3 != 0) goto LAB_00334338;
    pcVar11 = *(code **)(*plVar2 + 0x10);
    pcVar5 = "eTARGET";
  }
  else {
    pcVar10 = *(char **)(*(long *)(*param_1 + 8) + (ulong)(iVar3 - 1) * 0x10);
    iVar3 = (*pcVar11)(param_1[2]);
    if (iVar3 != 1) goto LAB_003342ec;
LAB_0033431c:
    pcVar11 = *(code **)(*plVar2 + 0x10);
    pcVar5 = "eERROR";
  }
  (*pcVar11)(plVar2,pcVar10,pcVar5);
LAB_00334338:
  puVar6 = (uint *)(*param_1 + 0x10);
  if (*puVar6 != 0) {
    uVar8 = *puVar6 - 1;
    if (*(char *)(*(long *)(*param_1 + 8) + (ulong)uVar8 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_1[1] + 0x28))();
      puVar6 = (uint *)(*param_1 + 0x10);
      uVar8 = *puVar6 - 1;
    }
    *puVar6 = uVar8;
  }
  return;
}


