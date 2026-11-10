/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e0390; name: FUN_003e0390
 */


void FUN_003e0390(long param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  
  if (param_3 < 0x81) {
    if (param_2 != (undefined8 *)0x0) {
      *(int *)(param_1 + 0xbc4) = *(int *)(param_1 + 0xbc4) + -1;
      *param_2 = *(undefined8 *)(param_1 + 0xbd0);
      *(undefined8 **)(param_1 + 0xbd0) = param_2;
    }
  }
  else if (param_3 < 0x101) {
    if (param_2 != (undefined8 *)0x0) {
      *(int *)(param_1 + 0xdfc) = *(int *)(param_1 + 0xdfc) + -1;
      *param_2 = *(undefined8 *)(param_1 + 0xe08);
      *(undefined8 **)(param_1 + 0xe08) = param_2;
    }
  }
  else if (param_3 < 0x181) {
    if (param_2 != (undefined8 *)0x0) {
      *(int *)(param_1 + 0x1034) = *(int *)(param_1 + 0x1034) + -1;
      *param_2 = *(undefined8 *)(param_1 + 0x1040);
      *(undefined8 **)(param_1 + 0x1040) = param_2;
    }
  }
  else if (param_2 != (undefined8 *)0x0) {
    plVar1 = (long *)FUN_00400d30();
                    /* WARNING: Could not recover jumptable at 0x003e0434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    return;
  }
  return;
}


