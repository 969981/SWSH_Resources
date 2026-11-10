/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00880700; name: FUN_00880700
 */


undefined8 FUN_00880700(long param_1,uint param_2)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return 0;
  }
  if ((ulong)*(ushort *)(param_1 + 0xc) == 0) {
    return 0;
  }
  uVar1 = 0;
  do {
    if ((uVar1 < 0x1f) && (uVar1 < *(ushort *)(param_1 + 0xc))) {
      if (*(ushort *)(param_1 + 0xe + uVar1 * 2) == param_2) {
        return 1;
      }
    }
    else if (param_2 == 0) {
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < *(ushort *)(param_1 + 0xc));
  return 0;
}


