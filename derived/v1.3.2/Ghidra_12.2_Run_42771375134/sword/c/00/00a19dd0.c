/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a19dd0; name: FUN_00a19dd0
 */


void FUN_00a19dd0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  
  *param_2 = (long)(PTR_DAT_02718ee8 + 0x10);
  if (param_2[0x2d] != 0) {
    (**(code **)(*(long *)(param_2[0x2d] + 0x48) + 0x18))();
    param_2[0x2d] = 0;
  }
  if (param_2[0x2c] != 0) {
    (**(code **)(*(long *)(param_2[0x2c] + 0x48) + 0x18))();
    param_2[0x2c] = 0;
  }
  if (param_2[0x22] != 0) {
    (**(code **)(*(long *)param_2[0x18] + 0x18))
              ((long *)param_2[0x18],param_2[0x20],param_2[0x22] * 0x28,8);
  }
  plVar1 = (long *)param_2[0x1e];
  if (param_2 + 0x1a == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00a19e74:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00a19e74;
  }
  plVar1 = (long *)param_2[0x16];
  if (param_2 + 0x12 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00a19ea4;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00a19ea4:
                    /* WARNING: Could not recover jumptable at 0x00a19ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


