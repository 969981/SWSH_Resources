/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006440c0; name: FUN_006440c0
 */


undefined8 FUN_006440c0(long param_1,long *param_2)

{
  if (param_2 == (long *)0x0) {
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    return 1;
  }
  (**(code **)(*param_2 + 0x10))(param_2);
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
  }
  *(long **)(param_1 + 0x20) = param_2;
  return 1;
}


