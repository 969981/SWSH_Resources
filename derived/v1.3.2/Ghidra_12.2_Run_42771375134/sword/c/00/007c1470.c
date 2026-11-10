/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c1470; name: FUN_007c1470
 */


undefined4 FUN_007c1470(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x11) != '\0') {
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return uVar1;
}


