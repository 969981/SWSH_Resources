/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d379c0; name: FUN_00d379c0
 */


void FUN_00d379c0(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
    return;
  }
  if ((long *)param_1[1] == plVar5) {
    plVar1 = plVar5;
  }
  else {
    plVar1 = (long *)param_1[1];
    do {
      plVar6 = plVar1 + -4;
      lVar3 = *plVar6;
      *plVar6 = 0;
      if (lVar3 != 0) {
        puVar4 = *(undefined8 **)(lVar3 + 0x28);
        *(undefined8 *)(lVar3 + 0x28) = 0;
        if (puVar4 != (undefined8 *)0x0) {
          pcVar2 = (code *)puVar4[1];
          if (pcVar2 != (code *)0x0) {
            puVar4[2] = 0;
            puVar4[3] = 0;
            *puVar4 = 0;
            puVar4[1] = 0;
            (*pcVar2)(puVar4 + 4);
          }
          (**(code **)(**(long **)(lVar3 + 0x30) + 0x18))
                    (*(long **)(lVar3 + 0x30),puVar4,*(undefined8 *)(lVar3 + 0x38),
                     *(undefined8 *)(lVar3 + 0x40));
        }
        puVar4 = *(undefined8 **)(lVar3 + 8);
        *(undefined8 *)(lVar3 + 8) = 0;
        if (puVar4 != (undefined8 *)0x0) {
          pcVar2 = (code *)puVar4[1];
          if (pcVar2 != (code *)0x0) {
            puVar4[2] = 0;
            puVar4[3] = 0;
            *puVar4 = 0;
            puVar4[1] = 0;
            (*pcVar2)(puVar4 + 4);
          }
          (**(code **)(**(long **)(lVar3 + 0x10) + 0x18))
                    (*(long **)(lVar3 + 0x10),puVar4,*(undefined8 *)(lVar3 + 0x18),
                     *(undefined8 *)(lVar3 + 0x20));
        }
        (**(code **)(*(long *)plVar1[-3] + 0x18))((long *)plVar1[-3],lVar3,plVar1[-2],plVar1[-1]);
      }
      plVar1 = plVar6;
    } while (plVar5 != plVar6);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar5;
                    /* WARNING: Could not recover jumptable at 0x00d37ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar1,param_1[2] - (long)plVar1,8);
  return;
}


