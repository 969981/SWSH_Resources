/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01276c90; name: FUN_01276c90
 */


void FUN_01276c90(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)param_1[4];
  param_1[4] = 0;
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    if (lVar4 != 0) {
      lVar1 = lVar4;
      lVar2 = plVar3[1];
      if (plVar3[1] != lVar4) {
        do {
          lVar1 = *(long *)(lVar2 + -0x28);
          lVar5 = lVar2 + -0x68;
          *(undefined8 *)(lVar2 + -0x28) = 0;
          if (lVar1 != 0) {
            (**(code **)(**(long **)(lVar2 + -0x20) + 0x18))
                      (*(long **)(lVar2 + -0x20),lVar1,*(undefined8 *)(lVar2 + -0x18),
                       *(undefined8 *)(lVar2 + -0x10));
          }
          lVar2 = lVar5;
        } while (lVar4 != lVar5);
        lVar1 = *plVar3;
      }
      plVar3[1] = lVar4;
      (**(code **)(*(long *)plVar3[3] + 0x18))((long *)plVar3[3],lVar1,plVar3[2] - lVar1,8);
    }
    (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],plVar3,param_1[6],param_1[7]);
  }
  plVar3 = (long *)*param_1;
  *param_1 = 0;
  if (plVar3 == (long *)0x0) {
    return;
  }
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = lVar4;
    lVar2 = plVar3[1];
    if (plVar3[1] != lVar4) {
      do {
        lVar1 = *(long *)(lVar2 + -0x28);
        lVar5 = lVar2 + -0x68;
        *(undefined8 *)(lVar2 + -0x28) = 0;
        if (lVar1 != 0) {
          (**(code **)(**(long **)(lVar2 + -0x20) + 0x18))
                    (*(long **)(lVar2 + -0x20),lVar1,*(undefined8 *)(lVar2 + -0x18),
                     *(undefined8 *)(lVar2 + -0x10));
        }
        lVar2 = lVar5;
      } while (lVar4 != lVar5);
      lVar1 = *plVar3;
    }
    plVar3[1] = lVar4;
    (**(code **)(*(long *)plVar3[3] + 0x18))((long *)plVar3[3],lVar1,plVar3[2] - lVar1,8);
  }
                    /* WARNING: Could not recover jumptable at 0x01276dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],plVar3,param_1[2],param_1[3]);
  return;
}


