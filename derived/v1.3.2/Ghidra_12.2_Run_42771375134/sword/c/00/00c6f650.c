/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6f650; name: FUN_00c6f650
 */


void FUN_00c6f650(undefined8 *param_1,long param_2)

{
  undefined8 local_18;
  
  if (*(long **)(param_2 + 0x110) == (long *)0x0) {
    *param_1 = 0;
    return;
  }
  (**(code **)(**(long **)(param_2 + 0x110) + 0x10))(&local_18);
  *param_1 = local_18;
  return;
}


