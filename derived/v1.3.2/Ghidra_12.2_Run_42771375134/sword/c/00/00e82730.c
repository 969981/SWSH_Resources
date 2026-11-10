/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e82730; name: FUN_00e82730
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_00e82730(long *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  int *piVar13;
  bool bVar14;
  long *plVar15;
  undefined *local_160;
  long local_158;
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [96];
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  long local_50;
  undefined *local_48;
  
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar3 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (puVar2 == puVar3) {
      return false;
    }
    plVar15 = (long *)*puVar2;
    plVar9 = (long *)(**(code **)plVar15[10])(plVar15 + 10);
    lVar10 = FUN_0156b190();
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)lVar10) {
        if ((plVar15[0x34] == *param_1) &&
           (uVar11 = (**(code **)(*(long *)*puVar2 + 0x88))(), (uVar11 & 1) == 0)) {
          plVar9 = plVar15 + 9;
          (**(code **)(*plVar9 + 0x10))(plVar9);
          (**(code **)(*plVar15 + 0x10))(&local_48,plVar15);
          local_160 = local_48;
          if (local_48 != (undefined *)0x0) {
            (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
          }
          uVar11 = FUN_00e7cb20(&local_160);
          if (local_160 != (undefined *)0x0) {
            (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
            local_160 = (undefined *)0x0;
          }
          if ((uVar11 & 1) != 0) {
            local_160 = local_48;
            if (local_48 == (undefined *)0x0) {
              FUN_00e7b880(&local_50,&local_160);
              pbVar6 = PTR_DAT_027150a8;
              puVar2 = (undefined8 *)PTR_DAT_027150b0;
              lVar10 = local_50;
            }
            else {
              plVar15 = (long *)(local_48 + 0x48);
              (**(code **)(*plVar15 + 0x10))(plVar15);
              FUN_00e7b880(&local_50,&local_160);
              (**(code **)(*plVar15 + 0x18))(plVar15);
              local_160 = (undefined *)0x0;
              pbVar6 = PTR_DAT_027150a8;
              puVar2 = (undefined8 *)PTR_DAT_027150b0;
              lVar10 = local_50;
            }
            PTR_DAT_027150a8 = pbVar6;
            PTR_DAT_027150b0 = (undefined *)puVar2;
            local_50 = lVar10;
            if (lVar10 != 0) {
              if (*(int *)(lVar10 + 0x54) == 0) {
                bVar14 = false;
                lVar10 = local_158;
                goto joined_r0x00e8297c;
              }
              if ((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) goto LAB_00e829b4;
              piVar13 = (int *)(lVar10 + 0x54);
              iVar5 = *(int *)(lVar10 + 0x54);
              goto LAB_00e828c4;
            }
          }
          bVar14 = false;
          lVar10 = local_50;
          goto joined_r0x00e82ae4;
        }
        break;
      }
    }
    puVar2 = puVar2 + 1;
  } while( true );
  while (iVar5 = iVar8, iVar8 != 0) {
LAB_00e828c4:
    plVar15 = *(long **)(lVar10 + 0x58);
    if (((*pbVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar6), iVar8 != 0)) {
      uVar12 = FUN_00706e40();
      *puVar2 = uVar12;
      __cxa_guard_release(pbVar6);
    }
    while( true ) {
      if (plVar15 == (long *)0x0) goto LAB_00e829b4;
      if (plVar15 == puVar2) break;
      plVar15 = (long *)*plVar15;
    }
    iVar8 = *piVar13;
    if (iVar8 == iVar5) {
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar14) {
        *piVar13 = iVar5 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar10 = *(long *)(lVar10 + 0x60);
        if (lVar10 != 0) {
          FUN_0069c1e0(&local_160,lVar10 + -0x50);
          (**(code **)(*(long *)(lVar10 + -8) + 0x18))((long *)(lVar10 + -8));
          if (local_158 != 0) goto LAB_00e829c8;
          piVar13 = (int *)0x0;
          goto LAB_00e829dc;
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
LAB_00e829b4:
  FUN_0069c1e0(&local_160,0);
  piVar13 = (int *)0x0;
  if (local_158 != 0) {
LAB_00e829c8:
    if (*(char *)(local_158 + 0x170) == '\0') {
      piVar13 = (int *)0x0;
    }
    else {
      piVar13 = (int *)FUN_006bef30();
    }
  }
LAB_00e829dc:
  if (((*(ushort *)((long)piVar13 - (long)*piVar13) < 0x11) ||
      (uVar11 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[8], uVar11 == 0)) ||
     (puVar1 = (uint *)((long)piVar13 + uVar11), piVar13 = (int *)((long)puVar1 + (ulong)*puVar1),
     piVar13 == (int *)0x0)) {
    bVar14 = false;
  }
  else {
    puVar1 = (uint *)((long)piVar13 + (ulong)*(ushort *)((long)piVar13 + (4 - (long)*piVar13)));
    bVar14 = 1 < *(int *)((long)puVar1 + (ulong)*puVar1);
  }
  local_160 = PTR_DAT_02715090 + 0x10;
  if (local_158 != 0) {
    FUN_006e2100(local_158,&local_160);
    lVar10 = local_158;
    local_158 = 0;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
      pcVar7 = local_c8;
      goto joined_r0x00e82a7c;
    }
  }
  local_158 = 0;
  pcVar7 = local_c8;
joined_r0x00e82a7c:
  local_c8 = pcVar7;
  if (pcVar7 != (code *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar7)(auStack_b0);
  }
  pcVar7 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar7)(auStack_130);
  }
  lVar10 = 0;
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
    local_158 = 0;
    lVar10 = local_158;
  }
joined_r0x00e8297c:
  local_158 = lVar10;
  lVar10 = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
    lVar10 = local_50;
  }
joined_r0x00e82ae4:
  local_50 = lVar10;
  if (local_48 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = (undefined *)0x0;
  }
  (**(code **)(*plVar9 + 0x18))(plVar9);
  return bVar14;
}


