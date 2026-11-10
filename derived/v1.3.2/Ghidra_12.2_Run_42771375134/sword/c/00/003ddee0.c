/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ddee0; name: FUN_003ddee0
 */


void FUN_003ddee0(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  
  if (param_3 == 0x20) {
    if (param_2 != (undefined8 *)0x0) {
      *(int *)(param_1 + 0x70c) = *(int *)(param_1 + 0x70c) + -1;
      *param_2 = *(undefined8 *)(param_1 + 0x718);
      *(undefined8 **)(param_1 + 0x718) = param_2;
    }
  }
  else if (param_3 == 0x10) {
    if (param_2 != (undefined8 *)0x0) {
      *(int *)(param_1 + 0x4d4) = *(int *)(param_1 + 0x4d4) + -1;
      *param_2 = *(undefined8 *)(param_1 + 0x4e0);
      *(undefined8 **)(param_1 + 0x4e0) = param_2;
    }
  }
  else if (param_3 == 8) {
    if (param_2 != (undefined8 *)0x0) {
      *(int *)(param_1 + 0x29c) = *(int *)(param_1 + 0x29c) + -1;
      *param_2 = *(undefined8 *)(param_1 + 0x2a8);
      *(undefined8 **)(param_1 + 0x2a8) = param_2;
    }
  }
  else if (param_2 != (undefined8 *)0x0) {
    plVar1 = (long *)FUN_00400d30();
                    /* WARNING: Could not recover jumptable at 0x003ddf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    return;
  }
  return;
}


