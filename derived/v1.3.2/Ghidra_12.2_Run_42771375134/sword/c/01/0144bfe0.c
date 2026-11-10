/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144bfe0; name: FUN_0144bfe0
 */


void FUN_0144bfe0(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_0152d930(lVar3,param_2,1);
  FUN_0152e1e0(lVar3,param_2,1);
  iVar1 = FUN_01451b60(param_1,param_2);
  if (iVar1 == 3) {
    iVar1 = 0;
    do {
      iVar2 = FUN_01451b60(param_1,iVar1);
      if ((iVar2 == 2) && (iVar2 = FUN_01452100(param_1,iVar1), iVar2 == param_2 + 1)) {
        FUN_0152d930(lVar3,iVar1,0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0xa7);
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0144c0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


