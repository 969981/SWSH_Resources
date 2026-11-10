/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ee100; name: FUN_012ee100
 */


void FUN_012ee100(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined1 *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  long local_160;
  long lStack_158;
  undefined8 *local_150;
  long local_100;
  undefined8 local_f8;
  undefined *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined1 *local_d0 [14];
  
  local_d0[0] = (undefined1 *)&local_180;
  local_f8 = 0;
  lStack_158 = (long)&local_f8 + 4;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  local_150 = &local_f8;
  local_180 = &LAB_012f4f80;
  local_178 = FUN_012f5020;
  local_170 = &LAB_012f5030;
  local_168 = &LAB_012f5050;
  local_f0 = PTR_LAB_02727b98;
  local_e8 = (code *)PTR_FUN_02727ba0;
  local_e0 = PTR_LAB_02727ba8;
  local_d8 = PTR_LAB_02727bb0;
  local_160 = param_1;
  FUN_01307150(&local_100,*(undefined8 *)(param_1 + 0x80),&local_f0);
  pcVar7 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined *)0x0;
    local_d8 = (undefined *)0x0;
    local_f0 = (undefined *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar7)(local_d0);
  }
  if (local_100 != 0) {
    (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
    local_100 = 0;
  }
  pcVar7 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (undefined1 *)0x0;
    local_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar7)(&local_160);
  }
  *(undefined1 *)(param_1 + 0x91) = 1;
  if ((*(int *)(param_1 + 0x158) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x160),
                           *(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x16c)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  if ((*(int *)(param_1 + 0x170) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x178),
                           *(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  if ((*(int *)(param_1 + 0x188) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x188),*(undefined8 *)(param_1 + 400),
                           *(undefined4 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x19c)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  if ((*(int *)(param_1 + 0x1a0) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x1a8),
                           *(undefined4 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x1b4)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x1a0) = 0;
  }
  if ((*(int *)(param_1 + 0x1b8) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x1c0),
                           *(undefined4 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1cc)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  if ((*(int *)(param_1 + 0x1d0) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1d8),
                           *(undefined4 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e4)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  if ((*(int *)(param_1 + 0x1e8) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x1f0),
                           *(undefined4 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x1fc)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  if ((*(int *)(param_1 + 0x200) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x200),*(undefined8 *)(param_1 + 0x208),
                           *(undefined4 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x214)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x200) = 0;
  }
  if ((*(int *)(param_1 + 0x218) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x220),
                           *(undefined4 *)(param_1 + 0x228),*(undefined4 *)(param_1 + 0x22c)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  if ((*(int *)(param_1 + 0x230) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x230),*(undefined8 *)(param_1 + 0x238),
                           *(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x244)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x230) = 0;
  }
  if ((*(int *)(param_1 + 0x248) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x248),*(undefined8 *)(param_1 + 0x250),
                           *(undefined4 *)(param_1 + 600),*(undefined4 *)(param_1 + 0x25c)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x248) = 0;
  }
  if ((*(int *)(param_1 + 0x260) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x260),*(undefined8 *)(param_1 + 0x268),
                           *(undefined4 *)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x274)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x260) = 0;
  }
  if ((*(int *)(param_1 + 0x278) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x278),*(undefined8 *)(param_1 + 0x280),
                           *(undefined4 *)(param_1 + 0x288),*(undefined4 *)(param_1 + 0x28c)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x278) = 0;
  }
  if ((*(int *)(param_1 + 0x290) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x290),*(undefined8 *)(param_1 + 0x298),
                           *(undefined4 *)(param_1 + 0x2a0),*(undefined4 *)(param_1 + 0x2a4)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x290) = 0;
  }
  if ((*(int *)(param_1 + 0x2a8) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x2a8),*(undefined8 *)(param_1 + 0x2b0),
                           *(undefined4 *)(param_1 + 0x2b8),*(undefined4 *)(param_1 + 700)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x2a8) = 0;
  }
  if ((*(int *)(param_1 + 0x2c0) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x2c0),*(undefined8 *)(param_1 + 0x2c8),
                           *(undefined4 *)(param_1 + 0x2d0),*(undefined4 *)(param_1 + 0x2d4)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x2c0) = 0;
  }
  if ((*(int *)(param_1 + 0x2d8) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x2d8),*(undefined8 *)(param_1 + 0x2e0),
                           *(undefined4 *)(param_1 + 0x2e8),*(undefined4 *)(param_1 + 0x2ec)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x2d8) = 0;
  }
  if ((*(int *)(param_1 + 0x2f0) != 0) &&
     (uVar9 = FUN_012ef7d0(param_1,*(int *)(param_1 + 0x2f0),*(undefined8 *)(param_1 + 0x2f8),
                           *(undefined4 *)(param_1 + 0x300),*(undefined4 *)(param_1 + 0x304)),
     (uVar9 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x2f0) = 0;
  }
  lVar16 = *(long *)(param_1 + 0x310);
  if ((lVar16 != 0) && (lVar13 = *(long *)(param_1 + 1000), lVar13 != 0)) {
    uVar3 = *(undefined4 *)(param_1 + 0x318);
    lVar10 = FUN_013092c0(lVar13);
    if ((lVar10 == lVar16) ||
       ((lVar13 = *(long *)(param_1 + 0x3f0), lVar13 != 0 &&
        ((lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16 ||
         ((lVar13 = *(long *)(param_1 + 0x3f8), lVar13 != 0 &&
          ((lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16 ||
           ((lVar13 = *(long *)(param_1 + 0x400), lVar13 != 0 &&
            (lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16)))))))))))) {
      FUN_0130a7f0(lVar13,uVar3);
      *(undefined8 *)(param_1 + 0x310) = 0;
    }
  }
  lVar16 = *(long *)(param_1 + 800);
  if ((lVar16 != 0) && (lVar13 = *(long *)(param_1 + 1000), lVar13 != 0)) {
    uVar3 = *(undefined4 *)(param_1 + 0x328);
    lVar10 = FUN_013092c0(lVar13);
    if ((lVar10 == lVar16) ||
       ((lVar13 = *(long *)(param_1 + 0x3f0), lVar13 != 0 &&
        ((lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16 ||
         ((lVar13 = *(long *)(param_1 + 0x3f8), lVar13 != 0 &&
          ((lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16 ||
           ((lVar13 = *(long *)(param_1 + 0x400), lVar13 != 0 &&
            (lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16)))))))))))) {
      FUN_0130a7f0(lVar13,uVar3);
      *(undefined8 *)(param_1 + 800) = 0;
    }
  }
  lVar16 = *(long *)(param_1 + 0x330);
  if ((lVar16 != 0) && (lVar13 = *(long *)(param_1 + 1000), lVar13 != 0)) {
    uVar3 = *(undefined4 *)(param_1 + 0x338);
    lVar10 = FUN_013092c0(lVar13);
    if ((lVar10 == lVar16) ||
       ((lVar13 = *(long *)(param_1 + 0x3f0), lVar13 != 0 &&
        ((lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16 ||
         ((lVar13 = *(long *)(param_1 + 0x3f8), lVar13 != 0 &&
          ((lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16 ||
           ((lVar13 = *(long *)(param_1 + 0x400), lVar13 != 0 &&
            (lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16)))))))))))) {
      FUN_0130a7f0(lVar13,uVar3);
      *(undefined8 *)(param_1 + 0x330) = 0;
    }
  }
  lVar16 = *(long *)(param_1 + 0x340);
  if ((lVar16 != 0) && (lVar13 = *(long *)(param_1 + 1000), lVar13 != 0)) {
    uVar3 = *(undefined4 *)(param_1 + 0x348);
    lVar10 = FUN_013092c0(lVar13);
    if ((lVar10 == lVar16) ||
       ((lVar13 = *(long *)(param_1 + 0x3f0), lVar13 != 0 &&
        ((lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16 ||
         ((lVar13 = *(long *)(param_1 + 0x3f8), lVar13 != 0 &&
          ((lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16 ||
           ((lVar13 = *(long *)(param_1 + 0x400), lVar13 != 0 &&
            (lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16)))))))))))) {
      FUN_0130a7f0(lVar13,uVar3);
      *(undefined8 *)(param_1 + 0x340) = 0;
    }
  }
  lVar16 = *(long *)(param_1 + 0x350);
  if ((lVar16 != 0) && (lVar13 = *(long *)(param_1 + 1000), lVar13 != 0)) {
    uVar3 = *(undefined4 *)(param_1 + 0x358);
    lVar10 = FUN_013092c0(lVar13);
    if ((lVar10 == lVar16) ||
       ((lVar13 = *(long *)(param_1 + 0x3f0), lVar13 != 0 &&
        ((lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16 ||
         ((lVar13 = *(long *)(param_1 + 0x3f8), lVar13 != 0 &&
          ((lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16 ||
           ((lVar13 = *(long *)(param_1 + 0x400), lVar13 != 0 &&
            (lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16)))))))))))) {
      FUN_0130a7f0(lVar13,uVar3);
      *(undefined8 *)(param_1 + 0x350) = 0;
    }
  }
  lVar16 = *(long *)(param_1 + 0x360);
  if ((lVar16 != 0) && (lVar13 = *(long *)(param_1 + 1000), lVar13 != 0)) {
    uVar3 = *(undefined4 *)(param_1 + 0x368);
    lVar10 = FUN_013092c0(lVar13);
    if ((lVar10 == lVar16) ||
       ((lVar13 = *(long *)(param_1 + 0x3f0), lVar13 != 0 &&
        ((lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16 ||
         ((lVar13 = *(long *)(param_1 + 0x3f8), lVar13 != 0 &&
          ((lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16 ||
           ((lVar13 = *(long *)(param_1 + 0x400), lVar13 != 0 &&
            (lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16)))))))))))) {
      FUN_0130a7f0(lVar13,uVar3);
      *(undefined8 *)(param_1 + 0x360) = 0;
    }
  }
  lVar16 = *(long *)(param_1 + 0x370);
  if ((lVar16 != 0) && (lVar13 = *(long *)(param_1 + 1000), lVar13 != 0)) {
    uVar3 = *(undefined4 *)(param_1 + 0x378);
    lVar10 = FUN_013092c0(lVar13);
    if ((lVar10 == lVar16) ||
       ((lVar13 = *(long *)(param_1 + 0x3f0), lVar13 != 0 &&
        ((lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16 ||
         ((lVar13 = *(long *)(param_1 + 0x3f8), lVar13 != 0 &&
          ((lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16 ||
           ((lVar13 = *(long *)(param_1 + 0x400), lVar13 != 0 &&
            (lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16)))))))))))) {
      FUN_0130a7f0(lVar13,uVar3);
      *(undefined8 *)(param_1 + 0x370) = 0;
    }
  }
  lVar16 = *(long *)(param_1 + 0x380);
  if ((lVar16 != 0) && (lVar13 = *(long *)(param_1 + 1000), lVar13 != 0)) {
    uVar3 = *(undefined4 *)(param_1 + 0x388);
    lVar10 = FUN_013092c0(lVar13);
    if ((lVar10 == lVar16) ||
       ((lVar13 = *(long *)(param_1 + 0x3f0), lVar13 != 0 &&
        ((lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16 ||
         ((lVar13 = *(long *)(param_1 + 0x3f8), lVar13 != 0 &&
          ((lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16 ||
           ((lVar13 = *(long *)(param_1 + 0x400), lVar13 != 0 &&
            (lVar10 = FUN_013092c0(lVar13), lVar10 == lVar16)))))))))))) {
      FUN_0130a7f0(lVar13,uVar3);
      *(undefined8 *)(param_1 + 0x380) = 0;
    }
  }
  lVar16 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x418);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40c));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar16;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_012ee8ec;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar16;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_012ee8ec:
  puVar17 = *(undefined8 **)(param_1 + 200);
  puVar11 = *(undefined8 **)(param_1 + 0xd0);
  if (puVar17 != puVar11) {
LAB_012ee908:
    do {
      uVar2 = *puVar17;
      local_f0 = (undefined *)puVar17[2];
      FUN_0075efb0(&local_e8,puVar17[1],0,1);
      uVar3 = *(undefined4 *)(local_f0 + 0xc0);
      FUN_0075f0a0(&local_e8);
      switch(uVar3) {
      case 1:
        local_f0 = (undefined *)puVar17[2];
        FUN_0075efb0(&local_e8,puVar17[1],0,1);
        puVar8 = local_f0;
        FUN_0075f0a0(&local_e8);
        lVar16 = *(long *)(puVar8 + 0x28);
        iVar4 = *(int *)(puVar8 + 0x20);
        puVar15 = (undefined8 *)0x0;
        if (lVar16 != 0) {
          puVar15 = (undefined8 *)(lVar16 + 8);
        }
        if (iVar4 != 0) {
          lVar16 = (long)iVar4 << 3;
          do {
            FUN_012efd50(param_1,*puVar15,uVar2);
            lVar16 = lVar16 + -8;
            puVar15 = puVar15 + 1;
          } while (lVar16 != 0);
        }
        break;
      case 2:
        local_f0 = (undefined *)puVar17[2];
        FUN_0075efb0(&local_e8,puVar17[1],0,1);
        puVar8 = local_f0;
        FUN_0075f0a0(&local_e8);
        lVar16 = *(long *)(puVar8 + 0x40);
        iVar4 = *(int *)(puVar8 + 0x38);
        plVar14 = (long *)0x0;
        if (lVar16 != 0) {
          plVar14 = (long *)(lVar16 + 8);
        }
        if (iVar4 != 0) {
          lVar16 = (long)iVar4 << 3;
          do {
            lVar10 = *plVar14;
            lVar13 = FUN_012f11b0(param_1,*(undefined4 *)(lVar10 + 0x14));
            if (lVar13 != 0) {
              FUN_012e9020(lVar13,*(undefined4 *)(lVar10 + 0x18));
            }
            plVar14 = plVar14 + 1;
            lVar16 = lVar16 + -8;
          } while (lVar16 != 0);
        }
        break;
      case 3:
        goto switchD_012ee948_caseD_3;
      case 4:
        local_f0 = (undefined *)puVar17[2];
        FUN_0075efb0(&local_e8,puVar17[1],0,1);
        puVar8 = local_f0;
        FUN_0075f0a0(&local_e8);
        lVar16 = *(long *)(puVar8 + 0x58);
        iVar4 = *(int *)(puVar8 + 0x50);
        puVar15 = (undefined8 *)0x0;
        if (lVar16 != 0) {
          puVar15 = (undefined8 *)(lVar16 + 8);
        }
        if (iVar4 != 0) {
          lVar16 = (long)iVar4 << 3;
          do {
            FUN_012f0c10(param_1,*puVar15);
            lVar16 = lVar16 + -8;
            puVar15 = puVar15 + 1;
          } while (lVar16 != 0);
        }
        break;
      case 5:
        local_f0 = (undefined *)puVar17[2];
        FUN_0075efb0(&local_e8,puVar17[1],0,1);
        puVar8 = local_f0;
        FUN_0075f0a0(&local_e8);
        lVar16 = *(long *)(puVar8 + 0x70);
        iVar4 = *(int *)(puVar8 + 0x68);
        plVar14 = (long *)0x0;
        if (lVar16 != 0) {
          plVar14 = (long *)(lVar16 + 8);
        }
        if (iVar4 != 0) {
          lVar16 = (long)iVar4 << 3;
          do {
            lVar13 = *plVar14;
            uVar3 = *(undefined4 *)(lVar13 + 0x24);
            if ((*(int *)(param_1 + 0x94) == 4) ||
               (uVar9 = FUN_012ef7d0(param_1,*(undefined4 *)(lVar13 + 0x20),
                                     *(undefined8 *)(lVar13 + 0x18),uVar3,
                                     *(undefined4 *)(lVar13 + 0x28)), (uVar9 & 1) == 0)) {
              local_f0 = (undefined *)CONCAT44(local_f0._4_4_,*(undefined4 *)(lVar13 + 0x20));
              local_e8 = *(code **)(lVar13 + 0x18);
              local_e0 = (undefined *)CONCAT44(*(undefined4 *)(lVar13 + 0x28),uVar3);
              FUN_012f1b90(param_1,&local_f0);
            }
            plVar14 = plVar14 + 1;
            lVar16 = lVar16 + -8;
          } while (lVar16 != 0);
        }
        break;
      case 6:
        local_f0 = (undefined *)puVar17[2];
        FUN_0075efb0(&local_e8,puVar17[1],0,1);
        puVar8 = local_f0;
        FUN_0075f0a0(&local_e8);
        lVar16 = *(long *)(puVar8 + 0xa0);
        iVar4 = *(int *)(puVar8 + 0x98);
        puVar15 = (undefined8 *)0x0;
        if (lVar16 != 0) {
          puVar15 = (undefined8 *)(lVar16 + 8);
        }
        if (iVar4 != 0) {
          lVar16 = (long)iVar4 << 3;
          do {
            FUN_012f0ca0(param_1,*puVar15);
            lVar16 = lVar16 + -8;
            puVar15 = puVar15 + 1;
          } while (lVar16 != 0);
        }
        break;
      case 7:
        local_f0 = (undefined *)puVar17[2];
        FUN_0075efb0(&local_e8,puVar17[1],0,1);
        puVar8 = local_f0;
        FUN_0075f0a0(&local_e8);
        lVar16 = *(long *)(puVar8 + 0xb8);
        iVar4 = *(int *)(puVar8 + 0xb0);
        puVar15 = (undefined8 *)0x0;
        if (lVar16 != 0) {
          puVar15 = (undefined8 *)(lVar16 + 8);
        }
        if (iVar4 != 0) {
          lVar16 = (long)iVar4 << 3;
          do {
            FUN_012f0fc0(param_1,*puVar15);
            lVar16 = lVar16 + -8;
            puVar15 = puVar15 + 1;
          } while (lVar16 != 0);
        }
      }
      puVar17 = puVar17 + 6;
    } while (puVar17 != puVar11);
    goto LAB_012eebe8;
  }
