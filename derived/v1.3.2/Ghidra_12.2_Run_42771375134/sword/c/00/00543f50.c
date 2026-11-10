/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00543f50; name: FUN_00543f50
 */


undefined8 FUN_00543f50(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined1 auStack_228 [456];
  
  if (param_3 == 0) {
    return 0xfffffffa;
  }
  if (*(int *)(param_3 + 0x10) == 4) {
    if (*(long *)(param_3 + 0x68) == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = *(long **)(*(long *)(param_3 + 0x68) + 0x38);
    }
  }
  else {
    plVar1 = *(long **)(param_3 + 0x38);
  }
  (**(code **)(*plVar1 + 0x40))(plVar1);
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x88))();
                    /* WARNING: Subroutine does not return */
  memset(auStack_228,0,0x1c0);
}


