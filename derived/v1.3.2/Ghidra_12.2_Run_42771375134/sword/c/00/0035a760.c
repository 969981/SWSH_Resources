/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0035a760; name: FUN_0035a760
 */


void FUN_0035a760(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  byte local_38 [8];
  char *local_28;
  
  if ((int *)param_1[0xc] == (int *)0x0) {
    iVar4 = 8;
  }
  else {
    iVar4 = *(int *)param_1[0xc] + 8;
  }
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar4;
  piVar5 = (int *)param_1[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  local_28 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar1 = (long *)param_1[5];
    iVar4 = *(int *)(*param_1 + 0x10);
    if (iVar4 == 0) {
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,"bad__repx__name",&local_28);
    }
    else {
      uVar2 = (**(code **)(*plVar1 + 0x10))
                        (plVar1,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar4 - 1) * 0x10)
                         ,&local_28);
    }
    if (((((uVar2 & 1) != 0) && (local_28 != (char *)0x0)) && (*local_28 != '\0')) &&
       ((long *)param_1[4] != (long *)0x0)) {
      uVar3 = (**(code **)(*(long *)param_1[4] + 0x10))();
      (**(code **)(*(long *)param_1[6] + 0x180))(local_38);
      if (((local_38[0] & 1) == 0) || (1 < *(int *)(param_2 + 0x10) - 0x2bU)) {
        (**(code **)(param_2 + 0x20))(param_1[6],uVar3);
      }
    }
  }
  return;
}


