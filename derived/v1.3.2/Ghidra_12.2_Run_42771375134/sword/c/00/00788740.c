/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00788740; name: FUN_00788740
 */


void FUN_00788740(long param_1)

{
  if (*(char *)(param_1 + 2) != '\0') {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),*(undefined8 *)(param_1 + 8));
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}


