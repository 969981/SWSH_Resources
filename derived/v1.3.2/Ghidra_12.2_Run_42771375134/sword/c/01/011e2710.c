/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011e2710; name: FUN_011e2710
 */


void FUN_011e2710(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x9f) != '\0') {
    *(undefined1 *)(param_1 + 0x9f) = 0;
  }
  if (*(char *)(param_1 + 0x71) != '\0') {
    *(undefined1 *)(param_1 + 0x71) = 0;
  }
  if (*(char *)(param_1 + 0x43) != '\0') {
    *(undefined1 *)(param_1 + 0x43) = 0;
  }
  if (*(char *)(param_1 + 0x15) != '\0') {
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  plVar2 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      plVar2[1] = lVar1;
      (**(code **)(*(long *)plVar2[3] + 0x18))((long *)plVar2[3],lVar1,plVar2[2] - lVar1,8);
    }
    (**(code **)(*(long *)param_1[0x11] + 0x18))
              ((long *)param_1[0x11],plVar2,param_1[0x12],param_1[0x13]);
  }
  plVar2 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      plVar2[1] = lVar1;
      (**(code **)(*(long *)plVar2[3] + 0x18))((long *)plVar2[3],lVar1,plVar2[2] - lVar1,8);
    }
    (**(code **)(*(long *)param_1[0xd] + 0x18))
              ((long *)param_1[0xd],plVar2,param_1[0xe],param_1[0xf]);
  }
  plVar2 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      plVar2[1] = lVar1;
      (**(code **)(*(long *)plVar2[3] + 0x18))((long *)plVar2[3],lVar1,plVar2[2] - lVar1,8);
    }
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],plVar2,param_1[10],param_1[0xb]);
  }
  plVar2 = (long *)param_1[4];
  param_1[4] = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      plVar2[1] = lVar1;
      (**(code **)(*(long *)plVar2[3] + 0x18))((long *)plVar2[3],lVar1,plVar2[2] - lVar1,8);
    }
    (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],plVar2,param_1[6],param_1[7]);
  }
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  if (plVar2 == (long *)0x0) {
    return;
  }
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    plVar2[1] = lVar1;
    (**(code **)(*(long *)plVar2[3] + 0x18))((long *)plVar2[3],lVar1,plVar2[2] - lVar1,8);
  }
                    /* WARNING: Could not recover jumptable at 0x011e28c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],plVar2,param_1[2],param_1[3]);
  return;
}


