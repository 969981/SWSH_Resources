/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a11250; name: FUN_00a11250
 */


void FUN_00a11250(long param_1,uint param_2)

{
  if ((*(long *)(param_1 + 0xd0) == -0x340d631b7bddd9bb) || (*(long *)(param_1 + 0xd0) == 0)) {
    return;
  }
  FUN_00ffd510((float)(param_2 & 1),*(undefined8 *)(param_1 + 0x10));
  return;
}


