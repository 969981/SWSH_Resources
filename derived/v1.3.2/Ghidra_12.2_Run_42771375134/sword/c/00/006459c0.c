/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006459c0; name: FUN_006459c0
 */


undefined8 FUN_006459c0(long param_1)

{
  float *pfVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_a8;
  float local_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  if (*(int *)(param_1 + 0x28) < 1) {
LAB_00645eb8:
    uVar5 = 0;
  }
  else {
    plVar13 = *(long **)(param_1 + 0x20);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    plVar3 = (long *)(**(code **)(*plVar13 + 0x28))(plVar13);
    (**(code **)(*plVar3 + 0x70))();
    lVar4 = FUN_005ffc80(plVar13);
    plVar13 = *(long **)(lVar4 + 0x1c0);
    plVar3 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar13 + 0x38))(plVar13,plVar3);
    if (*(int *)(param_1 + 0x28) == 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_00645eb8;
      if (0 < *(int *)(param_1 + 0x2c)) {
        (**(code **)(*plVar3 + 0x298))(plVar3,1);
        local_90 = 0x3f00000000;
        local_80 = 0x3f00000000;
        local_88 = 0x200000001;
        local_78 = 0x200000001;
        (**(code **)(*plVar3 + 0x90))(plVar3,1,&local_90);
        plVar6 = (long *)(**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
        lVar4 = (**(code **)(*plVar6 + 0x170))(plVar6,0x44);
        if (lVar4 == 0) {
          return 0;
        }
        plVar13 = (long *)plVar13[6];
        (**(code **)(*plVar3 + 0x2e0))(plVar3,1,2,0,plVar13);
        (**(code **)(*plVar3 + 0x2f0))(plVar3,1,2,0,*(undefined8 *)(param_1 + 0x228));
        (**(code **)(*plVar13 + 0x100))(plVar13,*(undefined8 *)(param_1 + 0x228));
        lVar7 = (**(code **)(**(long **)(param_1 + 0x18) + 0x108))();
        fVar15 = *(float *)(lVar7 + 0x34);
        lVar7 = (**(code **)(**(long **)(param_1 + 0x18) + 0x108))();
        local_a8 = 0;
        local_a0 = (float)(int)fVar15;
        fStack_9c = (float)(int)*(float *)(lVar7 + 0x38);
        local_98 = 0x3f800000bf800000;
        (**(code **)(*plVar3 + 0x70))(plVar3,1,&local_a8);
        plVar13 = (long *)(**(code **)(*plVar3 + 0x2a8))(plVar3);
        *plVar13 = lVar4;
        lVar4 = *(long *)(param_1 + 0x1c0);
        *(undefined4 *)((long)plVar13 + 0x16c) = 4;
        plVar13[1] = lVar4;
        plVar13[2] = 0x300000001;
        *(undefined8 *)((long)plVar13 + 0x6c) = 0x500000001;
        *(undefined8 *)((long)plVar13 + 100) = 0x600000005;
        *(undefined8 *)((long)plVar13 + 0x74) = 0x100000006;
        *(undefined2 *)((long)plVar13 + 0x34) = 0;
        *(undefined1 *)(plVar13 + 0xc) = 1;
        *(uint *)(plVar13 + 0x31) = *(uint *)(plVar13 + 0x31) | 0x5f;
        fVar15 = DAT_01d4c154;
        if (0 < *(int *)(param_1 + 0x2c)) {
          lVar7 = *(long *)(param_1 + 0x148);
          lVar4 = 0;
          iVar14 = 0;
          do {
            plVar13 = (long *)(*(long *)(param_1 + 0x58) + lVar4 * 0x38);
            lVar9 = *plVar13;
            pfVar10 = (float *)(lVar7 + 0x14 + (long)(iVar14 << 2) * 0x28);
            lVar12 = 0;
            pfVar11 = (float *)(param_1 + 0x1d4);
            do {
              pfVar1 = (float *)(param_1 + 0x20c + lVar12);
              lVar12 = lVar12 + 8;
              fVar16 = pfVar11[-3] * *(float *)((long)plVar13 + 0x1c) +
                       *(float *)((long)plVar13 + 0x14) + *(float *)(lVar9 + 8);
              fVar24 = pfVar11[-1];
              fVar20 = *pfVar11;
              fVar18 = pfVar11[-2] * *(float *)(plVar13 + 4) +
                       *(float *)(plVar13 + 3) + *(float *)(lVar9 + 0xc);
              fVar26 = *(float *)((long)plVar13 + 0x2c);
              fVar21 = *(float *)(plVar13 + 6);
              fVar22 = *(float *)((long)plVar13 + 0x24);
              fVar23 = *(float *)(plVar13 + 5);
              fVar19 = pfVar1[-1];
              fVar25 = *pfVar1;
              auVar17._0_8_ =
                   CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 0x20) * fVar16 +
                            (float)((ulong)*(undefined8 *)(param_1 + 0xf0) >> 0x20) * fVar18 +
                            (float)((ulong)*(undefined8 *)(param_1 + 0x100) >> 0x20) * fVar24 +
                            (float)((ulong)*(undefined8 *)(param_1 + 0x110) >> 0x20) * fVar20,
                            (float)*(undefined8 *)(param_1 + 0xe0) * fVar16 +
                            (float)*(undefined8 *)(param_1 + 0xf0) * fVar18 +
                            (float)*(undefined8 *)(param_1 + 0x100) * fVar24 +
                            (float)*(undefined8 *)(param_1 + 0x110) * fVar20);
              auVar17._8_4_ =
                   (float)*(undefined8 *)(param_1 + 0xe8) * fVar16 +
                   (float)*(undefined8 *)(param_1 + 0xf8) * fVar18 +
                   (float)*(undefined8 *)(param_1 + 0x108) * fVar24 +
                   (float)*(undefined8 *)(param_1 + 0x118) * fVar20;
              auVar17._12_4_ =
                   (float)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20) * fVar16 +
                   (float)((ulong)*(undefined8 *)(param_1 + 0xf8) >> 0x20) * fVar18 +
                   (float)((ulong)*(undefined8 *)(param_1 + 0x108) >> 0x20) * fVar24 +
                   (float)((ulong)*(undefined8 *)(param_1 + 0x118) >> 0x20) * fVar20;
              *(undefined8 *)(pfVar10 + -5) = auVar17._0_8_;
              auVar17 = NEON_ext(auVar17,auVar17,8,1);
              pfVar10[3] = fVar19 * fVar26 + fVar22;
              pfVar10[4] = fVar25 * fVar21 + fVar23;
              *(long *)(pfVar10 + -3) = auVar17._0_8_;
              fVar16 = (float)NEON_ucvtf((uint)*(byte *)(plVar13 + 2));
              pfVar10[-1] = fVar16 / fVar15;
              pfVar11 = pfVar11 + 4;
              fVar16 = (float)NEON_ucvtf((uint)*(byte *)((long)plVar13 + 0x11));
              *pfVar10 = fVar16 / fVar15;
              fVar16 = (float)NEON_ucvtf((uint)*(byte *)((long)plVar13 + 0x12));
              pfVar10[1] = fVar16 / fVar15;
              fVar16 = (float)NEON_ucvtf((uint)*(byte *)((long)plVar13 + 0x13));
              pfVar10[2] = fVar16 / fVar15;
              pfVar10 = pfVar10 + 10;
            } while (lVar12 != 0x20);
            iVar14 = iVar14 + 1;
            iVar2 = iVar14 * 4;
            lVar4 = lVar4 + 1;
            if (*(int *)(param_1 + 0x130) <= iVar2) {
              pvVar8 = (void *)(**(code **)(*plVar3 + 0x250))(plVar3,0,iVar2,0x28);
              memcpy(pvVar8,*(void **)(param_1 + 0x148),(long)iVar2 * 0x28);
              (**(code **)(*plVar3 + 600))(plVar3);
              pvVar8 = (void *)(**(code **)(*plVar3 + 0x260))(plVar3,0x39,iVar14 * 6);
              memcpy(pvVar8,*(void **)(param_1 + 0x198),(long)iVar14 * 0xc);
              (**(code **)(*plVar3 + 0x268))(plVar3);
              iVar14 = 0;
            }
          } while (lVar4 < *(int *)(param_1 + 0x2c));
          if (0 < iVar14) {
            pvVar8 = (void *)(**(code **)(*plVar3 + 0x250))(plVar3,0,iVar14 << 2,0x28);
            memcpy(pvVar8,*(void **)(param_1 + 0x148),(long)(iVar14 << 2) * 0x28);
            (**(code **)(*plVar3 + 600))(plVar3);
            pvVar8 = (void *)(**(code **)(*plVar3 + 0x260))(plVar3,0x39,iVar14 * 6);
            memcpy(pvVar8,*(void **)(param_1 + 0x198),(long)iVar14 * 0xc);
            (**(code **)(*plVar3 + 0x268))(plVar3);
            (**(code **)(*plVar3 + 200))(plVar3,iVar14 * 6,0,0,1,0);
          }
        }
        *(undefined4 *)(param_1 + 0x2c) = 0;
        (**(code **)(*plVar3 + 0x298))(plVar3,0);
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}


