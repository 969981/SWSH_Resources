/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00488060; name: FUN_00488060
 */


undefined4 FUN_00488060(long param_1,uint param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar1 = FUN_00483010();
  lVar3 = *(long *)(param_1 + 0x70);
  if ((lVar3 != 0) && (*(short *)(lVar3 + 0x90) = *(short *)(lVar3 + 0x90) + 1, (param_2 & 1) != 0))
  {
    *(short *)(lVar3 + 0x92) = *(short *)(lVar3 + 0x92) + 1;
  }
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}


