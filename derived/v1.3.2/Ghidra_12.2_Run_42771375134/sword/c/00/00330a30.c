/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00330a30; name: FUN_00330a30
 */


void FUN_00330a30(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 local_40;
  undefined1 local_38;
  uint7 uStack_37;
  
  lVar3 = *param_1;
  pcVar8 = (code *)param_2[2];
  uVar9 = *param_2;
  puVar5 = (uint *)(lVar3 + 0x10);
  uVar7 = *puVar5;
  if (uVar7 != 0) {
    if (*(char *)(*(long *)(lVar3 + 8) + (ulong)(uVar7 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(lVar3 + 8) + (ulong)(uVar7 - 1) * 0x10));
      lVar3 = *param_1;
      puVar5 = (uint *)(lVar3 + 0x10);
      uVar7 = *puVar5;
      *(undefined1 *)(*(long *)(lVar3 + 8) + (ulong)(uVar7 - 1) * 0x10 + 8) = 1;
    }
  }
  local_38 = 0;
  local_40 = uVar9;
  if (uVar7 < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 8) + (ulong)uVar7 * 0x10);
    puVar1[1] = (ulong)uStack_37 << 8;
    *puVar1 = uVar9;
    *puVar5 = *puVar5 + 1;
    piVar6 = (int *)param_1[5];
  }
  else {
    FUN_00327960(lVar3,&local_40);
    piVar6 = (int *)param_1[5];
  }
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + 1;
  }
  uVar9 = (*pcVar8)(param_1[2]);
  iVar2 = *(int *)(*param_1 + 0x10);
  if (iVar2 == 0) {
    pcVar4 = "bad__repx__name";
  }
  else {
    pcVar4 = *(char **)(*(long *)(*param_1 + 8) + (ulong)(iVar2 - 1) * 0x10);
  }
  FUN_00330bb0(param_1[1],param_1[4],param_1[3],pcVar4,uVar9);
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


