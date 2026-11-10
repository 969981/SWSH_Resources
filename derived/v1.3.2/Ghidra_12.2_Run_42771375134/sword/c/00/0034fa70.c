/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0034fa70; name: FUN_0034fa70
 */


void FUN_0034fa70(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  int *piVar7;
  undefined8 uVar8;
  char *pcVar9;
  code *pcVar10;
  undefined8 local_40;
  undefined1 local_38;
  uint7 uStack_37;
  
  lVar5 = *param_1;
  pcVar10 = (code *)param_2[2];
  uVar8 = *param_2;
  puVar6 = (uint *)(lVar5 + 0x10);
  uVar4 = *puVar6;
  if (uVar4 != 0) {
    if (*(char *)(*(long *)(lVar5 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(lVar5 + 8) + (ulong)(uVar4 - 1) * 0x10));
      lVar5 = *param_1;
      puVar6 = (uint *)(lVar5 + 0x10);
      uVar4 = *puVar6;
      *(undefined1 *)(*(long *)(lVar5 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) = 1;
    }
  }
  local_38 = 0;
  local_40 = uVar8;
  if (uVar4 < (*(uint *)(lVar5 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 8) + (ulong)uVar4 * 0x10);
    puVar1[1] = (ulong)uStack_37 << 8;
    *puVar1 = uVar8;
    *puVar6 = *puVar6 + 1;
    piVar7 = (int *)param_1[5];
  }
  else {
    FUN_00327960(lVar5,&local_40);
    piVar7 = (int *)param_1[5];
  }
  if (piVar7 != (int *)0x0) {
    *piVar7 = *piVar7 + 1;
  }
  plVar2 = (long *)param_1[1];
  iVar3 = *(int *)(*param_1 + 0x10);
  if (iVar3 == 0) {
    pcVar9 = "bad__repx__name";
    uVar4 = (*pcVar10)(param_1[2]);
  }
  else {
    pcVar9 = *(char **)(*(long *)(*param_1 + 8) + (ulong)(iVar3 - 1) * 0x10);
    uVar4 = (*pcVar10)(param_1[2]);
  }
  if (uVar4 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0034fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01d4d6fc + *(int *)(&DAT_01d4d6fc + (ulong)uVar4 * 4)))();
    return;
  }
  if (uVar4 == 0x7fffffff) {
    (**(code **)(*plVar2 + 0x10))(plVar2,pcVar9,"ePAD_32");
  }
  puVar6 = (uint *)(*param_1 + 0x10);
  if (*puVar6 != 0) {
    uVar4 = *puVar6 - 1;
    if (*(char *)(*(long *)(*param_1 + 8) + (ulong)uVar4 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_1[1] + 0x28))();
      puVar6 = (uint *)(*param_1 + 0x10);
      uVar4 = *puVar6 - 1;
    }
    *puVar6 = uVar4;
  }
  return;
}


