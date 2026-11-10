/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006da680; name: FUN_006da680
 */


undefined8 FUN_006da680(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = (**(code **)(*(long *)*param_2 + 0x30))();
  uVar2 = (**(code **)(*(long *)*param_1 + 0x30))();
  uVar3 = (**(code **)(*(long *)*param_3 + 0x30))();
  uVar4 = (**(code **)(*(long *)*param_2 + 0x30))();
  if (uVar1 < uVar2) {
    lVar6 = *param_1;
    *param_1 = 0;
    if (uVar3 < uVar4) {
      lVar5 = *param_3;
      *param_3 = 0;
      *param_1 = lVar5;
      if ((long *)*param_3 != (long *)0x0) {
        (**(code **)(*(long *)*param_3 + 0x18))();
        *param_3 = 0;
      }
      *param_3 = lVar6;
    }
    else {
      lVar5 = *param_2;
      *param_2 = 0;
      *param_1 = lVar5;
      if ((long *)*param_2 != (long *)0x0) {
        (**(code **)(*(long *)*param_2 + 0x18))();
        *param_2 = 0;
      }
      *param_2 = lVar6;
      uVar1 = (**(code **)(*(long *)*param_3 + 0x30))();
      uVar2 = (**(code **)(*(long *)*param_2 + 0x30))();
      if (uVar1 < uVar2) {
        lVar5 = *param_2;
        *param_2 = 0;
        lVar6 = *param_3;
        *param_3 = 0;
        *param_2 = lVar6;
        if ((long *)*param_3 != (long *)0x0) {
          (**(code **)(*(long *)*param_3 + 0x18))();
          *param_3 = 0;
        }
        *param_3 = lVar5;
        return 2;
      }
    }
  }
  else {
    if (uVar4 <= uVar3) {
      return 0;
    }
    lVar5 = *param_2;
    *param_2 = 0;
    lVar6 = *param_3;
    *param_3 = 0;
    *param_2 = lVar6;
    if ((long *)*param_3 != (long *)0x0) {
      (**(code **)(*(long *)*param_3 + 0x18))();
      *param_3 = 0;
    }
    *param_3 = lVar5;
    uVar1 = (**(code **)(*(long *)*param_2 + 0x30))();
    uVar2 = (**(code **)(*(long *)*param_1 + 0x30))();
    if (uVar1 < uVar2) {
      lVar5 = *param_1;
      *param_1 = 0;
      lVar6 = *param_2;
      *param_2 = 0;
      *param_1 = lVar6;
      if ((long *)*param_2 != (long *)0x0) {
        (**(code **)(*(long *)*param_2 + 0x18))();
        *param_2 = 0;
      }
      *param_2 = lVar5;
      return 2;
    }
  }
  return 1;
}


