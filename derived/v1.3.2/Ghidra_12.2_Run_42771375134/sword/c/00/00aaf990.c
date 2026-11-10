/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aaf990; name: FUN_00aaf990
 */


undefined8 FUN_00aaf990(long param_1)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x4b8) != 0) && (*(int *)(param_1 + 0x4d8) != 0)) {
    uVar1 = FUN_00895a90(*(undefined8 *)PTR_DAT_02717598);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


