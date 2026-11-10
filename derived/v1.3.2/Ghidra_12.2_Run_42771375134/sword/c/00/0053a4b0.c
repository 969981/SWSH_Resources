/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053a4b0; name: FUN_0053a4b0
 */


undefined8 FUN_0053a4b0(long param_1)

{
  undefined1 auStack_60 [64];
  
  FUN_00510350(0xbf800000,0xbf800000,0xbf800000,auStack_60);
  FUN_00515cb0(param_1 + 0x9b4,param_1 + 0x9b4,auStack_60);
  *(undefined1 *)(param_1 + 0xb34) = 1;
  return 0;
}


