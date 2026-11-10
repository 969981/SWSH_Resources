/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01539170; name: FUN_01539170
 */


undefined4 FUN_01539170(long param_1)

{
  uint uVar1;
  
  if ((*(short *)(param_1 + 0x27e) == 0) || (uVar1 = *(ushort *)(param_1 + 0x27c) - 0x4c, 3 < uVar1)
     ) {
    return 0;
  }
  return *(undefined4 *)(&DAT_01d4acf0 + (long)(short)uVar1 * 4);
}


