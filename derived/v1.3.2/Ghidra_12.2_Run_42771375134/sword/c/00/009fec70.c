/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fec70; name: FUN_009fec70
 */


bool FUN_009fec70(long param_1)

{
  short sVar1;
  short sVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x180);
  if (lVar3 == 0) {
    return false;
  }
  sVar1 = *(short *)(lVar3 + 0x235c);
  sVar2 = FUN_0075dd70(lVar3 + 0x60,0x22fc);
  return sVar2 == sVar1;
}


