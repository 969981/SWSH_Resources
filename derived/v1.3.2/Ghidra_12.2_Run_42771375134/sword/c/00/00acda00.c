/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00acda00; name: FUN_00acda00
 */


void FUN_00acda00(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  long local_58;
  ulong local_50;
  undefined8 local_48;
  long local_38;
  
  uVar9 = (**(code **)(*param_1 + 400))();
  if ((uVar9 & 1) == 0) {
    return;
  }
  FUN_00ad1e50(&local_38,param_1);
  lVar13 = local_38;
  if (local_38 == 0) {
    return;
  }
  fVar15 = *(float *)(param_1 + 0x9d);
  if ((int)param_1[0x9a] != 2) {
    FUN_0069c550(fVar15,local_38);
    goto LAB_00acdeb0;
  }
  lVar14 = param_1[0x79];
  local_50 = CONCAT71(local_50._1_7_,1);
  local_50 = local_50 & 0xffffffff;
  local_48 = FUN_0069c990(local_38,&local_50);
  (**(code **)(*(long *)param_1[0x78] + 0x7f8))((long *)param_1[0x78],(int)lVar14);
  iVar7 = FUN_008e19f0();
  if (*(char *)(*(long *)(param_1[0x78] + 0x5c8) + 0x79) == '\0') {
    bVar6 = 0;
  }
  else {
    bVar6 = FUN_00b8c480(*(long *)(param_1[0x78] + 0x5c8),(int)lVar14);
  }
  plVar10 = (long *)FUN_006b92e0(&local_48);
  if (*plVar10 == -0x36d3a400db7ba287) {
    if ((iVar7 == 0 & (bVar6 ^ 1)) != 0) goto LAB_00acdb30;
    if (*(char *)((long)param_1 + 0x4ec) != '\0') goto LAB_00acdb20;
    if (iVar7 != 3) {
      if ((int)param_1[0x9e] == 0x37a) {
        if (*(int *)((long)param_1 + 0x504) != 2) {
          fVar15 = 0.5;
        }
      }
      else {
        fVar15 = 0.5;
      }
      if (iVar7 != 2) goto LAB_00acdb30;
      goto LAB_00acdb28;
    }
    fVar15 = 0.0;
    lVar14 = *(long *)(param_1[0x78] + 0x528);
    if (lVar14 != 0) goto LAB_00acdb3c;
LAB_00acdccc:
    uVar11 = FUN_00c79e90(0,0x30);
    FUN_01050390(lVar13,uVar11,0);
    lVar13 = *(long *)(param_1[0x78] + 0x528);
  }
  else {
    *(undefined1 *)((long)param_1 + 0x4ec) = 0;
LAB_00acdb20:
    if (iVar7 == 2) {
LAB_00acdb28:
      if (*(char *)((long)param_1 + 0x551) != '\0') goto LAB_00acdb30;
      lVar14 = *(long *)(param_1[0x78] + 0x528);
      if (lVar14 != 0) {
        plVar10 = (long *)(lVar14 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        uVar11 = FUN_00c79e90(lVar14,0x30);
        uVar12 = 3;
        goto LAB_00acdb68;
      }
      uVar11 = FUN_00c79e90(0,0x30);
      FUN_01050390(lVar13,uVar11,3);
      lVar13 = *(long *)(param_1[0x78] + 0x528);
    }
    else {
LAB_00acdb30:
      lVar14 = *(long *)(param_1[0x78] + 0x528);
      if (lVar14 == 0) goto LAB_00acdccc;
LAB_00acdb3c:
      plVar10 = (long *)(lVar14 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      uVar11 = FUN_00c79e90(lVar14,0x30);
      uVar12 = 0;
LAB_00acdb68:
      FUN_01050390(lVar13,uVar11,uVar12);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      lVar13 = *(long *)(param_1[0x78] + 0x528);
    }
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  local_58 = param_1[0xa2];
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_00c7a630(&local_50,lVar13,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  uVar9 = local_50;
  puVar5 = PTR_DAT_02719758;
  puVar4 = PTR_DAT_02719750;
  if ((fVar15 == 0.0) ||
     ((((int)param_1[0x9e] == 0x37a && (*(int *)((long)param_1 + 0x504) == 2)) ||
      (param_1[0xac] != 0)))) {
    if ((local_50 != 0) && (*(int *)(local_50 + 0x54) != 0)) {
      piVar1 = (int *)(local_50 + 0x54);
      iVar7 = *(int *)(local_50 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(uVar9 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar11 = FUN_00706e40();
            *(undefined8 *)puVar5 = uVar11;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_00acde78;
            if (plVar10 == (long *)puVar5) break;
            plVar10 = (long *)*plVar10;
          }
          iVar8 = *piVar1;
          if (iVar8 != iVar7) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar13 = *(long *)(uVar9 + 0x60);
            if (lVar13 != 0) {
              uVar11 = 0;
              goto LAB_00acde58;
            }
            goto LAB_00acde78;
          }
          iVar7 = iVar8;
          if (iVar8 == 0) goto LAB_00acde78;
        }
        ClearExclusiveLocal();
        iVar7 = iVar8;
      } while (iVar8 != 0);
    }
LAB_00acde78:
    FUN_00c6a2b0(0,0);
  }
  else {
    if ((local_50 != 0) && (*(int *)(local_50 + 0x54) != 0)) {
      piVar1 = (int *)(local_50 + 0x54);
      iVar7 = *(int *)(local_50 + 0x54);
      do {
        plVar10 = *(long **)(uVar9 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          uVar11 = FUN_00706e40();
          *(undefined8 *)puVar5 = uVar11;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00acdef0;
          if (plVar10 == (long *)puVar5) break;
          plVar10 = (long *)*plVar10;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar7) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_00acdd9c;
          lVar13 = *(long *)(uVar9 + 0x60);
          if (lVar13 != 0) {
            uVar11 = 1;
LAB_00acde58:
            FUN_00c6a2b0(lVar13 + -0x50,uVar11);
            (**(code **)(*(long *)(lVar13 + -8) + 0x18))((long *)(lVar13 + -8));
            goto joined_r0x00acde88;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_00acdd9c:
        iVar7 = iVar8;
      } while (iVar8 != 0);
    }
LAB_00acdef0:
    FUN_00c6a2b0(0,1);
  }
joined_r0x00acde88:
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  FUN_0069c550(fVar15,local_38);
  if (local_38 == 0) {
    return;
  }
LAB_00acdeb0:
  (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
  return;
}


