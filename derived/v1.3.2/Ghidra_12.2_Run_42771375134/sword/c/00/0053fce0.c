/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053fce0; name: FUN_0053fce0
 */


undefined8 FUN_0053fce0(long param_1)

{
  if (*(char *)(param_1 + 0x14d09) != '\0') {
    if (*(long **)(param_1 + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x30) + 0x60))();
    }
    *(char *)(param_1 + 0x14d09) = '\0';
    *(undefined1 *)(param_1 + 0x14d08) = 0;
  }
  return 0;
}


