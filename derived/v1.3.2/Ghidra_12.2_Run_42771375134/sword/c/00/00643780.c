/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00643780; name: FUN_00643780
 */


void FUN_00643780(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_005cbff0();
  (**(code **)(*plVar1 + 0x110))(plVar1,param_1 + 0x2b8);
  FUN_00644140(param_1);
  return;
}


