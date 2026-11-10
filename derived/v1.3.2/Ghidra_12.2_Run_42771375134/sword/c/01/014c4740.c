/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c4740; name: FUN_014c4740
 */


void FUN_014c4740(long param_1,short param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    return;
  }
  FUN_014c4ed0(*(undefined8 *)(param_1 + 0x58));
  FUN_019945b0(*(undefined8 *)(param_1 + 0x70),param_2,*(undefined4 *)(param_1 + 0x78),
               *(undefined2 *)(param_1 + 0x92),param_3,*(undefined1 *)(param_1 + 0x90));
  return;
}


