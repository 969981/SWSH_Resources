/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ae730; name: FUN_012ae730
 */


undefined8 FUN_012ae730(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    uVar1 = FUN_012ae5d0(param_1 + 0x60);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  return 1;
}


