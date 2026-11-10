/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01267b20; name: FUN_01267b20
 */


undefined4 FUN_01267b20(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_01227630(param_1);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return 1;
}


