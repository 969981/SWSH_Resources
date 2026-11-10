/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd4e00; name: FUN_00cd4e00
 */


void FUN_00cd4e00(long param_1,uint param_2)

{
  FUN_00cce2f0(*(undefined8 *)(param_1 + 0x78));
  if (param_2 < *(uint *)(param_1 + 0xb8)) {
    FUN_016df8f0(*(undefined8 *)(param_1 + 0x80),param_2);
  }
  *(uint *)(param_1 + 0xb8) = param_2;
  return;
}


