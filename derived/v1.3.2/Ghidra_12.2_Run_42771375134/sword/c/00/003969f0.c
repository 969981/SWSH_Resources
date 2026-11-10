/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003969f0; name: FUN_003969f0
 */


long * FUN_003969f0(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *(undefined2 *)((long)plVar1 + 10) = 2;
  *plVar1 = (long)(PTR_DAT_027126d8 + 0x10);
  *param_1 = plVar1 + 0xb;
  FUN_00396a50(plVar1);
  (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
  return plVar1;
}


