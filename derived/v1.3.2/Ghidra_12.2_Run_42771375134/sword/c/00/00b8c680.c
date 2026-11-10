/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8c680; name: FUN_00b8c680
 */


void FUN_00b8c680(long param_1,undefined8 param_2)

{
  long local_18;
  
  if ((*(long *)(param_1 + 0x38) != 0) && (FUN_00b8c580(&local_18), local_18 != 0)) {
    *(undefined8 *)(local_18 + 0x268) = param_2;
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


