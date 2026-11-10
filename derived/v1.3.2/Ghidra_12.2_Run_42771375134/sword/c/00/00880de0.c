/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00880de0; name: FUN_00880de0
 */


char FUN_00880de0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  FUN_00881490(DAT_029f6120,param_1);
  iVar2 = FUN_00881dd0(DAT_029f6120,0);
  iVar3 = FUN_00881dd0(DAT_029f6120,1);
  cVar4 = '\x02';
  if (iVar3 == 0) {
    cVar4 = '\x01';
  }
  cVar1 = iVar3 != 0;
  if (iVar2 != 0) {
    cVar1 = cVar4;
  }
  iVar2 = FUN_00881dd0(DAT_029f6120,2);
  if (iVar2 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


