/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01503340; name: FUN_01503340
 */


undefined4 FUN_01503340(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 100;
  if (param_2 != 0) {
    lVar1 = 0x68;
  }
  return *(undefined4 *)(param_1 + lVar1);
}


