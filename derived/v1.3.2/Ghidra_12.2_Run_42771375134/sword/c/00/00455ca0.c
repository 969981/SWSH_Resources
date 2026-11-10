/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00455ca0; name: FUN_00455ca0
 */


void FUN_00455ca0(long param_1)

{
  if ((*(byte *)(param_1 + 0x164) & 7) == 2) {
    *(byte *)(param_1 + 0x164) = *(byte *)(param_1 + 0x164) & 0xf8;
    FUN_00455870();
    return;
  }
  return;
}


