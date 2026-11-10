/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cc690; name: FUN_006cc690
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_006cc690(undefined8 param_1,long param_2,long *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  float fVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  long lVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar11 = PTR_DAT_02715288;
  puVar10 = PTR_DAT_02715280;
  if (*param_3 == 0) {
    return false;
  }
  if (*(int *)(*param_3 + 0x54) == 0) {
    return false;
  }
  lVar18 = *param_3;
  if (lVar18 != 0) {
    if (*(int *)(lVar18 + 0x54) == 0) {
LAB_006cca48:
      lVar18 = *(long *)(param_2 + 0x48);
      goto joined_r0x006cc798;
    }
    piVar1 = (int *)(lVar18 + 0x54);
    iVar23 = *(int *)(lVar18 + 0x54);
    do {
      while( true ) {
        plVar19 = *(long **)(lVar18 + 0x58);
        if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
          uVar14 = FUN_01590a70();
          *(undefined8 *)puVar11 = uVar14;
          __cxa_guard_release(puVar10);
        }
        while( true ) {
          if (plVar19 == (long *)0x0) goto LAB_006cca48;
          if (plVar19 == (long *)puVar11) break;
          plVar19 = (long *)*plVar19;
        }
        iVar12 = *piVar1;
        if (iVar12 != iVar23) break;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar23 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar18 = *(long *)(lVar18 + 0x60);
          if (lVar18 == 0) goto LAB_006cca48;
          lVar17 = lVar18 + -0x50;
          (**(code **)(*(long *)(lVar18 + -8) + 0x18))();
          lVar18 = *(long *)(param_2 + 0x48);
          pbVar8 = PTR_DAT_02715290;
          puVar9 = (undefined8 *)PTR_DAT_02715298;
          goto joined_r0x006cca40;
        }
        iVar23 = iVar12;
        if (iVar12 == 0) goto LAB_006cc78c;
      }
      ClearExclusiveLocal();
      iVar23 = iVar12;
    } while (iVar12 != 0);
  }
LAB_006cc78c:
  lVar18 = *(long *)(param_2 + 0x48);
joined_r0x006cc798:
  lVar17 = 0;
  pbVar8 = PTR_DAT_02715290;
  puVar9 = (undefined8 *)PTR_DAT_02715298;
