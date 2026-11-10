/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db3640; name: FUN_00db3640
 */


/* WARNING: Removing unreachable block (ram,0x00db3c18) */
/* WARNING: Removing unreachable block (ram,0x00db3a0c) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_00db3640(undefined **param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
                 undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined **local_b8;
  undefined **local_b0;
  long local_a8;
  undefined ***local_90;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  
  (**(code **)(*param_1 + 0x148))();
  FUN_00c58c00(&local_b0,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  ppuVar3 = local_b0;
  if (local_b0 != (undefined **)0x0) {
    (**(code **)(local_b0[9] + 0x18))();
    local_b0 = (undefined **)0x0;
  }
  if (*(int *)((long)param_1 + 0x4dc) != 2) {
    if (*(int *)((long)param_1 + 0x4dc) == 0) {
      (**(code **)(*param_1 + 0x140))(param_1);
      local_58 = *param_3;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      }
      local_60 = *param_4;
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
      }
      local_68 = *param_5;
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
      }
      uVar4 = FUN_00dbd5f0(param_1,param_2,&local_58,&local_60,&local_68,param_6,param_7);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if ((uVar4 & 1) == 0) {
        return false;
      }
      *(undefined4 *)((long)param_1 + 0x4dc) = 1;
      (**(code **)(*param_1 + 0x10))(&local_78,param_1);
      local_70 = local_78;
      local_78 = 0;
      FUN_00c7a6a0(&local_b0,ppuVar3,&local_70);
      if (local_b0 == (undefined **)0x0) {
        param_1[0x9c] = (undefined *)0x0;
      }
      else {
        puVar11 = (undefined8 *)local_b0[0xc];
        if (puVar11 != (undefined8 *)0x0) {
          plVar5 = (long *)(**(code **)*puVar11)(puVar11);
          lVar6 = FUN_00c6b230();
          for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
            if (plVar5 == (long *)lVar6) {
              param_1[0x9c] = (undefined *)(puVar11 + -10);
              goto joined_r0x00db3c80;
            }
          }
        }
        param_1[0x9c] = (undefined *)0x0;
joined_r0x00db3c80:
        if (local_b0 != (undefined **)0x0) {
          (**(code **)(local_b0[9] + 0x18))();
        }
      }
      local_b0 = (undefined **)0x0;
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      lVar6 = *(long *)(*(long *)PTR_DAT_027155f8 + 0x50);
      do {
        lVar8 = lVar6;
        lVar6 = lVar8;
        if (*(long *)(lVar8 + 0x128) != 0) {
          lVar6 = *(long *)(lVar8 + 0x128);
        }
      } while (lVar6 != lVar8);
      if ((*(byte *)(lVar8 + 0x130) >> 6 & 1) != 0) {
        plVar5 = (long *)(lVar8 + 0x278);
        local_b0 = param_1;
        local_a8 = param_2;
        if (((*(byte *)(lVar8 + 0x280) & 1) == 0) ||
           (lVar10 = *plVar5, lVar6 = nn::os::GetCurrentThread(), lVar6 != lVar10)) {
          lVar6 = nn::os::GetCurrentThread();
          do {
            if (*plVar5 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x26c));
                while (*plVar5 == 0) {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                  if (bVar2) {
                    *plVar5 = lVar6;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                  if (cVar1 == '\0') goto LAB_00db3c38;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar6;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
LAB_00db3c38:
          FUN_00db4f80(lVar8 + 0x1f8,&local_b0);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = 0;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x26c));
        }
        else {
          FUN_00db4f80(lVar8 + 0x230,&local_b0);
        }
      }
    }
    goto LAB_00db3c94;
  }
  (**(code **)(*param_1 + 0x10))(&local_78,param_1);
  local_b0 = &PTR_LAB_0264f760;
  local_80 = local_78;
  local_78 = 0;
  local_90 = &local_b0;
  FUN_00c7a320(ppuVar3,&local_80,&local_b0);
  if (&local_b0 == local_90) {
    pcVar9 = (code *)(*local_90)[4];
LAB_00db3938:
    (*pcVar9)();
  }
  else if (local_90 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_90)[5];
    goto LAB_00db3938;
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_027155f8 + 0x50);
  local_a8 = *param_3;
  local_b0 = param_1;
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x10))();
  }
  do {
    lVar8 = lVar6;
    lVar6 = lVar8;
    if (*(long *)(lVar8 + 0x128) != 0) {
      lVar6 = *(long *)(lVar8 + 0x128);
    }
  } while (lVar6 != lVar8);
  if ((*(byte *)(lVar8 + 0x130) >> 6 & 1) != 0) {
    plVar5 = (long *)(lVar8 + 0x278);
    if (((*(byte *)(lVar8 + 0x280) & 1) == 0) ||
       (lVar10 = *plVar5, lVar6 = nn::os::GetCurrentThread(), lVar6 != lVar10)) {
      lVar6 = nn::os::GetCurrentThread();
      do {
        if (*plVar5 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x26c));
            while (*plVar5 == 0) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar6;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_00db3a2c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_00db3a2c:
      FUN_00db51f0(lVar8 + 0x1f8,&local_b0);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = 0;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x26c));
    }
    else {
      FUN_00db51f0(lVar8 + 0x230,&local_b0);
    }
  }
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  (**(code **)(*param_1 + 0x10))(&local_b0,param_1);
  local_b8 = local_b0;
  if (local_b0 != (undefined **)0x0) {
    (**(code **)(local_b0[9] + 0x10))();
  }
  FUN_00c7a1d0(&local_78,ppuVar3,&local_b8);
  lVar6 = *(long *)(local_78 + 0x60);
  uVar4 = FUN_00a8cbe0(lVar6);
  lVar6 = lVar6 + -0x50;
  if ((uVar4 & 1) == 0) {
    lVar6 = 0;
  }
  puVar12 = *(undefined **)(lVar6 + 0x58);
  if (puVar12 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar12 + 0x48) + 0x10))();
  }
  if (param_1[0x82] != (undefined *)0x0) {
    (**(code **)(*(long *)(param_1[0x82] + 0x48) + 0x18))();
    param_1[0x82] = (undefined *)0x0;
  }
  param_1[0x82] = puVar12;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_b8 != (undefined **)0x0) {
    (**(code **)(local_b8[9] + 0x18))();
    local_b8 = (undefined **)0x0;
  }
  FUN_00dbda60(param_1);
  if (*(int *)(param_1 + 0x9d) == 2) {
    FUN_00db3dd0(param_1,param_1 + 0x9e,param_1 + 0xa0,param_1 + 0xa2,2);
    iVar7 = *(int *)(param_1 + 0xa4);
    if (iVar7 != 2) goto LAB_00db3b5c;
LAB_00db3ba0:
    FUN_00db4000(param_1,param_1 + 0xa6,param_1 + 0xa8,param_1 + 0xaa,0x40);
  }
  else {
    if (*(int *)(param_1 + 0x9d) == 1) {
      FUN_00db3cc0(*(undefined4 *)((long)param_1 + 0x4ec),param_1,param_1 + 0x9e,2);
    }
    iVar7 = *(int *)(param_1 + 0xa4);
    if (iVar7 == 2) goto LAB_00db3ba0;
LAB_00db3b5c:
    if (iVar7 == 1) {
      FUN_00db3ef0(*(undefined4 *)((long)param_1 + 0x524),param_1,param_1 + 0xa6,0x40);
    }
  }
  FUN_00db7bb0(param_1,param_2);
  FUN_00dc1540(param_1,1,1);
  *(undefined1 *)(param_1 + 0x9b) = 1;
  if (local_b0 != (undefined **)0x0) {
    (**(code **)(local_b0[9] + 0x18))();
  }
LAB_00db3c94:
  return *(char *)(param_1 + 0x9b) != '\0';
}


