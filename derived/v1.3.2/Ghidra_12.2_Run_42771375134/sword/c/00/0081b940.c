/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081b940; name: FUN_0081b940
 */


void FUN_0081b940(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_40;
  long *local_38;
  
  if (param_1 == param_2) {
    return;
  }
  plVar3 = *(long **)(param_1 + 2);
  if (plVar3 == (long *)0x0) {
    lVar5 = 0;
    plVar4 = *(long **)(param_2 + 2);
  }
  else {
    lVar5 = *plVar3;
    plVar4 = *(long **)(param_2 + 2);
  }
  if (plVar4 == (long *)0x0) {
    if (lVar5 == 0) goto LAB_0081b9c8;
  }
  else if (lVar5 == *plVar4) {
LAB_0081b9c8:
    *(long **)(param_1 + 2) = plVar4;
    *(long **)(param_2 + 2) = plVar3;
    uVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar1;
    uVar1 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = uVar1;
    return;
  }
  if (plVar4 == (long *)0x0) {
    local_40 = 0;
    local_38 = (long *)0x0;
  }
  else {
    lVar5 = *plVar4;
    local_40 = 0;
    local_38 = (long *)0x0;
    if (lVar5 != 0) {
      local_38 = (long *)FUN_0080efb0(lVar5,0,8);
      *local_38 = lVar5;
    }
  }
  FUN_0081ba80(&local_40,param_1);
  *param_1 = 0;
  FUN_0081ba80(param_1,param_2);
  if (&local_40 == (undefined8 *)param_2) {
    plVar3 = *(long **)(param_2 + 2);
  }
  else {
    plVar3 = *(long **)(param_2 + 2);
    *(long **)(param_2 + 2) = local_38;
    uVar1 = *param_2;
    *param_2 = (undefined4)local_40;
    uVar2 = param_2[1];
    param_2[1] = local_40._4_4_;
    local_40 = CONCAT44(uVar2,uVar1);
    local_38 = plVar3;
  }
  if ((plVar3 != (long *)0x0) && (*plVar3 == 0)) {
    operator_delete__(plVar3);
  }
  return;
}


