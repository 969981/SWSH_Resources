/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00487420; name: FUN_00487420
 */


uint FUN_00487420(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = FUN_00483010();
  lVar2 = *(long *)(param_1 + 0x70);
  if ((lVar2 != 0) && (*(short *)(lVar2 + 0x94) = *(short *)(lVar2 + 0x94) + 1, (param_2 & 1) != 0))
  {
    *(short *)(lVar2 + 0x96) = *(short *)(lVar2 + 0x96) + 1;
  }
  return uVar1 & 1;
}


