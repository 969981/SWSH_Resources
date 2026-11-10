/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01160c30; name: FUN_01160c30
 */


uint FUN_01160c30(long param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x930) == '\0') {
    uVar1 = FUN_01679c20(*(undefined8 *)(param_1 + 0x5d0));
    if (uVar1 < 8) {
      return 0xc1U >> (ulong)(uVar1 & 0x1f) & 1;
    }
  }
  return 0;
}


