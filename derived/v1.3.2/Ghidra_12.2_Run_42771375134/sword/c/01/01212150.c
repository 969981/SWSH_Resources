/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01212150; name: FUN_01212150
 */


void FUN_01212150(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  if (param_1[0x3a] != 0) {
    (**(code **)(*(long *)param_1[0x30] + 0x18))
              ((long *)param_1[0x30],param_1[0x38],param_1[0x3a] * 0x28,8);
  }
  plVar1 = (long *)param_1[0x36];
  if (param_1 + 0x32 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_012121b0:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_012121b0;
  }
  if (param_1[0x2e] != 0) {
    (**(code **)(*(long *)param_1[0x24] + 0x18))
              ((long *)param_1[0x24],param_1[0x2c],param_1[0x2e] * 0x28,8);
  }
  plVar1 = (long *)param_1[0x2a];
  if (param_1 + 0x26 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_01212204:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_01212204;
  }
  if (param_1[0x22] != 0) {
    (**(code **)(*(long *)param_1[0x18] + 0x18))
              ((long *)param_1[0x18],param_1[0x20],param_1[0x22] * 0x28,8);
  }
  plVar1 = (long *)param_1[0x1e];
  if (param_1 + 0x1a == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_01212258:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_01212258;
  }
  if (param_1[0x16] != 0) {
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],param_1[0x14],param_1[0x16] * 0x28,8);
  }
  plVar1 = (long *)param_1[0x12];
  if (param_1 + 0xe == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_012122b0;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_012122b0:
  if (param_1[10] != 0) {
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] * 0x28,8);
  }
  plVar1 = (long *)param_1[6];
  if (param_1 + 2 == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x01212310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x012122fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))();
  return;
}


