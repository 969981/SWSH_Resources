/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cbc80; name: FUN_006cbc80
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_006cbc80(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_02715298;
  puVar2 = PTR_DAT_02715288;
  puVar1 = PTR_DAT_02715280;
  if (*(long *)(param_2 + 0x48) != 0) {
    plVar14 = *(long **)(param_2 + 0x40);
    do {
      if ((*plVar14 != 0) &&
         (puVar12 = *(undefined8 **)(*plVar14 + 0x60), puVar12 != (undefined8 *)0x0)) {
        plVar5 = (long *)(**(code **)*puVar12)(puVar12);
        if (((*PTR_DAT_02715290 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_02715290), iVar4 != 0)) {
          uVar6 = FUN_01590a70();
          *(undefined8 *)puVar3 = uVar6;
          __cxa_guard_release(PTR_DAT_02715290);
        }
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)puVar3) {
            if ((*(char *)(puVar12 + 2) != '\0') && (*(long *)(param_3 + 0x48) != 0)) {
              plVar10 = *(long **)(param_3 + 0x40);
              plVar5 = puVar12 + 0x22;
              puVar11 = puVar12 + -10;
              do {
                if ((*plVar10 != 0) &&
                   (puVar13 = *(undefined8 **)(*plVar10 + 0x60), puVar13 != (undefined8 *)0x0)) {
                  plVar7 = (long *)(**(code **)*puVar13)(puVar13);
                  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
                    uVar6 = FUN_01590a70();
                    *(undefined8 *)puVar2 = uVar6;
                    __cxa_guard_release(puVar1);
                  }
                  for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
                    if (plVar7 == (long *)puVar2) {
                      if (*(char *)(puVar13 + 2) != '\0') {
                        local_70 = 0;
                        uStack_68 = 0;
                        uVar8 = FUN_006cbf20(puVar13 + -10,puVar11,&local_70);
                        if ((uVar8 & 1) != 0) {
                          plVar7 = plVar5;
                          if (puVar13[0x22] == 0) {
                            puVar13[0x22] = puVar11;
                            lVar9 = *plVar5;
joined_r0x006cbe78:
                            if (lVar9 != 0) goto LAB_006cbe3c;
LAB_006cbebc:
                            *plVar7 = (long)(puVar13 + -10);
                          }
                          else {
                            if (puVar13[0x23] == 0) {
                              puVar13[0x23] = puVar11;
                              lVar9 = *plVar5;
                            }
                            else {
                              if (puVar13[0x24] != 0) {
                                if (puVar13[0x25] == 0) {
                                  puVar13[0x25] = puVar11;
                                  lVar9 = *plVar5;
                                }
                                else {
                                  lVar9 = *plVar5;
                                }
                                goto joined_r0x006cbe78;
                              }
                              puVar13[0x24] = puVar11;
                              lVar9 = *plVar5;
                            }
                            if (lVar9 == 0) goto LAB_006cbebc;
LAB_006cbe3c:
                            plVar7 = puVar12 + 0x23;
                            if ((puVar12[0x23] == 0) ||
                               (plVar7 = puVar12 + 0x24, puVar12[0x24] == 0)) goto LAB_006cbebc;
                            if (puVar12[0x25] == 0) {
                              plVar7 = puVar12 + 0x25;
                              goto LAB_006cbebc;
                            }
                          }
                          if (*(char *)(puVar13 + 0x2c) != '\0') {
                            puVar13[5] = CONCAT44((float)((ulong)puVar13[5] >> 0x20) +
                                                  (float)((ulong)uStack_68 >> 0x20),
                                                  (float)puVar13[5] + (float)uStack_68);
                            puVar13[4] = CONCAT44((float)((ulong)puVar13[4] >> 0x20) +
                                                  (float)((ulong)local_70 >> 0x20),
                                                  (float)puVar13[4] + (float)local_70);
                          }
                        }
                      }
                      break;
                    }
                  }
                }
                plVar10 = plVar10 + 1;
              } while (plVar10 !=
                       (long *)(*(long *)(param_3 + 0x40) + *(long *)(param_3 + 0x48) * 8));
            }
            break;
          }
        }
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != (long *)(*(long *)(param_2 + 0x40) + *(long *)(param_2 + 0x48) * 8));
  }
  return;
}


