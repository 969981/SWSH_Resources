/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a55070; name: FUN_00a55070
 */


void FUN_00a55070(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  
  *param_2 = (long)(PTR_DAT_02719378 + 0x10);
  if (param_2[0x38] != 0) {
    (**(code **)(*(long *)param_2[0x2e] + 0x18))
              ((long *)param_2[0x2e],param_2[0x36],param_2[0x38] << 3,4);
  }
  plVar1 = (long *)param_2[0x34];
  if (param_2 + 0x30 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00a550e0:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00a550e0;
  }
  plVar1 = (long *)param_2[0x2c];
  if (param_2 + 0x28 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00a55110;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00a55110:
  pcVar2 = (code *)param_2[0x17];
  if (pcVar2 != (code *)0x0) {
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    (*pcVar2)(param_2 + 0x1a);
  }
  pcVar2 = (code *)param_2[7];
  if (pcVar2 != (code *)0x0) {
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    (*pcVar2)(param_2 + 10);
  }
                    /* WARNING: Could not recover jumptable at 0x00a5515c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


