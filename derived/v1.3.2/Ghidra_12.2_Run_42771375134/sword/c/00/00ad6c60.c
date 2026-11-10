/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad6c60; name: FUN_00ad6c60
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00ad6c60(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  code *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined **local_70;
  undefined8 **ppuStack_68;
  undefined ***local_50;
  long local_40;
  undefined8 *local_38;
  long local_28;
  
  if (*(int *)(param_1 + 0x4d0) == 1) {
    if (*(undefined8 **)(param_1 + 0x568) != (undefined8 *)0x0) {
      return *(undefined8 **)(param_1 + 0x568);
    }
    lVar12 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    local_40 = *(long *)(param_1 + 0x510);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
    }
    FUN_00c7a630(&local_70,lVar12,&local_40);
    if (local_70 == (undefined **)0x0) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      puVar14 = (undefined8 *)local_70[0xc];
      if (puVar14 != (undefined8 *)0x0) {
        puVar13 = (undefined8 *)(**(code **)*puVar14)(puVar14);
        if (((*PTR_DAT_02719750 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_02719750), iVar7 != 0)) {
          uVar9 = FUN_00706e40();
          *(undefined8 *)PTR_DAT_02719758 = uVar9;
          __cxa_guard_release(PTR_DAT_02719750);
        }
        for (; puVar13 != (undefined8 *)0x0; puVar13 = (undefined8 *)*puVar13) {
          if (puVar13 == (undefined8 *)PTR_DAT_02719758) {
            puVar14 = puVar14 + -10;
            goto joined_r0x00ad7000;
          }
        }
      }
      puVar14 = (undefined8 *)0x0;
joined_r0x00ad7000:
      if (local_70 != (undefined **)0x0) {
        (**(code **)(local_70[9] + 0x18))();
      }
    }
    local_70 = (undefined **)0x0;
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    if (puVar14 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    ppuStack_68 = &local_38;
    local_38 = (undefined8 *)0x0;
    local_70 = &PTR_LAB_02634168;
    local_50 = &local_70;
    FUN_00c68760(puVar14,&local_70);
    if (&local_70 == local_50) {
      pcVar11 = (code *)(*local_50)[4];
    }
    else {
      if (local_50 == (undefined ***)0x0) {
        return local_38;
      }
      pcVar11 = (code *)(*local_50)[5];
    }
    (*pcVar11)();
    return local_38;
  }
  if (*(int *)(param_1 + 0x4d0) != 2) {
    return (undefined8 *)0x0;
  }
  lVar12 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  local_28 = *(long *)(param_1 + 0x510);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_00c7a630(&local_70,lVar12,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  ppuVar5 = local_70;
  puVar4 = PTR_DAT_02719758;
  puVar10 = PTR_DAT_02719750;
  if ((local_70 == (undefined **)0x0) || (*(int *)((long)local_70 + 0x54) == 0)) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    piVar1 = (int *)((long)local_70 + 0x54);
    iVar7 = *(int *)((long)local_70 + 0x54);
    do {
      while( true ) {
        puVar13 = (undefined8 *)ppuVar5[0xb];
        if (((*puVar10 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar10), iVar6 != 0)) {
          uVar9 = FUN_00706e40();
          *(undefined8 *)puVar4 = uVar9;
          __cxa_guard_release(puVar10);
        }
        puVar14 = (undefined8 *)0x0;
        if (puVar13 == (undefined8 *)0x0) goto LAB_00ad6e74;
        while (puVar13 != (undefined8 *)puVar4) {
          puVar13 = (undefined8 *)*puVar13;
          if (puVar13 == (undefined8 *)0x0) {
            puVar14 = (undefined8 *)0x0;
            goto LAB_00ad6e74;
          }
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar7) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          puVar10 = ppuVar5[0xc];
          puVar14 = (undefined8 *)0x0;
          if (puVar10 != (undefined *)0x0) {
            puVar14 = (undefined8 *)(puVar10 + -0x50);
          }
          goto LAB_00ad6e74;
        }
        puVar14 = (undefined8 *)0x0;
        iVar7 = iVar6;
        if (iVar6 == 0) goto LAB_00ad6e74;
      }
      ClearExclusiveLocal();
      puVar14 = (undefined8 *)0x0;
      iVar7 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00ad6e74:
  uVar8 = FUN_00aaefb0(puVar14 + 10);
  puVar13 = puVar14;
  if ((uVar8 & 1) == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  if (puVar14 != (undefined8 *)0x0) {
    (**(code **)(puVar14[9] + 0x18))(puVar14 + 9);
  }
  if (puVar13 != (undefined8 *)0x0) {
    FUN_00cc5280(&local_38,puVar13);
    puVar14 = local_38;
    puVar4 = PTR_DAT_02719930;
    puVar10 = PTR_DAT_02719928;
    if (local_38 != (undefined8 *)0x0) {
      if (*(int *)((long)local_38 + 0x54) == 0) {
        bVar3 = false;
      }
      else {
        if (local_38 == (undefined8 *)0x0) {
          puVar13 = (undefined8 *)0x0;
          bVar3 = true;
          goto joined_r0x00ad6ff0;
        }
        if (*(int *)((long)local_38 + 0x54) == 0) {
LAB_00ad7044:
          puVar13 = (undefined8 *)0x0;
          bVar3 = true;
        }
        else {
          piVar1 = (int *)((long)local_38 + 0x54);
          iVar7 = *(int *)((long)local_38 + 0x54);
          do {
            puVar13 = (undefined8 *)puVar14[0xb];
            if (((*puVar10 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar10), iVar6 != 0)) {
              uVar9 = FUN_00706e40();
              *(undefined8 *)puVar4 = uVar9;
              __cxa_guard_release(puVar10);
              if (puVar13 != (undefined8 *)0x0) goto LAB_00ad6ef0;
LAB_00ad7034:
              bVar3 = true;
              break;
            }
            if (puVar13 == (undefined8 *)0x0) goto LAB_00ad7034;
LAB_00ad6ef0:
            while (puVar13 != (undefined8 *)puVar4) {
              puVar13 = (undefined8 *)*puVar13;
              if (puVar13 == (undefined8 *)0x0) {
                puVar13 = (undefined8 *)0x0;
                goto LAB_00ad7034;
              }
            }
            iVar6 = *piVar1;
            if (iVar6 == iVar7) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar7 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar12 = puVar14[0xc];
                if (lVar12 != 0) {
                  puVar13 = (undefined8 *)(lVar12 + -0x50);
                  (**(code **)(*(long *)(lVar12 + -8) + 0x18))();
                  goto LAB_00ad7034;
                }
                goto LAB_00ad7044;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            puVar13 = (undefined8 *)0x0;
            bVar3 = true;
            iVar7 = iVar6;
          } while (iVar6 != 0);
        }
      }
      if (local_38 != (undefined8 *)0x0) {
        (**(code **)(local_38[9] + 0x18))();
        local_38 = (undefined8 *)0x0;
      }
      if (bVar3) {
        bVar3 = true;
        goto joined_r0x00ad6ff0;
      }
    }
  }
  bVar3 = false;
joined_r0x00ad6ff0:
  if (local_70 != (undefined **)0x0) {
    (**(code **)(local_70[9] + 0x18))();
  }
  if (!bVar3) {
    return (undefined8 *)0x0;
  }
  return puVar13;
}


