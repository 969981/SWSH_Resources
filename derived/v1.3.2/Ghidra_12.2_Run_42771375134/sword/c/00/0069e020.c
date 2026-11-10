/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069e020; name: FUN_0069e020
 */


void FUN_0069e020(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar5 = param_1[1];
  if (lVar5 == lVar4) {
    lVar5 = lVar4;
  }
  else {
    puVar1 = PTR_DAT_02710a48 + 0x10;
    do {
      FUN_0069e180(lVar5 + -0xb0);
      *(undefined **)(lVar5 + -0x1f0) = puVar1;
      plVar6 = (long *)(lVar5 + -0x1e8);
      if (*plVar6 == 0) {
        *plVar6 = 0;
        pcVar3 = *(code **)(lVar5 + -0x158);
      }
      else {
        FUN_006e2100();
        lVar2 = *plVar6;
        *plVar6 = 0;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        }
        pcVar3 = *(code **)(lVar5 + -0x158);
      }
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar5 + -0x148) = 0;
        *(undefined8 *)(lVar5 + -0x150) = 0;
        *(undefined8 *)(lVar5 + -0x158) = 0;
        *(undefined8 *)(lVar5 + -0x160) = 0;
        (*pcVar3)(lVar5 + -0x140);
      }
      pcVar3 = *(code **)(lVar5 + -0x1d8);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar5 + -0x1c8) = 0;
        *(undefined8 *)(lVar5 + -0x1d0) = 0;
        *(undefined8 *)(lVar5 + -0x1d8) = 0;
        *(undefined8 *)(lVar5 + -0x1e0) = 0;
        (*pcVar3)(lVar5 + -0x1c0);
      }
      lVar5 = lVar5 + -0x200;
      if (*plVar6 != 0) {
        (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
        *plVar6 = 0;
      }
    } while (lVar4 != lVar5);
    lVar5 = *param_1;
  }
  param_1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x0069e174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar5,param_1[2] - lVar5,0x10);
  return;
}


