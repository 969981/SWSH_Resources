/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01553560; name: FUN_01553560
 */


bool FUN_01553560(long param_1,int param_2,ushort param_3)

{
  char *pcVar1;
  
  if (*(ushort *)(&DAT_02173160 + (long)param_2 * 2) < param_3) {
    return false;
  }
  if (param_2 == 2) {
    if (0x18 < param_3) {
      return *(char *)(param_1 + (ulong)param_3 + 0x116) == '\x01';
    }
  }
  else if (param_2 == 1) {
    if (0x18 < param_3) {
      return *(char *)(param_1 + (ulong)param_3 + 0x114) == '\x01';
    }
  }
  else if ((param_2 == 0) && (0x54 < param_3)) {
    pcVar1 = (char *)(param_1 + (ulong)param_3 + 0xcd);
    if (0x5f < param_3) {
      pcVar1 = (char *)(param_1 + (ulong)param_3 + 0xd8);
    }
    return *pcVar1 == '\x01';
  }
  return *(char *)(*(long *)(param_1 + (long)param_2 * 8 + 0x150) + (ulong)param_3) == '\x01';
}


