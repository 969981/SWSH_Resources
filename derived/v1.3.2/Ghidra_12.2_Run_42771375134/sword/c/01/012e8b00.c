/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e8b00; name: FUN_012e8b00
 */


bool FUN_012e8b00(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x838) != 0) {
    uVar2 = FUN_01314dd0();
    if ((uVar2 & 1) == 0) {
      return false;
    }
    bVar1 = *(char *)(param_1 + 0x841) != '\0';
  }
  return bVar1;
}


