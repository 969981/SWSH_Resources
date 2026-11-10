/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00877490; name: FUN_00877490
 */


int FUN_00877490(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  
  FUN_008649f0();
  cVar2 = FUN_00864a10(0x14);
  if ((byte)(cVar2 + 2U) < 3) {
    return *(int *)(&DAT_01d4d2d0 + (long)(char)(cVar2 + 2U) * 4);
  }
  iVar1 = 0;
  if (param_3 != 2) {
    iVar1 = param_3;
  }
  return iVar1;
}


