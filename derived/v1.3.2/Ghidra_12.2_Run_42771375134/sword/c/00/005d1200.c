/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005d1200; name: FUN_005d1200
 */


undefined8 FUN_005d1200(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_005f50f0(param_1[1]);
  (**(code **)(*param_1 + 0x28))(param_1,plVar1);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return 1;
}


