/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd3b10; name: FUN_00cd3b10
 */


undefined1 FUN_00cd3b10(long param_1,int param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + param_2 + 0xb0);
  *(undefined1 *)(param_1 + param_2 + 0xb0) = 0;
  return uVar1;
}


