/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072ae20; name: FUN_0072ae20
 */


void FUN_0072ae20(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02715bc0 + 0x50;
  *param_1 = (long)(PTR_DAT_02715bc0 + 0x10);
  param_1[9] = (long)puVar1;
  puVar1 = PTR_DAT_027155e8;
  FUN_019a44c0(param_1 + 0xf0,PTR_DAT_027155e8);
  FUN_019a4910(param_1 + 0xfe,puVar1);
  if (param_1[0x119] != 0) {
    FUN_019a4730(param_1 + 0x10a,PTR_DAT_027155e8);
    lVar2 = param_1[0x119];
    param_1[0x119] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)param_1[0x11a] + 0x18))
                ((long *)param_1[0x11a],lVar2,param_1[0x11b],param_1[0x11c]);
      lVar2 = param_1[0x119];
      param_1[0x119] = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)param_1[0x11a] + 0x18))
                  ((long *)param_1[0x11a],lVar2,param_1[0x11b],param_1[0x11c]);
      }
      goto LAB_0072aedc;
    }
  }
  param_1[0x119] = 0;
LAB_0072aedc:
  FUN_019a44f0(param_1 + 0x10a);
  FUN_019a4750(param_1 + 0xfe);
  FUN_019a42e0(param_1 + 0xf0);
  lVar2 = param_1[0xea];
  if (lVar2 != 0) {
    lVar3 = param_1[0xeb];
    if (lVar3 == lVar2) {
      lVar3 = lVar2;
    }
    else {
      do {
        lVar3 = lVar3 + -0x1f0;
        FUN_00784490(lVar3);
      } while (lVar2 != lVar3);
      lVar3 = param_1[0xea];
    }
    param_1[0xeb] = lVar2;
    (**(code **)(*(long *)param_1[0xed] + 0x18))
              ((long *)param_1[0xed],lVar3,param_1[0xec] - lVar3,0x10);
  }
  FUN_0072af90(param_1 + 0x12);
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
    param_1[0x11] = 0;
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x5c));
  FUN_006f68a0(param_1);
  return;
}


