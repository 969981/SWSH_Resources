/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015035c0; name: FUN_015035c0
 */


undefined1 FUN_015035c0(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0x70;
  if (param_2 != 0) {
    lVar1 = 0x71;
  }
  return *(undefined1 *)(param_1 + lVar1);
}


