/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdb1a0; name: FUN_00bdb1a0
 */


void FUN_00bdb1a0(long param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x1918) == '\0') {
    *(undefined8 *)(param_1 + 0x191a) = *param_2;
    *(char *)(param_1 + 0x1918) = '\x01';
    return;
  }
  *(undefined8 *)(param_1 + 0x191a) = *param_2;
  return;
}


