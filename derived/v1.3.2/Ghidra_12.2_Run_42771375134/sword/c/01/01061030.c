/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01061030; name: FUN_01061030
 */


void FUN_01061030(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)(param_1 + 0x98);
  if ((*(long *)*puVar3 != 0) && (*(int *)(*(long *)*puVar3 + 0x54) != 0)) {
    puVar3 = (undefined8 *)(param_1 + 0xb8);
    if ((*(long *)*puVar3 != 0) && (*(int *)(*(long *)*puVar3 + 0x54) != 0)) {
      puVar3 = (undefined8 *)(param_1 + 0xd8);
      if ((*(long *)*puVar3 != 0) && (*(int *)(*(long *)*puVar3 + 0x54) != 0)) {
        puVar3 = (undefined8 *)(param_1 + 0xf8);
        if ((*(long *)*puVar3 != 0) && (*(int *)(*(long *)*puVar3 + 0x54) != 0)) {
          puVar3 = (undefined8 *)(param_1 + 0x118);
          if ((**(long **)(param_1 + 0x118) != 0) &&
             (*(int *)(**(long **)(param_1 + 0x118) + 0x54) != 0)) {
            puVar3 = (undefined8 *)(param_1 + 0x138);
            if ((**(long **)(param_1 + 0x138) != 0) &&
               (*(int *)(**(long **)(param_1 + 0x138) + 0x54) != 0)) {
              puVar3 = (undefined8 *)(param_1 + 0x158);
              if ((**(long **)(param_1 + 0x158) != 0) &&
                 (*(int *)(**(long **)(param_1 + 0x158) + 0x54) != 0)) {
                puVar3 = (undefined8 *)(param_1 + 0x178);
                if ((**(long **)(param_1 + 0x178) != 0) &&
                   (*(int *)(**(long **)(param_1 + 0x178) + 0x54) != 0)) {
                  puVar3 = (undefined8 *)(param_1 + 0x198);
                  if ((**(long **)(param_1 + 0x198) != 0) &&
                     (*(int *)(**(long **)(param_1 + 0x198) + 0x54) != 0)) {
                    puVar3 = (undefined8 *)(param_1 + 0x1b8);
                    if ((**(long **)(param_1 + 0x1b8) != 0) &&
                       (*(int *)(**(long **)(param_1 + 0x1b8) + 0x54) != 0)) {
                      puVar3 = (undefined8 *)(param_1 + 0x1d8);
                      if ((**(long **)(param_1 + 0x1d8) != 0) &&
                         (*(int *)(**(long **)(param_1 + 0x1d8) + 0x54) != 0)) {
                        puVar3 = (undefined8 *)(param_1 + 0x1f8);
                        if ((**(long **)(param_1 + 0x1f8) != 0) &&
                           (*(int *)(**(long **)(param_1 + 0x1f8) + 0x54) != 0)) {
                          puVar3 = (undefined8 *)(param_1 + 0x218);
                          if ((**(long **)(param_1 + 0x218) != 0) &&
                             (*(int *)(**(long **)(param_1 + 0x218) + 0x54) != 0)) {
                            puVar3 = (undefined8 *)(param_1 + 0x238);
                            if ((**(long **)(param_1 + 0x238) != 0) &&
                               (*(int *)(**(long **)(param_1 + 0x238) + 0x54) != 0)) {
                              puVar3 = (undefined8 *)(param_1 + 600);
                              if ((**(long **)(param_1 + 600) != 0) &&
                                 (*(int *)(**(long **)(param_1 + 600) + 0x54) != 0)) {
                                puVar3 = (undefined8 *)(param_1 + 0x278);
                                if ((**(long **)(param_1 + 0x278) != 0) &&
                                   (*(int *)(**(long **)(param_1 + 0x278) + 0x54) != 0)) {
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  plVar4 = (long *)*puVar3;
  lVar5 = *param_2;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar2 = *plVar4;
  *plVar4 = lVar5;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  plVar4[1] = param_2[1];
  lVar1 = param_2[4];
  lVar5 = param_2[2];
  lVar2 = param_2[3];
  *(undefined1 *)((long)plVar4 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  *(short *)(plVar4 + 4) = (short)lVar1;
  plVar4[2] = lVar5;
  plVar4[3] = lVar2;
  return;
}


