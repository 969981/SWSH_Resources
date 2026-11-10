/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ff330; name: FUN_009ff330
 */


undefined8 FUN_009ff330(long param_1,char param_2,uint param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x180) != 0) {
    if (param_2 == '\x01') {
      lVar1 = 0x2237;
    }
    else {
      if (param_2 != '\0') {
        return 0;
      }
      lVar1 = 0x21b7;
    }
    if ((1 << (ulong)(param_3 & 7) &
        (uint)*(byte *)(*(long *)(param_1 + 0x180) + (ulong)(param_3 >> 3) + lVar1)) != 0) {
      return 1;
    }
  }
  return 0;
}


