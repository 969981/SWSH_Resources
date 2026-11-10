/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e93e0; name: FUN_004e93e0
 */


void FUN_004e93e0(undefined8 *param_1,undefined8 param_2,long param_3,float param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [8];
  long *plVar10;
  uint uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_d0;
  uint auStack_c8 [2];
  float afStack_c0 [4];
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  float local_98 [2];
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  float local_68 [2];
  
  if (*(uint *)(*(long *)(param_3 + 8) + 0x40) < 3) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 8) + 0x38) + 0x10);
  }
  local_80 = *(undefined4 *)(lVar5 + 0x78);
  uVar2 = *(undefined4 *)(lVar5 + 0x7c);
  uVar3 = *(undefined4 *)(lVar5 + 0x80);
  local_90._0_4_ = *(undefined4 *)(lVar5 + 0x6c);
  local_90._4_4_ = *(undefined4 *)(lVar5 + 0x70);
  uStack_88 = *(undefined4 *)(lVar5 + 0x74);
  uVar11 = *(uint *)(param_1 + 6);
  uVar7 = (ulong)uVar11;
  uVar8 = uVar7 * 4 + 0xf & 0x7fffffff0;
  pfVar12 = (float *)((long)afStack_c0 + (0x10 - uVar8));
  auVar9 = (undefined1  [8])((long)pfVar12 - uVar8);
  lVar5 = uVar7 * 8;
  puVar13 = (undefined8 *)((long)auVar9 - (lVar5 + 0xfU & 0xffffffff0));
  puVar14 = (undefined8 *)((long)puVar13 - (uVar7 * 0x28 + 0xf & 0x7ffffffff0));
  uStack_7c = uVar2;
  local_78 = uVar3;
  *(undefined4 *)(puVar14 + 3) = local_80;
  *(undefined4 *)((long)puVar14 + 0x1c) = uVar2;
  *(undefined4 *)(puVar14 + 4) = uVar3;
  *(undefined4 *)((long)puVar14 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(param_1 + 1);
  *puVar14 = *param_1;
  *(undefined8 *)((long)puVar14 + 0xc) = *(undefined8 *)((long)param_1 + 0xc);
  *(undefined4 *)((long)puVar14 + 0x14) = *(undefined4 *)((long)param_1 + 0x14);
  *pfVar12 = 100.0;
  *(undefined4 *)auVar9 = 0;
  *puVar13 = 0;
  if (uVar11 != 0) {
    fVar21 = *(float *)(param_3 + 0x60);
    plVar10 = (long *)param_1[5];
    do {
      lVar15 = *plVar10;
      local_a8 = auVar9;
      if (*(long *)(lVar15 + 0x38) == *(long *)(param_3 + 0x28)) {
        if (lVar15 != 0) {
          FUN_004eb320(&local_a0,lVar15,param_1[7],&local_80,*(undefined8 *)(param_3 + 0x30));
          puVar14[3] = local_a0;
          *(float *)(puVar14 + 4) = local_98[0];
          fVar17 = (float)FUN_004eb070(lVar15,&local_80,&local_90);
          local_68[0] = param_4;
          if (*(long *)(param_3 + 0x30) == param_1[7]) {
            *pfVar12 = DAT_01d4c6b8 - fVar17 * DAT_01d4be7c;
            lVar5 = FUN_004eb2a0(lVar15);
            param_4 = local_68[0];
          }
          else {
            *pfVar12 = fVar17 * DAT_01d4be7c;
            uVar2 = *(undefined4 *)(lVar15 + 0x8c);
            fVar21 = 1.0 - fVar21;
            *(undefined4 *)puVar13 = 0;
            *(undefined4 *)((long)puVar13 + 4) = uVar2;
            lVar5 = FUN_004eb2a0(lVar15);
            param_4 = local_68[0];
          }
          local_68[0] = param_4;
          if ((lVar5 != 0) && (*(int *)(param_1 + 6) != 0)) {
            plVar10 = (long *)param_1[5];
            uVar7 = 1;
            local_b0 = param_2;
            do {
              lVar16 = *plVar10;
              if (((lVar16 != lVar15) && (*(char *)(lVar16 + 0x98) != '\0')) &&
                 (uVar8 = FUN_004eb2e0(lVar16,*(undefined8 *)(lVar5 + 0x38)), (uVar8 & 1) != 0)) {
                local_68[1] = 0.0;
                uVar4 = *(undefined8 *)(lVar5 + 0x38);
                puVar1 = (undefined4 *)((long)local_a8 + uVar7 * 4);
                *(float *)(puVar14 + -1) = local_68[0];
                puVar14[-4] = puVar1;
                puVar14[-3] = puVar13 + uVar7;
                puVar14[-2] = local_68 + 1;
                FUN_004e9d80(param_1,lVar16,param_3,uVar4,&local_80,&local_90,puVar14 + uVar7 * 5,
                             pfVar12 + uVar7);
                uVar7 = (ulong)((int)uVar7 + 1);
              }
              param_4 = local_68[0];
              uVar11 = (uint)uVar7;
              plVar10 = plVar10 + 1;
            } while (plVar10 != (long *)(param_1[5] + (ulong)*(uint *)(param_1 + 6) * 8));
            auVar9 = local_a8;
            param_2 = local_b0;
            if (1 < uVar11) {
              fVar21 = 1.0 - fVar21;
              fVar19 = *(float *)(puVar14 + 4);
              fVar17 = *(float *)(puVar14 + 3);
              fVar18 = *(float *)((long)puVar14 + 0x1c);
              lVar5 = uVar7 - 1;
              fVar21 = fVar21 * fVar21 * fVar21;
              fVar20 = 1.0 - fVar21;
              pfVar6 = (float *)(puVar14 + 9);
              do {
                pfVar6[-2] = fVar17 * fVar20 + fVar21 * pfVar6[-2];
                pfVar6[-1] = fVar18 * fVar20 + fVar21 * pfVar6[-1];
                lVar5 = lVar5 + -1;
                *pfVar6 = fVar19 * fVar20 + fVar21 * *pfVar6;
                pfVar6 = pfVar6 + 10;
              } while (lVar5 != 0);
            }
            goto LAB_004e96e4;
          }
        }
        break;
      }
      lVar5 = lVar5 + -8;
      plVar10 = plVar10 + 1;
    } while (lVar5 != 0);
    auVar9 = local_a8;
  }
  uVar11 = 1;
LAB_004e96e4:
  uVar4 = *(undefined8 *)(*(long *)(param_3 + 8) + 0x48);
  *(float *)(puVar14 + -2) = param_4;
  *(uint *)(puVar14 + -3) = uVar11;
  puVar14[-4] = auVar9;
  FUN_004e9c00(0,param_1,param_2,uVar4,&local_80,0,puVar13,puVar14,pfVar12);
  return;
}


