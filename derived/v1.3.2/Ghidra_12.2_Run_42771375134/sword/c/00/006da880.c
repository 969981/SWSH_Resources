/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006da880; name: FUN_006da880
 */


int FUN_006da880(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = FUN_006da680();
  uVar2 = (**(code **)(*(long *)*param_4 + 0x30))();
  uVar3 = (**(code **)(*(long *)*param_3 + 0x30))();
  if (uVar2 < uVar3) {
    lVar5 = *param_3;
    *param_3 = 0;
    lVar4 = *param_4;
    *param_4 = 0;
    *param_3 = lVar4;
    if ((long *)*param_4 != (long *)0x0) {
      (**(code **)(*(long *)*param_4 + 0x18))();
      *param_4 = 0;
    }
    *param_4 = lVar5;
    uVar2 = (**(code **)(*(long *)*param_3 + 0x30))();
    uVar3 = (**(code **)(*(long *)*param_2 + 0x30))();
    if (uVar2 < uVar3) {
      lVar5 = *param_2;
      *param_2 = 0;
      lVar4 = *param_3;
      *param_3 = 0;
      *param_2 = lVar4;
      if ((long *)*param_3 != (long *)0x0) {
        (**(code **)(*(long *)*param_3 + 0x18))();
        *param_3 = 0;
      }
      *param_3 = lVar5;
      uVar2 = (**(code **)(*(long *)*param_2 + 0x30))();
      uVar3 = (**(code **)(*(long *)*param_1 + 0x30))();
      if (uVar2 < uVar3) {
        lVar5 = *param_1;
        *param_1 = 0;
        lVar4 = *param_2;
        *param_2 = 0;
        *param_1 = lVar4;
        if ((long *)*param_2 != (long *)0x0) {
          (**(code **)(*(long *)*param_2 + 0x18))();
          *param_2 = 0;
        }
        iVar1 = iVar1 + 3;
        *param_2 = lVar5;
      }
      else {
        iVar1 = iVar1 + 2;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


