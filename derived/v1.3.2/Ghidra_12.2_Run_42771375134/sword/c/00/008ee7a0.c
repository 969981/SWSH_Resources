/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ee7a0; name: FUN_008ee7a0
 */


undefined1 FUN_008ee7a0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_008ee550();
  if (param_1 == 2) {
    if ((int)uVar1 < 5) {
      return (&DAT_02149ce6)[uVar1];
    }
    return 2;
  }
  if (param_1 == 1) {
    if ((int)uVar1 < 5) {
      return (&DAT_02149ce1)[uVar1];
    }
    return 2;
  }
  if (param_1 != 0) {
    return 2;
  }
  if ((int)uVar1 < 5) {
    return (&DAT_02149cdc)[uVar1];
  }
  return 2;
}


