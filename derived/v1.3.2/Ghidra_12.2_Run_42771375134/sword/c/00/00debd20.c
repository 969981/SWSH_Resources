/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00debd20; name: FUN_00debd20
 */


undefined8 FUN_00debd20(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_28;
  
  lVar4 = *(long *)(param_1 + 0x88);
  if (*(char *)(lVar4 + 0x6b8) == '\0') {
    return 1;
  }
  if (((*(long **)(lVar4 + 0x418) != *(long **)(lVar4 + 0x420)) &&
      (lVar4 = **(long **)(lVar4 + 0x418), lVar4 != 0)) &&
     (puVar5 = *(undefined8 **)(lVar4 + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar4 = FUN_00c781c0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar4) {
        puVar5 = puVar5 + -10;
        goto LAB_00debd90;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_00debd90:
  local_28 = FUN_0069d2b0(puVar5);
  iVar1 = *(int *)(param_1 + 0x1e8);
  if (iVar1 == 2) {
    return 1;
  }
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    uVar3 = FUN_006b94c0(&local_28);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    uVar3 = FUN_00e45920(*(undefined8 *)(param_1 + 0x88));
    if ((uVar3 & 1) != 0) {
      FUN_00ea0970(*(undefined8 *)(param_1 + 0x88),0);
      return 1;
    }
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
  }
  uVar3 = FUN_006b94c0(&local_28);
  if ((uVar3 & 1) == 0) {
    plVar2 = (long *)FUN_006b92e0(&local_28);
    if (*plVar2 == 0x305fb82128551508) {
      (**(code **)(**(long **)(param_1 + 0x88) + 400))
                (*(long **)(param_1 + 0x88),PTR_DAT_0271ed28,*(undefined4 *)PTR_DAT_0271ed20);
      (**(code **)(**(long **)(param_1 + 0x88) + 0x1b0))
                (*(long **)(param_1 + 0x88),PTR_DAT_0271ed30);
    }
    else {
      uVar3 = FUN_00e45920();
      if ((uVar3 & 1) != 0) {
        FUN_00ea0970(*(undefined8 *)(param_1 + 0x88),0);
        *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
        return 1;
      }
    }
  }
  return 0;
}


