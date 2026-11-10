/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f443b0; name: FUN_00f443b0
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_00f443b0(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 auVar3 [16];
  byte *pbVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  
  puVar11 = PTR_DAT_027194f8;
  if ((((*param_1 == 0) || (*(int *)(*param_1 + 0x54) == 0)) || (*param_2 == 0)) ||
     (*(int *)(*param_2 + 0x54) == 0)) {
    bVar5 = false;
  }
  else {
    lVar14 = *param_1;
    if ((lVar14 != 0) && (*(int *)(lVar14 + 0x54) != 0)) {
      piVar1 = (int *)(lVar14 + 0x54);
      puVar10 = PTR_DAT_02719500;
      iVar12 = *(int *)(lVar14 + 0x54);
      do {
        while( true ) {
          plVar13 = *(long **)(lVar14 + 0x58);
          if (((*puVar11 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(puVar11), puVar10 = PTR_DAT_02719500, iVar6 != 0)) {
            if (((*PTR_DAT_02715078 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_02715078), iVar6 != 0)) {
              uVar8 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar8;
              __cxa_guard_release(PTR_DAT_02715078);
            }
            puVar10 = PTR_DAT_02719500;
            *(undefined **)PTR_DAT_02719500 = PTR_DAT_02715080;
            __cxa_guard_release(puVar11);
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_00f44550;
            if (plVar13 == (long *)puVar10) break;
            plVar13 = (long *)*plVar13;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar12) break;
          ClearExclusiveLocal();
          iVar12 = iVar6;
          if (iVar6 == 0) goto LAB_00f44550;
        }
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x60);
          if (lVar14 != 0) {
            lVar7 = FUN_00f21fe0(lVar14);
            (**(code **)(*(long *)(lVar14 + -8) + 0x18))((long *)(lVar14 + -8));
            lVar14 = *param_2;
            pbVar4 = PTR_DAT_027194f8;
            puVar11 = PTR_DAT_02719500;
            goto joined_r0x00f44548;
          }
          break;
        }
        iVar12 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00f44550:
    lVar7 = FUN_00f21fe0(0x50);
    lVar14 = *param_2;
    pbVar4 = PTR_DAT_027194f8;
    puVar11 = PTR_DAT_02719500;
joined_r0x00f44548:
    PTR_DAT_027194f8 = pbVar4;
    PTR_DAT_02719500 = puVar11;
    if ((lVar14 != 0) && (*(int *)(lVar14 + 0x54) != 0)) {
      piVar1 = (int *)(lVar14 + 0x54);
      iVar12 = *(int *)(lVar14 + 0x54);
      do {
        while( true ) {
          plVar13 = *(long **)(lVar14 + 0x58);
          if (((*pbVar4 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(pbVar4), puVar11 = PTR_DAT_02719500, iVar6 != 0)) {
            if (((*PTR_DAT_02715078 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_02715078), iVar6 != 0)) {
              uVar8 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar8;
              __cxa_guard_release(PTR_DAT_02715078);
            }
            puVar11 = PTR_DAT_02719500;
            *(undefined **)PTR_DAT_02719500 = PTR_DAT_02715080;
            __cxa_guard_release(pbVar4);
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_00f446a4;
            if (plVar13 == (long *)puVar11) break;
            plVar13 = (long *)*plVar13;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar12) break;
          ClearExclusiveLocal();
          iVar12 = iVar6;
          if (iVar6 == 0) goto LAB_00f446a4;
        }
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x60);
          if (lVar14 != 0) {
            lVar9 = FUN_00f21fe0(lVar14);
            (**(code **)(*(long *)(lVar14 + -8) + 0x18))((long *)(lVar14 + -8));
            goto joined_r0x00f4469c;
          }
          break;
        }
        iVar12 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00f446a4:
    lVar9 = FUN_00f21fe0(0x50);
joined_r0x00f4469c:
    bVar5 = false;
    if ((lVar7 != 0) && (bVar5 = false, lVar9 != 0)) {
      fVar15 = (float)*(undefined8 *)(lVar7 + 0xb0) - (float)*(undefined8 *)(lVar9 + 0xb0);
      fVar16 = (float)((ulong)*(undefined8 *)(lVar7 + 0xb0) >> 0x20) -
               (float)((ulong)*(undefined8 *)(lVar9 + 0xb0) >> 0x20);
      fVar17 = (float)*(undefined8 *)(lVar7 + 0xb8) - (float)*(undefined8 *)(lVar9 + 0xb8);
      fVar18 = (float)((ulong)*(undefined8 *)(lVar7 + 0xb8) >> 0x20) -
               (float)((ulong)*(undefined8 *)(lVar9 + 0xb8) >> 0x20);
      fVar15 = fVar15 * fVar15;
      fVar16 = fVar16 * fVar16;
      fVar17 = fVar17 * fVar17;
      fVar18 = fVar18 * fVar18;
      auVar19._4_4_ = fVar16;
      auVar19._0_4_ = fVar15;
      auVar19._8_4_ = fVar17;
      auVar19._12_4_ = fVar18;
      auVar3._4_4_ = fVar16;
      auVar3._0_4_ = fVar15;
      auVar3._8_4_ = fVar17;
      auVar3._12_4_ = fVar18;
      auVar19 = NEON_ext(auVar19,auVar3,8,1);
      bVar5 = auVar19._0_4_ + fVar15 + auVar19._4_4_ + fVar16 <=
              *(float *)(lVar7 + 0x8cc) * *(float *)(lVar7 + 0x8cc);
    }
  }
  return bVar5;
}


