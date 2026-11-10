/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0071d360; name: FUN_0071d360
 */


void FUN_0071d360(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_1[1];
  lVar4 = param_1[2];
  while (lVar4 != lVar2) {
    plVar3 = (long *)(lVar4 + -0x40);
    param_1[2] = (long)plVar3;
    lVar5 = *(long *)(lVar4 + -0x38);
    if (lVar5 != 0) {
      lVar1 = *(long *)(lVar4 + -0x30);
      if (*(long *)(lVar4 + -0x30) == lVar5) {
        lVar1 = lVar5;
      }
      else {
        do {
          if (*(long *)(lVar1 + -0x10) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar1 + -0x10) + 0x48) + 0x18))();
            *(undefined8 *)(lVar1 + -0x10) = 0;
          }
          lVar6 = lVar1 + -0x18;
          if (*(long *)(lVar1 + -0x18) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar1 + -0x18) + 0x48) + 0x18))();
            *(undefined8 *)(lVar1 + -0x18) = 0;
          }
          lVar1 = lVar6;
        } while (lVar5 != lVar6);
        lVar1 = *(long *)(lVar4 + -0x38);
      }
      *(long *)(lVar4 + -0x30) = lVar5;
      (**(code **)(**(long **)(lVar4 + -0x20) + 0x18))
                (*(long **)(lVar4 + -0x20),lVar1,*(long *)(lVar4 + -0x28) - lVar1,8);
    }
    if (*plVar3 != 0) {
      (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
      *plVar3 = 0;
    }
    lVar4 = param_1[2];
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0071d46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)param_1[4] + 0x18))(*(long **)param_1[4],lVar2,param_1[3] - lVar2,8);
  return;
}


