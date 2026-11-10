/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e4300; name: FUN_009e4300
 */


undefined8 FUN_009e4300(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 400) != '\0') {
    if (*(int *)(param_1 + 0x194) != 1) {
      if (*(int *)(param_1 + 0x194) != 0) {
        return 1;
      }
      FUN_009e4370(param_1);
      *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x194) + 1;
    }
    uVar1 = FUN_009e44d0(param_1);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    FUN_009e45c0(param_1);
  }
  return 1;
}


