/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f68e0; name: FUN_014f68e0
 */


void FUN_014f68e0(undefined1 param_1 [16],long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x450) + 0x1a8);
  *(long *)(lVar1 + 0xe8) = param_1._8_8_;
  *(long *)(lVar1 + 0xe0) = param_1._0_8_;
  return;
}


