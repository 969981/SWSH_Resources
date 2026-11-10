/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012acfd0; name: FUN_012acfd0
 */


void FUN_012acfd0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 local_18;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  if ((long *)*param_3 != (long *)0x0) {
    (**(code **)(*(long *)*param_3 + 0x10))(&local_18);
    if (*(long *)(param_1 + 0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = local_18;
  }
  return;
}