LAB_012eec88:
  *(undefined8 **)(param_1 + 0xd0) = puVar17;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x40c));
  *(undefined1 *)(param_1 + 0x91) = 0;
  return;
switchD_012ee948_caseD_3:
  FUN_012f0920(param_1,puVar17[2]);
  puVar17 = puVar17 + 6;
  if (puVar17 == puVar11) goto LAB_012eebe8;
  goto LAB_012ee908;
LAB_012eebe8:
  puVar17 = *(undefined8 **)(param_1 + 200);
  puVar11 = *(undefined8 **)(param_1 + 0xd0);
  while (puVar15 = puVar11, puVar15 != puVar17) {
    FUN_0075efb0(&local_f0,puVar15[-5],0,1);
    puVar11 = (undefined8 *)puVar15[-4];
    puVar15[-4] = 0;
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)(puVar11);
      (**(code **)(*(long *)puVar15[-3] + 0x18))
                ((long *)puVar15[-3],puVar11,puVar15[-2],puVar15[-1]);
    }
    FUN_0075f0a0(&local_f0);
    puVar12 = (undefined8 *)puVar15[-4];
    puVar15[-4] = 0;
    puVar11 = puVar15 + -6;
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12);
      (**(code **)(*(long *)puVar15[-3] + 0x18))
                ((long *)puVar15[-3],puVar12,puVar15[-2],puVar15[-1]);
    }
  }
  goto LAB_012eec88;
}


