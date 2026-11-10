/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01011a50; name: FUN_01011a50
 */


void FUN_01011a50(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = param_2[0x1b];
  *param_2 = (long)(PTR_DAT_02723570 + 0x10);
  if (lVar2 != 0) {
    plVar3 = (long *)param_2[0x1a];
    do {
      lVar2 = lVar2 + -1;
      if (*plVar3 != 0) {
        (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
        *plVar3 = 0;
      }
      plVar3 = plVar3 + 1;
    } while (lVar2 != 0);
  }
  if (param_2[0x1c] != 0) {
    (**(code **)(*(long *)param_2[0x12] + 0x18))
              ((long *)param_2[0x12],param_2[0x1a],param_2[0x1c] << 3,8);
  }
  plVar3 = (long *)param_2[0x18];
  if (param_2 + 0x14 == plVar3) {
    pcVar1 = *(code **)(*plVar3 + 0x20);
LAB_01011af4:
    (*pcVar1)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar1 = *(code **)(*plVar3 + 0x28);
    goto LAB_01011af4;
  }
  plVar3 = (long *)param_2[0x10];
  if (param_2 + 0xc == plVar3) {
    pcVar1 = *(code **)(*plVar3 + 0x20);
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_01011b24;
    pcVar1 = *(code **)(*plVar3 + 0x28);
  }
  (*pcVar1)();
LAB_01011b24:
                    /* WARNING: Could not recover jumptable at 0x01011b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


