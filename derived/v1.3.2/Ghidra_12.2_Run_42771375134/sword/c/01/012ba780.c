/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ba780; name: FUN_012ba780
 */


undefined8 FUN_012ba780(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xe0));
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0xe0);
}


