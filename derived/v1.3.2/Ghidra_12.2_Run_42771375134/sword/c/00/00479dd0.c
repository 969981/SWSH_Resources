/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00479dd0; name: FUN_00479dd0
 */


void FUN_00479dd0(long *param_1,int *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  *param_1 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x22) + 0x18);
    if (lVar3 != 0) {
      FUN_0045b670(lVar3);
      lVar1 = *param_1;
      *param_1 = lVar3;
      if (lVar1 != 0) {
        FUN_0045b680();
        lVar3 = *param_1;
      }
      lVar1 = FUN_0047a090(param_3 + 200,lVar3);
      if (lVar1 != 0) {
        iVar2 = *(int *)(lVar1 + 8);
        if (iVar2 == 0) {
          FUN_0045b670(lVar3);
          iVar2 = *(int *)(lVar1 + 8);
        }
        *(int *)(lVar1 + 8) = iVar2 + 1;
      }
    }
  }
  return;
}


