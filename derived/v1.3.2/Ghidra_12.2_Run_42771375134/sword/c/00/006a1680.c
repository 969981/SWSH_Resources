/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a1680; name: FUN_006a1680
 */


void FUN_006a1680(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(long *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  do {
    while( true ) {
      if (lVar1 == lVar2) {
        return;
      }
      iVar3 = FUN_006a2210(lVar1);
      FUN_006a2190(param_1,lVar1);
      iVar4 = FUN_006a2210(lVar1);
      if (iVar3 != 1) break;
      if (iVar4 != 1) {
        FUN_006a1750(param_2,lVar1,1);
      }
joined_r0x006a1714:
      lVar1 = lVar1 + 0x30;
    }
    if ((iVar4 != 1) && (iVar4 != 0 || iVar3 != 0)) goto joined_r0x006a1714;
    FUN_006a1750(param_2,lVar1,iVar3);
    lVar1 = lVar1 + 0x30;
  } while( true );
}


