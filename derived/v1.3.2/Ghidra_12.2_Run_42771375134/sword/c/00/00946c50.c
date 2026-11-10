/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00946c50; name: FUN_00946c50
 */


undefined8 FUN_00946c50(long *param_1)

{
  ulong uVar1;
  
  if ((((*param_1 != 0) && (uVar1 = FUN_008e0b50(), (uVar1 & 1) != 0)) && ((int)param_1[1] == 1)) &&
     (*(char *)((long)param_1 + 0x15) == '\0')) {
    uVar1 = FUN_008e0a10(*param_1);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    if (*(char *)((long)param_1 + 0x14) != '\0') {
      return 1;
    }
    if (*(char *)((long)param_1 + 0x16) != '\0') {
      return 1;
    }
  }
  return 0;
}


