/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053a890; name: FUN_0053a890
 */


undefined8 FUN_0053a890(long param_1,int param_2)

{
  long lVar1;
  undefined1 auStack_60 [64];
  
  FUN_005102b0(auStack_60);
  lVar1 = param_1 + (long)param_2 * 0x40 + 0x9b4;
  FUN_00515cb0(lVar1,lVar1,auStack_60);
  *(undefined1 *)(param_1 + param_2 + 0xb34) = 1;
  return 0;
}