joined_r0x006cca40:
  PTR_DAT_02715290 = pbVar8;
  PTR_DAT_02715298 = (undefined *)puVar9;
  local_80 = _DAT_01d4b8f0;
  uStack_78 = _UNK_01d4b8f8;
  if (lVar18 == 0) {
    iVar23 = 0;
  }
  else {
    iVar23 = 0;
    plVar19 = *(long **)(param_2 + 0x40);
    fVar7 = 0.0;
    plVar2 = plVar19 + lVar18;
    do {
      if ((*plVar19 != 0) && (*(int *)(*plVar19 + 0x54) != 0)) {
        lVar18 = *plVar19;
        cVar4 = DAT_00000060;
        if ((lVar18 != 0) && (*(int *)(lVar18 + 0x54) != 0)) {
          piVar1 = (int *)(lVar18 + 0x54);
          iVar12 = *(int *)(lVar18 + 0x54);
          do {
            while( true ) {
              plVar20 = *(long **)(lVar18 + 0x58);
              if (((*pbVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar8), iVar13 != 0)) {
                uVar14 = FUN_01590a70();
                *puVar9 = uVar14;
                __cxa_guard_release(pbVar8);
              }
              while( true ) {
                cVar4 = DAT_00000060;
                if (plVar20 == (long *)0x0) goto joined_r0x006cc888;
                if (plVar20 == puVar9) break;
                plVar20 = (long *)*plVar20;
              }
              iVar13 = *piVar1;
              if (iVar13 != iVar12) break;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              cVar4 = DAT_00000060;
              if (cVar3 == '\0') {
                lVar18 = *(long *)(lVar18 + 0x60);
                if (lVar18 != 0) {
                  cVar4 = *(char *)(lVar18 + 0x10);
                  (**(code **)(*(long *)(lVar18 + -8) + 0x18))();
                }
                goto joined_r0x006cc888;
              }
              iVar12 = iVar13;
              if (iVar13 == 0) goto joined_r0x006cc888;
            }
            ClearExclusiveLocal();
            iVar12 = iVar13;
          } while (iVar13 != 0);
        }
joined_r0x006cc888:
        if (cVar4 != '\0') {
          lVar18 = *plVar19;
          if (lVar18 == 0) {
LAB_006cc938:
            pcVar16 = (code *)*param_4;
          }
          else {
            if (*(int *)(lVar18 + 0x54) != 0) {
              piVar1 = (int *)(lVar18 + 0x54);
              iVar12 = *(int *)(lVar18 + 0x54);
              do {
                while( true ) {
                  puVar21 = *(undefined8 **)(lVar18 + 0x58);
                  if (((*pbVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar8), iVar13 != 0)) {
                    uVar14 = FUN_01590a70();
                    *puVar9 = uVar14;
                    __cxa_guard_release(pbVar8);
                  }
                  while( true ) {
                    if (puVar21 == (undefined8 *)0x0) goto LAB_006cc938;
                    if (puVar21 == puVar9) break;
                    puVar21 = (undefined8 *)*puVar21;
                  }
                  iVar13 = *piVar1;
                  if (iVar13 != iVar12) break;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar12 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') {
                    lVar18 = *(long *)(lVar18 + 0x60);
                    if (lVar18 == 0) goto LAB_006cc978;
                    lVar22 = lVar18 + -0x50;
                    (**(code **)(*(long *)(lVar18 + -8) + 0x18))();
                    pcVar16 = (code *)*param_4;
                    goto joined_r0x006cc970;
                  }
                  iVar12 = iVar13;
                  if (iVar13 == 0) goto LAB_006cc938;
                }
                ClearExclusiveLocal();
                iVar12 = iVar13;
              } while (iVar13 != 0);
              goto LAB_006cc938;
            }
LAB_006cc978:
            pcVar16 = (code *)*param_4;
          }
          lVar22 = 0;
joined_r0x006cc970:
          if ((pcVar16 == (code *)0x0) ||
             (uVar15 = (*pcVar16)(param_4 + 4,lVar22), (uVar15 & 1) != 0)) {
            local_70 = 0;
            uStack_68 = 0;
            uVar15 = FUN_006cbf20(lVar17,lVar22,&local_70);
            if ((uVar15 & 1) != 0) {
              fVar24 = (float)uStack_68;
              fVar25 = (float)((ulong)uStack_68 >> 0x20);
              fVar26 = (float)local_70 * (float)local_70;
              fVar27 = local_70._4_4_ * local_70._4_4_;
              auVar29._4_4_ = fVar27;
              auVar29._0_4_ = fVar26;
              auVar29._8_4_ = fVar24 * fVar24;
              auVar29._12_4_ = fVar25 * fVar25;
              auVar6._4_4_ = fVar27;
              auVar6._0_4_ = fVar26;
              auVar6._8_4_ = fVar24 * fVar24;
              auVar6._12_4_ = fVar25 * fVar25;
              auVar29 = NEON_ext(auVar29,auVar6,8,1);
              fVar26 = auVar29._0_4_ + fVar26 + auVar29._4_4_ + fVar27;
              uVar28 = -(uint)(fVar7 < fVar26);
              if (fVar26 <= fVar7) {
                fVar26 = fVar7;
              }
              iVar23 = iVar23 + 1;
              uStack_78 = CONCAT44(uStack_78._4_4_ ^ (uStack_78._4_4_ ^ (uint)fVar25) & uVar28,
                                   (uint)uStack_78 ^ ((uint)uStack_78 ^ (uint)fVar24) & uVar28);
              local_80 = CONCAT44(local_80._4_4_ ^ (local_80._4_4_ ^ (uint)local_70._4_4_) & uVar28,
                                  (uint)local_80 ^ ((uint)local_80 ^ (uint)(float)local_70) & uVar28
                                 );
              fVar7 = fVar26;
            }
          }
        }
      }
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar2);
  }
  if (param_5 != (undefined8 *)0x0) {
    param_5[1] = uStack_78;
    *param_5 = local_80;
  }
  return iVar23 != 0;
}


