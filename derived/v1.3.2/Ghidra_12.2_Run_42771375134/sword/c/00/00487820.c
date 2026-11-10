/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00487820; name: FUN_00487820
 */


void FUN_00487820(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if ((((lVar1 == 0) || (0 < *(short *)(lVar1 + 0x90))) || (0 < *(short *)(lVar1 + 0x94))) ||
     (((*(short *)(lVar1 + 0x88) != 0 || (*(short *)(lVar1 + 0x8a) != 0)) ||
      ((*(long *)(lVar1 + 0x10) != 0 || (*(int *)(lVar1 + 8) != 0)))))) {
    return;
  }
  FUN_00481ff0();
  return;
}


