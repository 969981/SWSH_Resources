/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00328870; name: FUN_00328870
 */


void FUN_00328870(long *param_1,undefined1 *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  int *piVar4;
  char *local_28;
  
  if ((int *)param_1[0xc] == (int *)0x0) {
    iVar1 = 8;
  }
  else {
    iVar1 = *(int *)param_1[0xc] + 8;
  }
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar1;
  piVar4 = (int *)param_1[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  local_28 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar2 = (long *)param_1[5];
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,"bad__repx__name",&local_28);
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))
                        (plVar2,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar1 - 1) * 0x10)
                         ,&local_28);
    }
    if ((((uVar3 & 1) != 0) && (local_28 != (char *)0x0)) && (*local_28 != '\0')) {
      iVar1 = strcasecmp("eS16_TM",local_28);
      (**(code **)(param_2 + 0x20))(param_1[6],iVar1 == 0);
      return;
    }
  }
  return;
}


