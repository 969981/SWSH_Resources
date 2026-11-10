/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6a390; name: FUN_00c6a390
 */


void FUN_00c6a390(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 == 0) {
    return;
  }
  uVar1 = FUN_00c6b140(lVar2 + 0x50);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  FUN_00c71970(lVar2,0,param_2 & 1);
  return;
}


