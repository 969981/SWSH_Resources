/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dd0a0; name: FUN_008dd0a0
 */


long FUN_008dd0a0(long param_1,char param_2,char param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x1608);
  while ((lVar3 != 0 &&
         ((((uVar2 = FUN_008dba10(lVar3), (uVar2 & 1) == 0 ||
            (cVar1 = FUN_008db9d0(lVar3), cVar1 != param_2)) ||
           (cVar1 = FUN_008db9f0(lVar3), cVar1 != param_3)) ||
          (uVar2 = FUN_008dba20(lVar3), (uVar2 & 1) != 0))))) {
    lVar3 = FUN_008db990(lVar3);
  }
  return lVar3;
}


