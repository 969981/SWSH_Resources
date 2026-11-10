/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe4710; name: FUN_00fe4710
 */


void FUN_00fe4710(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  
  plVar1 = *(long **)(param_1 + 0x60);
  if (*(long **)(param_1 + 0x68) != plVar1) {
    plVar6 = *(long **)(param_1 + 0x68);
    do {
      plVar5 = plVar6 + -4;
      lVar3 = *plVar5;
      *plVar5 = 0;
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
        (**(code **)(*(long *)plVar6[-3] + 0x18))((long *)plVar6[-3],lVar3,plVar6[-2],plVar6[-1]);
      }
      plVar6 = plVar5;
    } while (plVar1 != plVar5);
  }
  *(long **)(param_1 + 0x68) = plVar1;
  plVar1 = *(long **)(param_1 + 0x90);
  if (*(long **)(param_1 + 0x98) != plVar1) {
    plVar6 = *(long **)(param_1 + 0x98);
    do {
      plVar5 = plVar6 + -4;
      lVar3 = *plVar5;
      *plVar5 = 0;
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
        (**(code **)(*(long *)plVar6[-3] + 0x18))((long *)plVar6[-3],lVar3,plVar6[-2],plVar6[-1]);
      }
      plVar6 = plVar5;
    } while (plVar1 != plVar5);
  }
  *(long **)(param_1 + 0x98) = plVar1;
  return;
}


