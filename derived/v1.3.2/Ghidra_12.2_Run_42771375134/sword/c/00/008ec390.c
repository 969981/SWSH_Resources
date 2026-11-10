/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ec390; name: FUN_008ec390
 */


bool FUN_008ec390(byte param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  if (3 < param_1) {
    return false;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = (int)(uint)(byte)(&DAT_01d4c3a4)[param_1] / param_2;
  }
  uVar1 = uVar2 & 0xff;
  if ((uVar2 & 0xff) == 0) {
    uVar1 = 1;
  }
  cVar3 = FUN_008ed5b0(DAT_02a4d198,uVar1);
  return cVar3 == '\0';
}


