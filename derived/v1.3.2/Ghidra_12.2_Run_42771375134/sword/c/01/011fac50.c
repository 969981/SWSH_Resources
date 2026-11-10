/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fac50; name: FUN_011fac50
 */


void FUN_011fac50(long param_1)

{
  undefined8 local_18;
  
  if (*(long *)(param_1 + 0x158) != 0) {
    return;
  }
  FUN_011facb0(&local_18,*(undefined8 *)(param_1 + 0x160));
  if (*(long *)(param_1 + 0x158) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x158) + 0x58) + 0x18))();
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  *(undefined8 *)(param_1 + 0x158) = local_18;
  FUN_011fb970();
  return;
}


