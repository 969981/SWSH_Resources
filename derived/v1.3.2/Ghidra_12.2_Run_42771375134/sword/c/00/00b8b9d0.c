/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8b9d0; name: FUN_00b8b9d0
 */


uint FUN_00b8b9d0(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_016ae640(*(undefined8 *)(param_1 + 0x58));
  if ((uVar1 & 1) == 0) {
    FUN_016ad050(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  return uVar1 & 1;
}


