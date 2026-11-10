/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00327230; name: FUN_00327230
 */


void FUN_00327230(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  undefined8 uVar8;
  char *pcVar9;
  code *pcVar10;
  undefined8 local_40;
  undefined1 local_38;
  uint7 uStack_37;
  
  lVar4 = *param_1;
  pcVar10 = (code *)param_2[2];
  uVar8 = *param_2;
  puVar5 = (uint *)(lVar4 + 0x10);
  uVar7 = *puVar5;
  if (uVar7 != 0) {
    if (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar7 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(lVar4 + 8) + (ulong)(uVar7 - 1) * 0x10));
      lVar4 = *param_1;
      puVar5 = (uint *)(lVar4 + 0x10);
      uVar7 = *puVar5;
      *(undefined1 *)(*(long *)(lVar4 + 8) + (ulong)(uVar7 - 1) * 0x10 + 8) = 1;
    }
  }
  local_38 = 0;
  local_40 = uVar8;
  if (uVar7 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)uVar7 * 0x10);
    puVar1[1] = (ulong)uStack_37 << 8;
    *puVar1 = uVar8;
    *puVar5 = *puVar5 + 1;
    piVar6 = (int *)param_1[5];
  }
  else {
    FUN_00327960(lVar4,&local_40);
    piVar6 = (int *)param_1[5];
  }
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + 1;
  }
  plVar2 = (long *)param_1[1];
  iVar3 = *(int *)(*param_1 + 0x10);
  if (iVar3 == 0) {
    pcVar9 = "bad__repx__name";
    iVar3 = (*pcVar10)(param_1[2]);
  }
  else {
    pcVar9 = *(char **)(*(long *)(*param_1 + 8) + (ulong)(iVar3 - 1) * 0x10);
    iVar3 = (*pcVar10)(param_1[2]);
  }
  if (iVar3 == 1) {
    (**(code **)(*plVar2 + 0x10))(plVar2,pcVar9,"eS16_TM");
  }
  puVar5 = (uint *)(*param_1 + 0x10);
  if (*puVar5 != 0) {
    uVar7 = *puVar5 - 1;
    if (*(char *)(*(long *)(*param_1 + 8) + (ulong)uVar7 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_1[1] + 0x28))();
      puVar5 = (uint *)(*param_1 + 0x10);
      uVar7 = *puVar5 - 1;
    }
    *puVar5 = uVar7;
  }
  return;
}


