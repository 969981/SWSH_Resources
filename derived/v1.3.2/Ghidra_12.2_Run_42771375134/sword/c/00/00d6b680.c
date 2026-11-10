/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6b680; name: FUN_00d6b680
 */


void FUN_00d6b680(long param_1)

{
  if ((*(char *)(param_1 + 0x580) == '\0') && (*(int *)(param_1 + 0x500) == 3)) {
    *(undefined4 *)(param_1 + 0x500) = 4;
    FUN_00d14cc0(*(undefined8 *)(param_1 + 0x508),*(undefined4 *)(param_1 + 0x460));
    return;
  }
  return;
}


