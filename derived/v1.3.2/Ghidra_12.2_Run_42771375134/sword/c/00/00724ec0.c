/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00724ec0; name: FUN_00724ec0
 */


void FUN_00724ec0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  float fVar20;
  undefined4 local_90;
  int iStack_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  long local_78;
  
  lVar5 = *(long *)(param_1 + 0x328) - *(long *)(param_1 + 800);
  if (lVar5 != 0) {
    uVar16 = (lVar5 >> 3) * -0x70a3d70a3d70a3d7;
    uVar19 = 0;
    do {
      FUN_006cf0a0(&local_90,&DAT_0260b838);
      lVar5 = *(long *)(*(long *)(param_1 + 0x218) + 0x290) + uVar19 * 0x4c0;
      plVar1 = *(long **)(lVar5 + 0x108);
      plVar2 = *(long **)(lVar5 + 0x110);
      plVar15 = plVar1;
      if (plVar1 == plVar2) {
        plVar14 = plVar2;
      }
      else {
        plVar14 = plVar1;
        if (*plVar1 != CONCAT44(iStack_8c,local_90)) {
          do {
            plVar14 = plVar14 + 4;
            if (plVar2 == plVar14) {
              plVar14 = plVar2;
              plVar15 = plVar2;
              goto LAB_00724fa8;
            }
          } while (*plVar14 != CONCAT44(iStack_8c,local_90));
          plVar15 = plVar14;
        }
      }
LAB_00724fa8:
      uVar9 = (uint)((ulong)((long)plVar15 - (long)plVar1) >> 5);
      if (plVar14 == plVar2) {
        uVar9 = 0xffffffff;
      }
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (-1 < (int)uVar9) {
        piVar6 = *(int **)(*(long *)(*(long *)(param_1 + 0x218) + 0x290) + uVar19 * 0x4c0 + 0x40);
        puVar7 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (0x2c - (long)*piVar6)));
        piVar6 = (int *)((long)puVar7 + (ulong)*puVar7);
        puVar7 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6)));
        puVar7 = (uint *)((long)puVar7 + (ulong)uVar9 * 4 + (ulong)*puVar7 + 4);
        piVar6 = (int *)((long)puVar7 + (ulong)*puVar7);
        if (((6 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
            (uVar12 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar12 != 0)) &&
           (*(char *)((long)piVar6 + uVar12) != '\0')) {
          FUN_006cf0a0(&local_90,&DAT_0260b850);
          lVar5 = *(long *)(*(long *)(param_1 + 0x218) + 0x290) + uVar19 * 0x4c0;
          plVar1 = *(long **)(lVar5 + 0x108);
          plVar2 = *(long **)(lVar5 + 0x110);
          plVar15 = plVar1;
          if (plVar1 == plVar2) {
            plVar14 = plVar2;
          }
          else {
            plVar14 = plVar1;
            if (*plVar1 != CONCAT44(iStack_8c,local_90)) {
              do {
                plVar14 = plVar14 + 4;
                if (plVar2 == plVar14) {
                  plVar14 = plVar2;
                  plVar15 = plVar2;
                  goto LAB_007250b8;
                }
              } while (*plVar14 != CONCAT44(iStack_8c,local_90));
              plVar15 = plVar14;
            }
          }
LAB_007250b8:
          uVar9 = (uint)((ulong)((long)plVar15 - (long)plVar1) >> 5);
          if (plVar14 == plVar2) {
            uVar9 = 0xffffffff;
          }
          if (local_78 != 0) {
            (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
            local_78 = 0;
          }
          if (-1 < (int)uVar9) {
            piVar6 = *(int **)(*(long *)(*(long *)(param_1 + 0x218) + 0x290) + uVar19 * 0x4c0 + 0x40
                              );
            puVar7 = (uint *)((long)piVar6 +
                             (ulong)*(ushort *)((long)piVar6 + (0x2c - (long)*piVar6)));
            piVar6 = (int *)((long)puVar7 + (ulong)*puVar7);
            puVar7 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6)))
            ;
            puVar7 = (uint *)((long)puVar7 + (ulong)uVar9 * 4 + (ulong)*puVar7 + 4);
            piVar6 = (int *)((long)puVar7 + (ulong)*puVar7);
            if (((6 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
                (uVar12 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar12 != 0)) &&
               (*(char *)((long)piVar6 + uVar12) != '\0')) {
              FUN_006cf0a0(&local_90,&DAT_0260b868);
              lVar5 = *(long *)(*(long *)(param_1 + 0x218) + 0x290) + uVar19 * 0x4c0;
              plVar1 = *(long **)(lVar5 + 0xa8);
              plVar2 = *(long **)(lVar5 + 0xb0);
              plVar15 = plVar1;
              if (plVar1 == plVar2) {
                plVar14 = plVar2;
              }
              else {
                plVar14 = plVar1;
                if (*plVar1 != CONCAT44(iStack_8c,local_90)) {
                  do {
                    plVar14 = plVar14 + 4;
                    if (plVar2 == plVar14) {
                      plVar14 = plVar2;
                      plVar15 = plVar2;
                      goto LAB_007251cc;
                    }
                  } while (*plVar14 != CONCAT44(iStack_8c,local_90));
                  plVar15 = plVar14;
                }
              }
LAB_007251cc:
              iVar10 = (int)((ulong)((long)plVar15 - (long)plVar1) >> 5);
              if (plVar14 == plVar2) {
                iVar10 = -1;
              }
              if (local_78 != 0) {
                (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
                local_78 = 0;
              }
              if ((ulong)((*(long *)(param_1 + 0x328) - *(long *)(param_1 + 800) >> 3) *
                         -0x70a3d70a3d70a3d7) <= uVar19) {
LAB_00725754:
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_out_of_range();
              }
              lVar5 = *(long *)(param_1 + 800) + uVar19 * 200;
              lVar8 = *(long *)(lVar5 + 0x50);
              if ((ulong)(*(long *)(lVar5 + 0x58) - lVar8 >> 2) <= (ulong)(long)iVar10)
              goto LAB_00725754;
              fVar20 = *(float *)(lVar8 + (long)iVar10 * 4);
              uVar12 = 0;
              do {
                FUN_006cf0a0(&local_90,&DAT_0260b838);
                lVar5 = *(long *)(*(long *)(param_1 + 0x218) + 0x290) + uVar12 * 0x4c0;
                plVar1 = *(long **)(lVar5 + 0x108);
                plVar2 = *(long **)(lVar5 + 0x110);
                plVar15 = plVar1;
                if (plVar1 == plVar2) {
                  plVar14 = plVar2;
                }
                else {
                  plVar14 = plVar1;
                  if (*plVar1 != CONCAT44(iStack_8c,local_90)) {
                    do {
                      plVar14 = plVar14 + 4;
                      if (plVar2 == plVar14) {
                        plVar14 = plVar2;
                        plVar15 = plVar2;
                        goto LAB_007252c0;
                      }
                    } while (*plVar14 != CONCAT44(iStack_8c,local_90));
                    plVar15 = plVar14;
                  }
                }
LAB_007252c0:
                uVar9 = (uint)((ulong)((long)plVar15 - (long)plVar1) >> 5);
                if (plVar14 == plVar2) {
                  uVar9 = 0xffffffff;
                }
                if (local_78 != 0) {
                  (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
                  local_78 = 0;
                }
                if ((int)uVar9 < 0) {
LAB_0072535c:
                  FUN_006cf0a0(&local_90,&DAT_0260b850);
                  lVar5 = *(long *)(*(long *)(param_1 + 0x218) + 0x290) + uVar12 * 0x4c0;
                  plVar1 = *(long **)(lVar5 + 0x108);
                  plVar2 = *(long **)(lVar5 + 0x110);
                  plVar15 = plVar1;
                  if (plVar1 == plVar2) {
                    plVar14 = plVar2;
                  }
                  else {
                    plVar14 = plVar1;
                    if (*plVar1 != CONCAT44(iStack_8c,local_90)) {
                      do {
                        plVar14 = plVar14 + 4;
                        if (plVar2 == plVar14) {
                          plVar14 = plVar2;
                          plVar15 = plVar2;
                          goto LAB_007253d0;
                        }
                      } while (*plVar14 != CONCAT44(iStack_8c,local_90));
                      plVar15 = plVar14;
                    }
                  }
LAB_007253d0:
                  uVar9 = (uint)((ulong)((long)plVar15 - (long)plVar1) >> 5);
                  if (plVar14 == plVar2) {
                    uVar9 = 0xffffffff;
                  }
                  if (local_78 != 0) {
                    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
                    local_78 = 0;
                  }
                  if (-1 < (int)uVar9) {
                    piVar6 = *(int **)(*(long *)(*(long *)(param_1 + 0x218) + 0x290) +
                                       uVar12 * 0x4c0 + 0x40);
                    puVar7 = (uint *)((long)piVar6 +
                                     (ulong)*(ushort *)((long)piVar6 + (0x2c - (long)*piVar6)));
                    piVar6 = (int *)((long)puVar7 + (ulong)*puVar7);
                    puVar7 = (uint *)((long)piVar6 +
                                     (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6)));
                    puVar7 = (uint *)((long)puVar7 + (ulong)uVar9 * 4 + (ulong)*puVar7 + 4);
                    piVar6 = (int *)((long)puVar7 + (ulong)*puVar7);
                    if (((6 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
                        (uVar13 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar13 != 0)
                        ) && (*(char *)((long)piVar6 + uVar13) != '\0')) goto LAB_0072556c;
                  }
                  FUN_006cf0a0(&local_90,&DAT_0260b868);
                  lVar5 = *(long *)(*(long *)(param_1 + 0x218) + 0x290) + uVar12 * 0x4c0;
                  plVar1 = *(long **)(lVar5 + 0xa8);
                  plVar2 = *(long **)(lVar5 + 0xb0);
                  plVar15 = plVar1;
                  if (plVar1 == plVar2) {
                    plVar14 = plVar2;
                  }
                  else {
                    plVar14 = plVar1;
                    if (*plVar1 != CONCAT44(iStack_8c,local_90)) {
                      do {
                        plVar14 = plVar14 + 4;
                        if (plVar2 == plVar14) {
                          plVar14 = plVar2;
                          plVar15 = plVar2;
                          goto LAB_007254e4;
                        }
                      } while (*plVar14 != CONCAT44(iStack_8c,local_90));
                      plVar15 = plVar14;
                    }
                  }
LAB_007254e4:
                  iVar11 = (int)((ulong)((long)plVar15 - (long)plVar1) >> 5);
                  if (plVar14 == plVar2) {
                    iVar11 = -1;
                  }
                  if (local_78 != 0) {
                    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
                    local_78 = 0;
                  }
                  if (iVar11 < 0) goto LAB_0072556c;
                  if (uVar12 < (ulong)((*(long *)(param_1 + 0x328) - *(long *)(param_1 + 800) >> 3)
                                      * -0x70a3d70a3d70a3d7)) {
                    lVar5 = *(long *)(param_1 + 800) + uVar12 * 200;
                    lVar8 = *(long *)(lVar5 + 0x50);
                    if ((ulong)(long)iVar11 < (ulong)(*(long *)(lVar5 + 0x58) - lVar8 >> 2)) {
                      if (fVar20 != *(float *)(lVar8 + (long)iVar11 * 4)) goto LAB_0072556c;
                      local_90 = (undefined4)uVar19;
                      local_88 = (undefined4)uVar12;
                      lVar8 = *(long *)PTR_DAT_02710910;
                      iStack_8c = iVar10;
                      local_84 = iVar11;
                      lVar5 = nn::os::GetCurrentThread();
                      plVar1 = (long *)(lVar8 + 0x84f0);
                      do {
                        if (*plVar1 != 0) {
                          ClearExclusiveLocal();
                          do {
                            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x84e4));
                            while (*plVar1 == 0) {
                              cVar3 = '\x01';
                              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                              if (bVar4) {
                                *plVar1 = lVar5;
                                cVar3 = ExclusiveMonitorsStatus();
                              }
                              if (cVar3 == '\0') goto LAB_007255f4;
                            }
                            ClearExclusiveLocal();
                          } while( true );
                        }
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar4) {
                          *plVar1 = lVar5;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
LAB_007255f4:
                      lVar5 = *(long *)(lVar8 + 0x82d8);
                      if (lVar5 == 0) {
                        iVar10 = *(int *)(lVar8 + 0x42d0);
                        *(int *)(lVar8 + 0x42d0) = iVar10 + 1;
                      }
                      else {
                        lVar5 = lVar5 + -1;
                        iVar10 = *(int *)(lVar8 + lVar5 * 4 + 0x42d8);
                        *(long *)(lVar8 + 0x82d8) = lVar5;
                      }
                      piVar6 = (int *)(lVar8 + 0x42c8);
                      uVar12 = (ulong)((long)iVar10 - (long)*piVar6) >> 3 & 0x1ffffffffffffff8;
                      *(ulong *)((long)piVar6 + uVar12 + 0x4018) =
                           1L << ((long)iVar10 - (long)*piVar6 & 0x3fU) |
                           *(ulong *)((long)piVar6 + uVar12 + 0x4018);
                      *(int *)(lVar8 + 0x42d4) = *(int *)(lVar8 + 0x42d4) + 1;
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar4) {
                          *plVar1 = 0;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x84e4));
                      puVar17 = *(undefined8 **)(param_1 + 0x3a0);
                      local_80 = iVar10;
                      if (puVar17 == *(undefined8 **)(param_1 + 0x3a8)) {
                        FUN_00728490(param_1 + 0x398,&local_90);
                      }
                      else {
                        uVar18 = *(undefined8 *)(param_1 + 0x3b0);
                        lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                          abort();
                        }
                        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar18;
                        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
                        *(int *)(puVar17 + 2) = local_80;
                        *puVar17 = CONCAT44(iStack_8c,local_90);
                        puVar17[1] = CONCAT44(local_84,local_88);
                        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
                        *(long *)(param_1 + 0x3a0) = *(long *)(param_1 + 0x3a0) + 0x14;
                      }
                      break;
                    }
                  }
                  goto LAB_00725754;
                }
                piVar6 = *(int **)(*(long *)(*(long *)(param_1 + 0x218) + 0x290) + uVar12 * 0x4c0 +
                                  0x40);
                puVar7 = (uint *)((long)piVar6 +
                                 (ulong)*(ushort *)((long)piVar6 + (0x2c - (long)*piVar6)));
                piVar6 = (int *)((long)puVar7 + (ulong)*puVar7);
                puVar7 = (uint *)((long)piVar6 +
                                 (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6)));
                puVar7 = (uint *)((long)puVar7 + (ulong)uVar9 * 4 + (ulong)*puVar7 + 4);
                piVar6 = (int *)((long)puVar7 + (ulong)*puVar7);
                if (((*(ushort *)((long)piVar6 - (long)*piVar6) < 7) ||
                    (uVar13 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar13 == 0)) ||
                   (*(char *)((long)piVar6 + uVar13) == '\0')) goto LAB_0072535c;
LAB_0072556c:
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar16);
            }
          }
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar16);
  }
  return;
}


