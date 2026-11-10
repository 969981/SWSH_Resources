/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00350f60; name: FUN_00350f60
 */


void FUN_00350f60(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_34;
  char *local_30;
  undefined2 local_28 [4];
  
  if ((int *)param_1[0xc] == (int *)0x0) {
    iVar3 = 0x10;
  }
  else {
    iVar3 = *(int *)param_1[0xc] + 0x10;
  }
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar3;
  piVar4 = (int *)param_1[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  local_30 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar1 = (long *)param_1[5];
    iVar3 = *(int *)(*param_1 + 0x10);
    if (iVar3 == 0) {
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,"bad__repx__name",&local_30);
    }
    else {
      uVar2 = (**(code **)(*plVar1 + 0x10))
                        (plVar1,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar3 - 1) * 0x10)
                         ,&local_30);
    }
    if ((((uVar2 & 1) != 0) && (local_30 != (char *)0x0)) && (*local_30 != '\0')) {
      local_34 = 0;
      FUN_00323980(local_30,param_1[7],&local_34,&PTR_s_eDISABLE_FRICTION_025e76d8);
      local_28[0] = (undefined2)local_34;
      (**(code **)(param_2 + 0x20))(param_1[6],local_28);
      return;
    }
  }
  return;
}


