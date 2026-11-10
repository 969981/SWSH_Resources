/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb03d0; name: FUN_00fb03d0
 */


void FUN_00fb03d0(long param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0xc80) == '\0') {
    uVar1 = FUN_00fb0410();
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xc80) = 1;
    }
  }
  return;
}


