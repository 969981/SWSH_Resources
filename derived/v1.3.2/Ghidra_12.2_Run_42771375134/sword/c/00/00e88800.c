/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e88800; name: FUN_00e88800
 */


undefined8 FUN_00e88800(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  long local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  lVar12 = *(long *)(param_1 + 0x70);
  fVar14 = (float)*(undefined8 *)(param_1 + 0x90) - *(float *)(lVar12 + 0xb0);
  fVar15 = (float)*(undefined8 *)(param_1 + 0x98) - *(float *)(lVar12 + 0xb8);
  fVar16 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) - *(float *)(lVar12 + 0xbc);
  fVar14 = fVar14 * fVar14;
  fVar15 = fVar15 * fVar15;
  fVar16 = fVar16 * fVar16;
  auVar17._4_4_ = 0;
  auVar17._0_4_ = fVar14;
  auVar17._8_4_ = fVar15;
  auVar17._12_4_ = fVar16;
  auVar5._4_4_ = 0;
  auVar5._0_4_ = fVar14;
  auVar5._8_4_ = fVar15;
  auVar5._12_4_ = fVar16;
  auVar17 = NEON_ext(auVar17,auVar5,8,1);
  if (SQRT(auVar17._0_4_ + fVar14 + auVar17._4_4_ + 0.0) <= 1.0) {
    uVar10 = 0;
  }
  else {
    FUN_00c58c00(&local_48,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
    lVar11 = local_48;
    (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_60);
    local_58 = local_60;
    local_60 = 0;
    FUN_00c7a400(&local_50,lVar11,&local_58);
    if (*(long *)(param_1 + 0xc0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    uVar10 = local_50;
    local_50 = 0;
    *(undefined8 *)(param_1 + 0xc0) = uVar10;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    lVar11 = *(long *)(lVar12 + 0x298);
    if (((lVar11 != 0) && (*(long *)(lVar11 + 0x80) != 0)) &&
       (*(int *)(*(long *)(lVar11 + 0x80) + 0x54) != 0)) {
      lVar11 = *(long *)(lVar11 + 0x80);
      if ((lVar11 != 0) && (*(int *)(lVar11 + 0x54) != 0)) {
        piVar1 = (int *)(lVar11 + 0x54);
        iVar7 = *(int *)(lVar11 + 0x54);
        do {
          while( true ) {
            plVar13 = *(long **)(lVar11 + 0x58);
            lVar8 = FUN_006cbb10();
            while( true ) {
              if (plVar13 == (long *)0x0) goto LAB_00e88998;
              if (plVar13 == (long *)lVar8) break;
              plVar13 = (long *)*plVar13;
            }
            iVar2 = *piVar1;
            if (iVar2 != iVar7) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar11 = *(long *)(lVar11 + 0x60);
              if (lVar11 != 0) {
                *(undefined1 *)(lVar11 + 0x10) = 0;
                (**(code **)(*(long *)(lVar11 + -8) + 0x18))();
                goto LAB_00e889a0;
              }
              goto LAB_00e88998;
            }
            iVar7 = iVar2;
            if (iVar2 == 0) goto LAB_00e88998;
          }
          ClearExclusiveLocal();
          iVar7 = iVar2;
        } while (iVar2 != 0);
      }
LAB_00e88998:
      DAT_00000060 = 0;
    }
LAB_00e889a0:
    bVar6 = FUN_00db6d60(lVar12);
    *(byte *)(param_1 + 0x120) = bVar6 & 1;
    FUN_00db6d40(lVar12,*(undefined1 *)(param_1 + 0xb4));
    lVar12 = *(long *)(param_1 + 0x70);
    uVar9 = FUN_015772a0(lVar12 + 0x50);
    if (((lVar12 != 0) && ((uVar9 & 1) != 0)) && (iVar7 = FUN_00eaa240(lVar12), iVar7 == 0x382)) {
      *(undefined4 *)(param_1 + 0x144) = 0x78;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    uVar10 = 1;
  }
  return uVar10;
}


