/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d67a60; name: FUN_00d67a60
 */


bool FUN_00d67a60(long param_1)

{
  if ((((*(long *)(param_1 + 0x7a8) == -0x340d631b7bddd9bb) &&
       (*(long *)(param_1 + 0x7b0) == -0x340d631b7bddd9bb)) &&
      (*(long *)(param_1 + 0x7b8) == -0x340d631b7bddd9bb)) &&
     (*(long *)(param_1 + 0x7c0) == -0x340d631b7bddd9bb)) {
    return *(long *)(param_1 + 0x7c8) != -0x340d631b7bddd9bb;
  }
  return true;
}


