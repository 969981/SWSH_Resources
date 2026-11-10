/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6e4b0; name: FUN_00c6e4b0
 */


void FUN_00c6e4b0(long *param_1,int param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  long local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long local_48;
  
  if (5 < param_2) {
    return;
  }
  if ((long *)param_1[(long)param_2 + 0x2d] == (long *)0x0) {
    return;
  }
  local_60 = 0x9f359693c667a99f;
  switch(param_2) {
  case 1:
    pcStack_78 = "loc_ob_band01";
    local_80 = 0x346b743f70f13a20;
    break;
  case 2:
    pcStack_58 = "Origin";
    local_60 = 0x55c0d7a581349f0f;
    local_50 = 6;
    local_80 = 0x55c0d7a581349f0f;
    pcStack_78 = "Origin";
    local_70 = 6;
    goto LAB_00c6e604;
  case 3:
    pcStack_78 = "loc_ob_ball";
    local_80 = 0xfd1bc77d66ce561;
    local_70 = 0xb;
    goto LAB_00c6e5f8;
  case 4:
    pcStack_78 = "loc_ob_Lobj01";
    local_80 = 0xb491e19001ee62ea;
    break;
  case 5:
    pcStack_78 = "loc_ob_Robj01";
    local_80 = 0xd72452feb739bdc;
    break;
  default:
    pcStack_78 = "loc_ob_band02";
    local_80 = 0x346b773f70f13f39;
  }
  local_70 = 0xd;
LAB_00c6e5f8:
  local_50 = 10;
  pcStack_58 = "loc_attach";
LAB_00c6e604:
  local_48 = 0;
  local_68 = 0;
  (**(code **)(*(long *)param_1[(long)param_2 + 0x2d] + 0x98))(&local_88);
  lVar7 = local_88;
  puVar5 = PTR_DAT_02715078;
  if ((local_88 == 0) || (*(int *)(local_88 + 0x54) == 0)) {
LAB_00c6e704:
    lVar13 = 0;
  }
  else {
    piVar1 = (int *)(local_88 + 0x54);
    puVar11 = PTR_DAT_02715080;
    iVar12 = *(int *)(local_88 + 0x54);
    do {
      while( true ) {
        plVar14 = *(long **)(lVar7 + 0x58);
        if ((*puVar5 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(puVar5);
          puVar11 = PTR_DAT_02715080;
          if (iVar6 != 0) {
            uVar9 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar9;
            __cxa_guard_release(puVar5);
            puVar11 = PTR_DAT_02715080;
          }
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_00c6e704;
          if (plVar14 == (long *)puVar11) break;
          plVar14 = (long *)*plVar14;
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar12) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          lVar13 = 0;
          if (lVar7 != 0) {
            lVar13 = lVar7 + -0x50;
          }
          goto LAB_00c6e708;
        }
        lVar13 = 0;
        iVar12 = iVar6;
        if (iVar6 == 0) goto LAB_00c6e708;
      }
      ClearExclusiveLocal();
      lVar13 = 0;
      iVar12 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00c6e708:
  lVar7 = FUN_00c750c0(&local_c0,param_1[0xd]);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_c0 = lVar7;
  FUN_006d9640(lVar13,&local_c0);
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  plVar14 = param_1 + (long)param_2 + 0x33;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *plVar14;
  *plVar14 = lVar7;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  plVar2 = param_1 + (long)param_2 + 0x2d;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  lVar13 = *plVar14;
  (**(code **)(*param_1 + 0xa8))(&local_88,param_1);
  FUN_00ad2020(&local_c0,&local_88);
  lVar7 = local_c0;
  (**(code **)(*(long *)*plVar2 + 0xa8))(&local_98);
  FUN_00ad2020(&local_90,&local_98);
  FUN_006dbb10(lVar13,lVar7,&local_80,local_90,&local_60);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  (**(code **)(*param_1 + 0xd8))(&local_88,param_1);
  if ((local_88 != 0) && (*(int *)(local_88 + 0x54) != 0)) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0x101;
    local_c0 = 0;
    uStack_b8 = 0;
    local_9e = 1;
    FUN_00c75950(*plVar2,&local_c0);
    lVar7 = local_88;
    puVar5 = PTR_DAT_0271c1e8;
    if ((local_88 != 0) && (*(int *)(local_88 + 0x54) != 0)) {
      piVar1 = (int *)(local_88 + 0x54);
      puVar11 = PTR_DAT_0271c1f0;
      iVar12 = *(int *)(local_88 + 0x54);
      do {
        while( true ) {
          plVar14 = *(long **)(lVar7 + 0x58);
          if ((*puVar5 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(puVar5);
            puVar11 = PTR_DAT_0271c1f0;
            if (iVar6 != 0) {
              uVar9 = FUN_00706e40();
              *(undefined8 *)PTR_DAT_0271c1f0 = uVar9;
              __cxa_guard_release(puVar5);
              puVar11 = PTR_DAT_0271c1f0;
            }
          }
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_00c6e9d4;
            if (plVar14 == (long *)puVar11) break;
            plVar14 = (long *)*plVar14;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar12) break;
          ClearExclusiveLocal();
          iVar12 = iVar6;
          if (iVar6 == 0) goto LAB_00c6e9d4;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 != 0) {
            FUN_01061030(lVar7 + -0x50,&local_c0);
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))((long *)(lVar7 + -8));
            goto joined_r0x00c6e9cc;
          }
          break;
        }
        iVar12 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00c6e9d4:
    FUN_01061030(0,&local_c0);
joined_r0x00c6e9cc:
    if (local_c0 != 0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
      local_c0 = 0;
    }
  }
  if ((long *)*plVar2 != (long *)0x0) {
    cVar3 = *(char *)((long)param_1 + (long)param_2 + 0x1c8);
    (**(code **)(*(long *)*plVar2 + 0xa8))(&local_c0);
    lVar7 = local_c0;
    if (local_c0 != 0) {
      if (*(int *)(local_c0 + 0x54) != 0) {
        lVar13 = *(long *)(local_c0 + 0x60);
        if (lVar13 == 0) {
          lVar13 = 0;
        }
        else {
          uVar10 = FUN_00a8cbe0(lVar13);
          lVar13 = lVar13 + -0x50;
          if ((uVar10 & 1) == 0) {
            lVar13 = 0;
          }
        }
        local_c0 = 0;
        FUN_007273c0(lVar13,cVar3 != '\0',&local_c0);
      }
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


