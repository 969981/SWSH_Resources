/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01128b40; name: FUN_01128b40
 */


undefined1 FUN_01128b40(long param_1,int param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + param_2 + 0x90);
  *(undefined1 *)(param_1 + param_2 + 0x90) = 0;
  return uVar1;
}


