/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00571520; name: FUN_00571520
 */


undefined8
FUN_00571520(float param_1,float param_2,float param_3,float param_4,long param_5,uint param_6,
            void *param_7,void *param_8,uint param_9,int *param_10,float *param_11,
            undefined8 *param_12)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_3c0 [64];
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280 [5];
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined4 local_244;
  undefined4 local_240 [5];
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined8 local_214;
  undefined8 uStack_20c;
  undefined4 local_204;
  float local_200 [5];
  float local_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined8 uStack_1cc;
  undefined4 local_1c4;
  undefined4 local_1c0 [5];
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 local_194;
  float local_190;
  float local_18c;
  undefined8 local_188;
  undefined1 auStack_180 [64];
  float local_140 [16];
  undefined4 local_100 [16];
  undefined1 auStack_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  
  (**(code **)(**(long **)(param_5 + 0x20) + 0x88))(*(long **)(param_5 + 0x20),auStack_c0);
  fVar12 = (float)NEON_ucvtf(local_b8);
  fVar13 = (float)NEON_ucvtf(local_b4);
  param_1 = param_1 - fVar12 * 0.5;
  param_2 = param_2 - fVar13 * 0.5;
  *param_10 = 4;
  if (0 < (int)param_6) {
    memcpy(local_100,param_7,(ulong)param_6 << 3);
    memcpy(local_140,param_8,(ulong)param_6 << 3);
  }
  param_3 = param_1 + param_3;
  param_4 = param_2 + param_4;
  if ((param_9 >> 0x10 & 1) == 0) {
    param_3 = param_1 + (param_3 - param_1) + (param_3 - param_1);
    param_2 = param_4 + (param_2 - param_4) + (param_2 - param_4);
    *param_10 = 3;
    if (0 < (int)param_6) {
      uVar4 = (ulong)param_6;
      pfVar5 = (float *)((ulong)local_100 | 4);
      pfVar6 = local_140;
      do {
        uVar4 = uVar4 - 1;
        fVar11 = *pfVar5 - pfVar6[1];
        fVar10 = *pfVar6 - pfVar5[-1];
        *pfVar6 = pfVar5[-1] + fVar10 + fVar10;
        *pfVar5 = pfVar6[1] + fVar11 + fVar11;
        pfVar5 = pfVar5 + 2;
        pfVar6 = pfVar6 + 2;
      } while (uVar4 != 0);
    }
  }
  fVar11 = (2.0 / fVar12) * (param_1 + 0.0);
  fVar10 = (2.0 / fVar13) * (param_4 + 0.0);
  fVar13 = (2.0 / fVar13) * (param_2 + 0.0);
  fVar12 = (2.0 / fVar12) * (param_3 + 0.0);
  param_11[2] = 0.0;
  param_11[5] = 0.0;
  param_11[8] = 0.0;
  param_11[0xb] = 0.0;
  *param_11 = fVar11;
  param_11[1] = fVar10;
  param_11[3] = fVar11;
  param_11[4] = fVar13;
  param_11[6] = fVar12;
  param_11[7] = fVar10;
  param_11[9] = fVar12;
  param_11[10] = fVar13;
  if (0 < (int)param_6) {
    uVar4 = 0;
    puVar8 = param_12;
    do {
      lVar9 = uVar4 * 8;
      uVar1 = local_100[uVar4 * 2];
      uVar2 = local_100[uVar4 * 2 + 1];
      fVar12 = local_140[uVar4 * 2 + 1];
      puVar7 = param_12 + uVar4 * 4;
      *puVar7 = CONCAT44(fVar12,uVar1);
      puVar7[1] = CONCAT44(uVar2,uVar1);
      fVar13 = local_140[uVar4 * 2];
      puVar7[2] = CONCAT44(fVar12,fVar13);
      puVar7[3] = CONCAT44(uVar2,fVar13);
      if (*(long *)(param_5 + lVar9 + 0x29b68) != 0) {
        FUN_005156a0(auStack_180);
        local_200[0] = *(float *)((long)param_8 + lVar9);
        fVar12 = ((float *)((long)param_8 + lVar9))[1];
        local_240[0] = *(undefined4 *)(param_5 + 0x29ba8);
        fVar13 = *(float *)((long)param_7 + lVar9);
        fVar10 = ((float *)((long)param_7 + lVar9))[1];
        local_194 = 0;
        *(undefined8 *)((ulong)local_1c0 | 4) = 0;
        ((undefined8 *)((ulong)local_1c0 | 4))[1] = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_188 = 0x3f80000000000000;
        local_200[0] = local_200[0] - fVar13;
        fVar11 = local_200[0] * 0.5;
        local_200[0] = 1.0 / local_200[0];
        *(undefined8 *)((ulong)local_200 | 4) = 0;
        ((undefined8 *)((ulong)local_200 | 4))[1] = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1d4 = 0;
        uStack_1cc = 0;
        local_1d8 = 0x3f800000;
        *(undefined8 *)((ulong)local_240 | 4) = 0;
        ((undefined8 *)((ulong)local_240 | 4))[1] = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_190 = -(fVar13 + fVar11);
        local_18c = -(fVar10 + fVar11);
        local_198 = 0x3f800000;
        local_1ac = 0x3f800000;
        local_1c0[0] = 0x3f800000;
        local_1c4 = 0x3f800000;
        local_200[0] = local_200[0] + local_200[0];
        local_214 = 0;
        uStack_20c = 0;
        local_22c = 0x3f800000;
        local_218 = 0x3f800000;
        local_204 = 0x3f800000;
        local_1ec = 1.0 / (fVar12 - fVar10);
        local_1ec = local_1ec + local_1ec;
        cVar3 = *(char *)(*(long *)(param_5 + 0x20) + 0x58);
        *(undefined8 *)((ulong)local_280 | 4) = 0;
        ((undefined8 *)((ulong)local_280 | 4))[1] = 0;
        local_268 = 0;
        uStack_260 = 0;
        local_26c = 0x3f800000;
        if (cVar3 != '\0') {
          local_26c = 0xbf800000;
        }
        local_254 = 0;
        uStack_24c = 0;
        local_280[0] = 0x3f800000;
        local_258 = 0x3f800000;
        local_244 = 0x3f800000;
        FUN_00515cb0(&local_380,local_1c0,local_200);
        FUN_00515cb0(&local_340,&local_380,local_240);
        FUN_00515cb0(&local_300,&local_340,local_280);
        local_2a8 = local_2e8;
        local_2b0 = local_2f0;
        local_2b8 = local_2f8;
        local_2c0 = local_300;
        local_288 = local_2c8;
        local_290 = local_2d0;
        local_298 = local_2d8;
        local_2a0 = local_2e0;
        FUN_005156a0(&local_300,&local_2c0);
        FUN_00515cb0(auStack_3c0,&local_2c0,auStack_180);
        FUN_00515cb0(&local_380,auStack_3c0,&local_300);
        local_328 = local_368;
        local_330 = local_370;
        local_338 = local_378;
        local_340 = local_380;
        local_308 = local_348;
        local_310 = local_350;
        local_318 = local_358;
        local_320 = local_360;
        if (0 < *param_10) {
          lVar9 = 0;
          puVar7 = puVar8;
          do {
            local_380 = *puVar7;
            FUN_005101a0(puVar7,&local_380,&local_340);
            lVar9 = lVar9 + 1;
            puVar7 = puVar7 + 1;
          } while (lVar9 < *param_10);
        }
      }
      uVar4 = uVar4 + 1;
      puVar8 = puVar8 + 4;
    } while (uVar4 != param_6);
  }
  return 0;
}


