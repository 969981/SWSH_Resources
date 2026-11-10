/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff7030; name: FUN_00ff7030
 */


void FUN_00ff7030(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  
  FUN_00ff7140();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar5 = (undefined8 *)param_1[1]; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    (**(code **)(*(long *)param_1[0x12] + 0x18))((long *)param_1[0x12],*puVar5,0x1000,8);
  }
  plVar2 = (long *)param_1[0x18];
  if (param_1 + 0x14 == plVar2) {
    pcVar4 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_00ff70a4;
    pcVar4 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar4)();
LAB_00ff70a4:
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + (~((lVar3 + -8) - param_1[1]) & 0xfffffffffffffff8U);
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],lVar3,param_1[4] - lVar3,8);
  }
  plVar2 = (long *)param_1[0xc];
  if (param_1 + 8 == plVar2) {
                    /* WARNING: Could not recover jumptable at 0x00ff712c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))();
    return;
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ff7114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))();
  return;
}


