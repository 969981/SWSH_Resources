/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01039f00; name: FUN_01039f00
 */


undefined8 FUN_01039f00(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xbac) == 1) {
    if (*(long *)(param_1 + 0xba0) == 0) {
      *(undefined4 *)(param_1 + 0xbac) = 2;
      return 1;
    }
    uVar1 = FUN_0103c8d0();
    if ((uVar1 & 1) != 0) {
      FUN_01039d30(param_1);
      if (*(char *)(param_1 + 0xbb0) != '\0') {
        *(undefined1 *)(param_1 + 0xbb0) = 0;
        FUN_010364c0(param_1,*(undefined4 *)(param_1 + 0xbb4));
      }
    }
  }
  return 1;
}


