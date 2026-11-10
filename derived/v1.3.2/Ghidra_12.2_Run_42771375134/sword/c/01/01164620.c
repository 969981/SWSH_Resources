/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01164620; name: FUN_01164620
 */


uint FUN_01164620(long param_1)

{
  uint uVar1;
  
  *(char *)(*(long *)(param_1 + 0x68) + 0x8c) = *(char *)(*(long *)(param_1 + 0x68) + 0x8c) + '\x01'
  ;
  uVar1 = *(byte *)(*(long *)(param_1 + 0x68) + 0x8c) - 1;
  return uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
}


