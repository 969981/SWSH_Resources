/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffcad0; name: FUN_00ffcad0
 */


void FUN_00ffcad0(long param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    if (*(long *)(param_1 + 0x3c0) != 0) {
      FUN_016d20d0();
      return;
    }
  }
  else if (*(long *)(param_1 + 0x3c0) != 0) {
    FUN_016d2080();
    return;
  }
  return;
}


