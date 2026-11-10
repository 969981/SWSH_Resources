/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a3fe60; name: FUN_00a3fe60
 */


void FUN_00a3fe60(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar3 = (long *)param_2[0x10];
  *param_2 = (long)(PTR_DAT_02719280 + 0x10);
  param_2[0x10] = 0;
  if (plVar3 != (long *)0x0) {
    *plVar3 = (long)(PTR_DAT_02719298 + 0x10);
    if (plVar3[0x15] != 0) {
      (**(code **)(*(long *)(plVar3[0x15] + 0x48) + 0x18))();
      plVar3[0x15] = 0;
    }
    lVar4 = plVar3[0x10];
    plVar3[0x10] = 0;
    if (lVar4 != 0) {
      uVar2 = plVar3[0x12];
      if (0xa7 < uVar2) {
        uVar5 = 0;
        plVar6 = (long *)(lVar4 + 0x90);
        puVar1 = PTR_DAT_027192a0 + 0x10;
        do {
          plVar6[-0x12] = (long)puVar1;
          if (*plVar6 != 0) {
            (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
            *plVar6 = 0;
          }
          uVar5 = uVar5 + 1;
          plVar6 = plVar6 + 0x15;
        } while (uVar5 < uVar2 / 0xa8);
        uVar2 = plVar3[0x12];
      }
      (**(code **)(*(long *)plVar3[0x11] + 0x18))((long *)plVar3[0x11],lVar4,uVar2,plVar3[0x13]);
    }
    (**(code **)(*(long *)param_2[0x11] + 0x18))
              ((long *)param_2[0x11],plVar3,param_2[0x12],param_2[0x13]);
  }
                    /* WARNING: Could not recover jumptable at 0x00a3ff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


