/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01034940; name: FUN_01034940
 */


void FUN_01034940(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  size_t __n;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong local_2c0;
  undefined4 local_2a0;
  char cStack_29c;
  char cStack_29b;
  char cStack_29a;
  char cStack_299;
  undefined1 local_298;
  undefined1 uStack_297;
  undefined1 uStack_296;
  undefined2 uStack_295;
  undefined1 uStack_293;
  undefined1 uStack_292;
  undefined1 uStack_291;
  undefined1 uStack_290;
  undefined1 uStack_28f;
  undefined1 uStack_28e;
  undefined2 uStack_28d;
  undefined1 uStack_28b;
  undefined1 uStack_28a;
  undefined1 uStack_289;
  undefined1 uStack_288;
  undefined1 uStack_287;
  undefined1 local_286;
  undefined2 uStack_285;
  undefined1 uStack_283;
  undefined1 uStack_282;
  undefined1 uStack_281;
  undefined1 uStack_280;
  undefined1 uStack_27f;
  undefined1 local_27e;
  undefined2 uStack_27d;
  undefined1 uStack_27b;
  undefined1 uStack_27a;
  undefined1 uStack_279;
  undefined1 uStack_278;
  undefined1 uStack_277;
  undefined1 local_276;
  undefined2 uStack_275;
  undefined1 uStack_273;
  undefined1 uStack_272;
  undefined1 uStack_271;
  undefined1 uStack_270;
  undefined1 uStack_26f;
  undefined1 local_26e;
  undefined2 uStack_26d;
  undefined1 uStack_26b;
  undefined1 uStack_26a;
  undefined1 uStack_269;
  undefined1 uStack_268;
  undefined1 uStack_267;
  undefined1 uStack_266;
  undefined2 uStack_265;
  undefined1 uStack_263;
  undefined1 uStack_262;
  undefined1 uStack_261;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  ulong local_258;
  char local_250;
  undefined8 local_24f;
  undefined8 local_247;
  undefined8 local_23f;
  undefined8 local_237;
  undefined8 local_22f;
  undefined8 local_227;
  undefined8 local_21f;
  undefined8 local_217;
  char acStack_208 [6];
  char local_202 [2];
  char acStack_200 [6];
  undefined2 local_1fa;
  undefined6 uStack_1f8;
  undefined2 local_1f2;
  undefined6 uStack_1f0;
  undefined2 local_1ea;
  undefined6 uStack_1e8;
  undefined2 local_1e2;
  undefined6 uStack_1e0;
  undefined2 local_1da;
  undefined6 uStack_1d8;
  undefined2 local_1d2;
  undefined6 uStack_1d0;
  undefined2 local_1ca;
  undefined1 local_1c8;
  undefined7 uStack_1c7;
  ulong local_1c0;
  char local_1b8;
  undefined8 local_1b7;
  undefined8 local_1af;
  undefined8 local_1a7;
  undefined8 local_19f;
  undefined8 local_197;
  undefined8 local_18f;
  undefined8 local_187;
  undefined8 local_17f;
  char acStack_170 [6];
  char local_16a [2];
  char acStack_168 [6];
  undefined2 local_162;
  undefined6 uStack_160;
  undefined2 local_15a;
  undefined6 uStack_158;
  undefined2 local_152;
  undefined6 uStack_150;
  undefined2 local_14a;
  undefined6 uStack_148;
  undefined2 local_142;
  undefined6 uStack_140;
  undefined2 local_13a;
  undefined6 uStack_138;
  undefined2 local_132;
  undefined1 local_130;
  undefined7 uStack_12f;
  ulong local_128;
  char local_120;
  undefined8 local_11f;
  undefined8 local_117;
  undefined8 local_10f;
  undefined8 local_107;
  undefined8 local_ff;
  undefined8 local_f7;
  undefined8 local_ef;
  undefined8 local_e7;
  undefined1 auStack_d8 [8];
  CalendarAdditionalInfo aCStack_d0 [8];
  char acStack_c8 [16];
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  PosixTime aPStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  plVar12 = *(long **)(param_2 + 8);
  puVar4 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x30,8);
  puVar2 = PTR_DAT_02710860;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01035c34;
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar12;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  puVar4[4] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 5) = 0;
  puVar4[2] = 0;
  puVar4[3] = plVar12;
  puVar6 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x980,8);
  if (puVar6 == (undefined8 *)0x0) {
    (**(code **)(*(long *)puVar4[3] + 0xb8))();
  }
  lVar15 = -0x10;
  *puVar4 = puVar6;
  puVar4[1] = puVar6;
  puVar4[2] = puVar6 + 0x130;
  do {
    uVar16 = puVar4[3];
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_01035c34;
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar16;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *(undefined1 *)(puVar6 + 10) = 0;
    *(undefined1 *)(puVar6 + 8) = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    lVar15 = lVar15 + 1;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    puVar6 = (undefined8 *)(puVar4[1] + 0x98);
    puVar4[1] = puVar6;
  } while (lVar15 != 0);
  *param_1 = (long)puVar4;
  param_1[1] = (long)plVar12;
  param_1[2] = 0x30;
  param_1[3] = 8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  nn::time::StandardUserSystemClock::GetCurrentTime(aPStack_b0);
  nn::time::ToCalendarTime((CalendarTime *)&local_b8,aCStack_d0,aPStack_b0);
  FUN_017cbea0(auStack_d8,local_b8,local_b6,local_b5,local_b4,local_b3,local_b2);
  puVar1 = PTR_DAT_02710798;
  lVar5 = *(long *)PTR_DAT_02710798;
  lVar15 = *(long *)(lVar5 + 0x1e8);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(lVar5 + 0x208);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar5 + 0x1f8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)PTR_DAT_02710838;
  lVar8 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  if ((lVar8 == 0) || (plVar12 = (long *)FUN_010203c0(lVar8,0), plVar12 == (long *)0x0)) {
LAB_01034b6c:
    local_2c0 = 0;
  }
  else {
    iVar3 = (**(code **)(*plVar12 + 0x40))();
    if (4 < iVar3 - 1U) goto LAB_01034b6c;
    local_2c0 = *(ulong *)(&DAT_02162af0 + (long)(int)(iVar3 - 1U) * 8);
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar14 = *(long *)(*(long *)puVar1 + 0x298);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  uVar9 = FUN_015297c0(lVar14);
  uVar10 = FUN_015297d0(lVar14);
  local_258 = FUN_017cc140(auStack_d8);
  local_298 = 0x6d;
  uStack_297 = 0x70;
  lVar17 = *param_1;
  local_2a0 = s_time_stamp_01d152f2._0_4_;
  cStack_29c = s_time_stamp_01d152f2[4];
  cStack_29b = s_time_stamp_01d152f2[5];
  cStack_29a = s_time_stamp_01d152f2[6];
  cStack_299 = s_time_stamp_01d152f2[7];
  local_250 = '\0';
  uStack_266 = 0;
  uStack_265 = 0;
  uStack_263 = 0;
  uStack_262 = 0;
  uStack_261 = 0;
  local_26e = 0;
  uStack_26d = 0;
  uStack_26b = 0;
  uStack_26a = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  uStack_267 = 0;
  local_276 = 0;
  uStack_275 = 0;
  uStack_273 = 0;
  uStack_272 = 0;
  uStack_271 = 0;
  uStack_270 = 0;
  uStack_26f = 0;
  local_27e = 0;
  uStack_27d = 0;
  uStack_27b = 0;
  uStack_27a = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  uStack_277 = 0;
  local_286 = 0;
  uStack_285 = 0;
  uStack_283 = 0;
  uStack_282 = 0;
  uStack_281 = 0;
  uStack_280 = 0;
  uStack_27f = 0;
  uStack_28e = 0;
  uStack_28d = 0;
  uStack_28b = 0;
  uStack_28a = 0;
  uStack_289 = 0;
  uStack_288 = 0;
  uStack_287 = 0;
  uStack_296 = 0;
  uStack_295 = 0;
  uStack_293 = 0;
  uStack_292 = 0;
  uStack_291 = 0;
  uStack_290 = 0;
  uStack_28f = 0;
  uStack_260 = 1;
  puVar4 = *(undefined8 **)(lVar17 + 8);
  if (puVar4 == *(undefined8 **)(lVar17 + 0x10)) {
    FUN_01035c40(lVar17,&local_2a0);
  }
  else {
    uVar16 = *(undefined8 *)(lVar17 + 0x18);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_01035c34;
    *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar16;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    *puVar4 = CONCAT17(cStack_299,
                       CONCAT16(cStack_29a,CONCAT15(cStack_29b,CONCAT14(cStack_29c,local_2a0))));
    puVar4[1] = CONCAT17(uStack_291,
                         CONCAT16(uStack_292,
                                  CONCAT15(uStack_293,
                                           CONCAT23(uStack_295,
                                                    CONCAT12(uStack_296,
                                                             CONCAT11(uStack_297,local_298))))));
    puVar4[4] = CONCAT17(uStack_279,
                         CONCAT16(uStack_27a,
                                  CONCAT15(uStack_27b,
                                           CONCAT23(uStack_27d,
                                                    CONCAT12(local_27e,
                                                             CONCAT11(uStack_27f,uStack_280))))));
    puVar4[5] = CONCAT17(uStack_271,
                         CONCAT16(uStack_272,
                                  CONCAT15(uStack_273,
                                           CONCAT23(uStack_275,
                                                    CONCAT12(local_276,
                                                             CONCAT11(uStack_277,uStack_278))))));
    puVar4[2] = CONCAT17(uStack_289,
                         CONCAT16(uStack_28a,
                                  CONCAT15(uStack_28b,
                                           CONCAT23(uStack_28d,
                                                    CONCAT12(uStack_28e,
                                                             CONCAT11(uStack_28f,uStack_290))))));
    puVar4[3] = CONCAT17(uStack_281,
                         CONCAT16(uStack_282,
                                  CONCAT15(uStack_283,
                                           CONCAT23(uStack_285,
                                                    CONCAT12(local_286,
                                                             CONCAT11(uStack_287,uStack_288))))));
    *(undefined1 *)(puVar4 + 10) = 0;
    puVar4[8] = CONCAT71(uStack_25f,uStack_260);
    puVar4[9] = local_258;
    puVar4[6] = CONCAT17(uStack_269,
                         CONCAT16(uStack_26a,
                                  CONCAT15(uStack_26b,
                                           CONCAT23(uStack_26d,
                                                    CONCAT12(local_26e,
                                                             CONCAT11(uStack_26f,uStack_270))))));
    puVar4[7] = CONCAT17(uStack_261,
                         CONCAT16(uStack_262,
                                  CONCAT15(uStack_263,
                                           CONCAT23(uStack_265,
                                                    CONCAT12(uStack_266,
                                                             CONCAT11(uStack_267,uStack_268))))));
    if (local_250 != '\0') {
      *(undefined8 *)((long)puVar4 + 0x69) = local_237;
      *(undefined8 *)((long)puVar4 + 0x61) = local_23f;
      *(undefined8 *)((long)puVar4 + 0x59) = local_247;
      *(undefined8 *)((long)puVar4 + 0x51) = local_24f;
      *(undefined8 *)((long)puVar4 + 0x71) = local_22f;
      *(undefined8 *)((long)puVar4 + 0x89) = local_217;
      *(undefined8 *)((long)puVar4 + 0x81) = local_21f;
      *(undefined8 *)((long)puVar4 + 0x79) = local_227;
      *(undefined1 *)(puVar4 + 10) = 1;
    }
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    *(long *)(lVar17 + 8) = *(long *)(lVar17 + 8) + 0x98;
  }
  if (local_250 != '\0') {
    local_250 = '\0';
  }
  uStack_267 = 0;
  uStack_266 = 0;
  uStack_265 = 0;
  uStack_263 = 0;
  uStack_262 = 0;
  uStack_261 = 0;
  uStack_26f = 0;
  local_26e = 0;
  uStack_26d = 0;
  uStack_26b = 0;
  uStack_26a = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  uStack_277 = 0;
  local_276 = 0;
  uStack_275 = 0;
  uStack_273 = 0;
  uStack_272 = 0;
  uStack_271 = 0;
  uStack_270 = 0;
  uStack_27f = 0;
  local_27e = 0;
  uStack_27d = 0;
  uStack_27b = 0;
  uStack_27a = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  uStack_287 = 0;
  local_286 = 0;
  uStack_285 = 0;
  uStack_283 = 0;
  uStack_282 = 0;
  uStack_281 = 0;
  uStack_280 = 0;
  uStack_28f = 0;
  uStack_28e = 0;
  uStack_28d = 0;
  uStack_28b = 0;
  uStack_28a = 0;
  uStack_289 = 0;
  uStack_288 = 0;
  uStack_297 = 0;
  uStack_296 = 0;
  uStack_295 = 0;
  uStack_293 = 0;
  uStack_292 = 0;
  uStack_291 = 0;
  uStack_290 = 0;
  local_298 = 0x65;
  local_2a0 = s_time_zone_01d220a6._0_4_;
  cStack_29c = s_time_zone_01d220a6[4];
  cStack_29b = s_time_zone_01d220a6[5];
  cStack_29a = s_time_zone_01d220a6[6];
  cStack_299 = s_time_zone_01d220a6[7];
  uStack_260 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  __n = strlen(acStack_c8);
  memcpy(&local_a8,acStack_c8,__n);
  local_237 = local_90;
  local_23f = local_98;
  local_247 = local_a0;
  local_24f = local_a8;
  local_217 = local_70;
  local_21f = local_78;
  local_227 = local_80;
  lVar17 = *param_1;
  local_22f = local_88;
  local_250 = '\x01';
  puVar4 = *(undefined8 **)(lVar17 + 8);
  if (puVar4 == *(undefined8 **)(lVar17 + 0x10)) {
    FUN_01035c40(lVar17,&local_2a0);
  }
  else {
    uVar16 = *(undefined8 *)(lVar17 + 0x18);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_01035c34;
    *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar16;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    *puVar4 = CONCAT17(cStack_299,
                       CONCAT16(cStack_29a,CONCAT15(cStack_29b,CONCAT14(cStack_29c,local_2a0))));
    puVar4[1] = CONCAT17(uStack_291,
                         CONCAT16(uStack_292,
                                  CONCAT15(uStack_293,
                                           CONCAT23(uStack_295,
                                                    CONCAT12(uStack_296,
                                                             CONCAT11(uStack_297,local_298))))));
    puVar4[4] = CONCAT17(uStack_279,
                         CONCAT16(uStack_27a,
                                  CONCAT15(uStack_27b,
                                           CONCAT23(uStack_27d,
                                                    CONCAT12(local_27e,
                                                             CONCAT11(uStack_27f,uStack_280))))));
    puVar4[5] = CONCAT17(uStack_271,
                         CONCAT16(uStack_272,
                                  CONCAT15(uStack_273,
                                           CONCAT23(uStack_275,
                                                    CONCAT12(local_276,
                                                             CONCAT11(uStack_277,uStack_278))))));
    puVar4[2] = CONCAT17(uStack_289,
                         CONCAT16(uStack_28a,
                                  CONCAT15(uStack_28b,
                                           CONCAT23(uStack_28d,
                                                    CONCAT12(uStack_28e,
                                                             CONCAT11(uStack_28f,uStack_290))))));
    puVar4[3] = CONCAT17(uStack_281,
                         CONCAT16(uStack_282,
                                  CONCAT15(uStack_283,
                                           CONCAT23(uStack_285,
                                                    CONCAT12(local_286,
                                                             CONCAT11(uStack_287,uStack_288))))));
    *(undefined1 *)(puVar4 + 10) = 0;
    puVar4[8] = CONCAT71(uStack_25f,uStack_260);
    puVar4[9] = local_258;
    puVar4[6] = CONCAT17(uStack_269,
                         CONCAT16(uStack_26a,
                                  CONCAT15(uStack_26b,
                                           CONCAT23(uStack_26d,
                                                    CONCAT12(local_26e,
                                                             CONCAT11(uStack_26f,uStack_270))))));
    puVar4[7] = CONCAT17(uStack_261,
                         CONCAT16(uStack_262,
                                  CONCAT15(uStack_263,
                                           CONCAT23(uStack_265,
                                                    CONCAT12(uStack_266,
                                                             CONCAT11(uStack_267,uStack_268))))));
    if (local_250 != '\0') {
      *(undefined8 *)((long)puVar4 + 0x69) = local_237;
      *(undefined8 *)((long)puVar4 + 0x61) = local_23f;
      *(undefined8 *)((long)puVar4 + 0x59) = local_247;
      *(undefined8 *)((long)puVar4 + 0x51) = local_24f;
      *(undefined8 *)((long)puVar4 + 0x89) = local_217;
      *(undefined8 *)((long)puVar4 + 0x81) = local_21f;
      *(undefined8 *)((long)puVar4 + 0x79) = local_227;
      *(undefined8 *)((long)puVar4 + 0x71) = local_22f;
      *(undefined1 *)(puVar4 + 10) = 1;
    }
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    *(long *)(lVar17 + 8) = *(long *)(lVar17 + 8) + 0x98;
  }
  if (local_250 != '\0') {
    local_250 = '\0';
  }
  local_258 = FUN_008d4270();
  lVar17 = *param_1;
  local_258 = local_258 & 0xff;
  uStack_263 = 0;
  uStack_262 = 0;
  uStack_261 = 0;
  uStack_260 = 1;
  local_250 = '\0';
  uStack_26b = 0;
  uStack_26a = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  uStack_267 = 0;
  uStack_266 = 0;
  uStack_265 = 0;
  uStack_273 = 0;
  uStack_272 = 0;
  uStack_271 = 0;
  uStack_270 = 0;
  uStack_26f = 0;
  local_26e = 0;
  uStack_26d = 0;
  uStack_27b = 0;
  uStack_27a = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  uStack_277 = 0;
  local_276 = 0;
  uStack_275 = 0;
  uStack_283 = 0;
  uStack_282 = 0;
  uStack_281 = 0;
  uStack_280 = 0;
  uStack_27f = 0;
  local_27e = 0;
  uStack_27d = 0;
  uStack_28b = 0;
  uStack_28a = 0;
  uStack_289 = 0;
  uStack_288 = 0;
  uStack_287 = 0;
  local_286 = 0;
  uStack_285 = 0;
  uStack_293 = 0;
  uStack_292 = 0;
  uStack_291 = 0;
  uStack_290 = 0;
  uStack_28f = 0;
  uStack_28e = 0;
  uStack_28d = 0;
  cStack_29b = '\0';
  cStack_29a = '\0';
  cStack_299 = '\0';
  local_298 = 0;
  uStack_297 = 0;
  uStack_296 = 0;
  uStack_295 = 0;
  cStack_29c = 'd';
  local_2a0 = 0x696d6f72;
  puVar4 = *(undefined8 **)(lVar17 + 8);
  if (puVar4 == *(undefined8 **)(lVar17 + 0x10)) {
    FUN_01035c40(lVar17,&local_2a0);
  }
  else {
    uVar16 = *(undefined8 *)(lVar17 + 0x18);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_01035c34;
    *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar16;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    *puVar4 = CONCAT17(cStack_299,
                       CONCAT16(cStack_29a,CONCAT15(cStack_29b,CONCAT14(cStack_29c,local_2a0))));
    puVar4[1] = CONCAT17(uStack_291,
                         CONCAT16(uStack_292,
                                  CONCAT15(uStack_293,
                                           CONCAT23(uStack_295,
                                                    CONCAT12(uStack_296,
                                                             CONCAT11(uStack_297,local_298))))));
    puVar4[4] = CONCAT17(uStack_279,
                         CONCAT16(uStack_27a,
                                  CONCAT15(uStack_27b,
                                           CONCAT23(uStack_27d,
                                                    CONCAT12(local_27e,
                                                             CONCAT11(uStack_27f,uStack_280))))));
    puVar4[5] = CONCAT17(uStack_271,
                         CONCAT16(uStack_272,
                                  CONCAT15(uStack_273,
                                           CONCAT23(uStack_275,
                                                    CONCAT12(local_276,
                                                             CONCAT11(uStack_277,uStack_278))))));
    puVar4[2] = CONCAT17(uStack_289,
                         CONCAT16(uStack_28a,
                                  CONCAT15(uStack_28b,
                                           CONCAT23(uStack_28d,
                                                    CONCAT12(uStack_28e,
                                                             CONCAT11(uStack_28f,uStack_290))))));
    puVar4[3] = CONCAT17(uStack_281,
                         CONCAT16(uStack_282,
                                  CONCAT15(uStack_283,
                                           CONCAT23(uStack_285,
                                                    CONCAT12(local_286,
                                                             CONCAT11(uStack_287,uStack_288))))));
    *(undefined1 *)(puVar4 + 10) = 0;
    puVar4[8] = CONCAT71(uStack_25f,uStack_260);
    puVar4[9] = local_258;
    puVar4[6] = CONCAT17(uStack_269,
                         CONCAT16(uStack_26a,
                                  CONCAT15(uStack_26b,
                                           CONCAT23(uStack_26d,
                                                    CONCAT12(local_26e,
                                                             CONCAT11(uStack_26f,uStack_270))))));
    puVar4[7] = CONCAT17(uStack_261,
                         CONCAT16(uStack_262,
                                  CONCAT15(uStack_263,
                                           CONCAT23(uStack_265,
                                                    CONCAT12(uStack_266,
                                                             CONCAT11(uStack_267,uStack_268))))));
    if (local_250 != '\0') {
      *(undefined8 *)((long)puVar4 + 0x69) = local_237;
      *(undefined8 *)((long)puVar4 + 0x61) = local_23f;
      *(undefined8 *)((long)puVar4 + 0x59) = local_247;
      *(undefined8 *)((long)puVar4 + 0x51) = local_24f;
      *(undefined8 *)((long)puVar4 + 0x71) = local_22f;
      *(undefined8 *)((long)puVar4 + 0x89) = local_217;
      *(undefined8 *)((long)puVar4 + 0x81) = local_21f;
      *(undefined8 *)((long)puVar4 + 0x79) = local_227;
      *(undefined1 *)(puVar4 + 10) = 1;
    }
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    *(long *)(lVar17 + 8) = *(long *)(lVar17 + 8) + 0x98;
  }
  if (local_250 != '\0') {
    local_250 = '\0';
  }
  local_258 = FUN_01524c00(lVar15);
  lVar17 = *param_1;
  local_258 = local_258 & 0xff;
  local_250 = '\0';
  cStack_29c = '\0';
  cStack_29b = '\0';
  cStack_29a = '\0';
  cStack_299 = '\0';
  local_298 = 0;
  uStack_297 = 0;
  uStack_296 = 0;
  uStack_295 = 0;
  uStack_293 = 0;
  uStack_292 = 0;
  uStack_291 = 0;
  local_2a0 = 0x676e616c;
  uStack_270 = 0;
  uStack_26f = 0;
  local_26e = 0;
  uStack_26d = 0;
  uStack_26b = 0;
  uStack_26a = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  uStack_267 = 0;
  uStack_266 = 0;
  uStack_265 = 0;
  uStack_263 = 0;
  uStack_262 = 0;
  uStack_261 = 0;
  uStack_260 = 1;
  uStack_280 = 0;
  uStack_27f = 0;
  local_27e = 0;
  uStack_27d = 0;
  uStack_27b = 0;
  uStack_27a = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  uStack_277 = 0;
  local_276 = 0;
  uStack_275 = 0;
  uStack_273 = 0;
  uStack_272 = 0;
  uStack_271 = 0;
  uStack_290 = 0;
  uStack_28f = 0;
  uStack_28e = 0;
  uStack_28d = 0;
  uStack_28b = 0;
  uStack_28a = 0;
  uStack_289 = 0;
  uStack_288 = 0;
  uStack_287 = 0;
  local_286 = 0;
  uStack_285 = 0;
  uStack_283 = 0;
  uStack_282 = 0;
  uStack_281 = 0;
  puVar4 = *(undefined8 **)(lVar17 + 8);
  if (puVar4 == *(undefined8 **)(lVar17 + 0x10)) {
    FUN_01035c40(lVar17,&local_2a0);
  }
  else {
    uVar16 = *(undefined8 *)(lVar17 + 0x18);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_01035c34;
    *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar16;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    *puVar4 = CONCAT17(cStack_299,
                       CONCAT16(cStack_29a,CONCAT15(cStack_29b,CONCAT14(cStack_29c,local_2a0))));
    puVar4[1] = CONCAT17(uStack_291,
                         CONCAT16(uStack_292,
                                  CONCAT15(uStack_293,
                                           CONCAT23(uStack_295,
                                                    CONCAT12(uStack_296,
                                                             CONCAT11(uStack_297,local_298))))));
    puVar4[4] = CONCAT17(uStack_279,
                         CONCAT16(uStack_27a,
                                  CONCAT15(uStack_27b,
                                           CONCAT23(uStack_27d,
                                                    CONCAT12(local_27e,
                                                             CONCAT11(uStack_27f,uStack_280))))));
    puVar4[5] = CONCAT17(uStack_271,
                         CONCAT16(uStack_272,
                                  CONCAT15(uStack_273,
                                           CONCAT23(uStack_275,
                                                    CONCAT12(local_276,
                                                             CONCAT11(uStack_277,uStack_278))))));
    puVar4[2] = CONCAT17(uStack_289,
                         CONCAT16(uStack_28a,
                                  CONCAT15(uStack_28b,
                                           CONCAT23(uStack_28d,
                                                    CONCAT12(uStack_28e,
                                                             CONCAT11(uStack_28f,uStack_290))))));
    puVar4[3] = CONCAT17(uStack_281,
                         CONCAT16(uStack_282,
                                  CONCAT15(uStack_283,
                                           CONCAT23(uStack_285,
                                                    CONCAT12(local_286,
                                                             CONCAT11(uStack_287,uStack_288))))));
    *(undefined1 *)(puVar4 + 10) = 0;
    puVar4[8] = CONCAT71(uStack_25f,uStack_260);
    puVar4[9] = local_258;
    puVar4[6] = CONCAT17(uStack_269,
                         CONCAT16(uStack_26a,
                                  CONCAT15(uStack_26b,
                                           CONCAT23(uStack_26d,
                                                    CONCAT12(local_26e,
                                                             CONCAT11(uStack_26f,uStack_270))))));
    puVar4[7] = CONCAT17(uStack_261,
                         CONCAT16(uStack_262,
                                  CONCAT15(uStack_263,
                                           CONCAT23(uStack_265,
                                                    CONCAT12(uStack_266,
                                                             CONCAT11(uStack_267,uStack_268))))));
    if (local_250 != '\0') {
      *(undefined8 *)((long)puVar4 + 0x69) = local_237;
      *(undefined8 *)((long)puVar4 + 0x61) = local_23f;
      *(undefined8 *)((long)puVar4 + 0x59) = local_247;
      *(undefined8 *)((long)puVar4 + 0x51) = local_24f;
      *(undefined8 *)((long)puVar4 + 0x71) = local_22f;
      *(undefined8 *)((long)puVar4 + 0x89) = local_217;
      *(undefined8 *)((long)puVar4 + 0x81) = local_21f;
      *(undefined8 *)((long)puVar4 + 0x79) = local_227;
      *(undefined1 *)(puVar4 + 10) = 1;
    }
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    *(long *)(lVar17 + 8) = *(long *)(lVar17 + 8) + 0x98;
  }
  if (local_250 != '\0') {
    local_250 = '\0';
  }
  local_258 = FUN_01538f80(lVar7);
  lVar17 = *param_1;
  local_258 = local_258 & 0xff;
  cStack_29c = 'e';
  cStack_29b = 's';
  local_250 = '\0';
  uStack_262 = 0;
  uStack_261 = 0;
  uStack_26a = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  uStack_267 = 0;
  uStack_266 = 0;
  uStack_265 = 0;
  uStack_263 = 0;
  uStack_272 = 0;
  uStack_271 = 0;
  uStack_270 = 0;
  uStack_26f = 0;
  local_26e = 0;
  uStack_26d = 0;
  uStack_26b = 0;
  uStack_27a = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  uStack_277 = 0;
  local_276 = 0;
  uStack_275 = 0;
  uStack_273 = 0;
  uStack_282 = 0;
  uStack_281 = 0;
  uStack_280 = 0;
  uStack_27f = 0;
  local_27e = 0;
  uStack_27d = 0;
  uStack_27b = 0;
  uStack_28a = 0;
  uStack_289 = 0;
  uStack_288 = 0;
  uStack_287 = 0;
  local_286 = 0;
  uStack_285 = 0;
  uStack_283 = 0;
  uStack_292 = 0;
  uStack_291 = 0;
  uStack_290 = 0;
  uStack_28f = 0;
  uStack_28e = 0;
  uStack_28d = 0;
  uStack_28b = 0;
  cStack_29a = '\0';
  cStack_299 = '\0';
  local_298 = 0;
  uStack_297 = 0;
  uStack_296 = 0;
  uStack_295 = 0;
  uStack_293 = 0;
  local_2a0 = 0x67646162;
  uStack_260 = 1;
  puVar4 = *(undefined8 **)(lVar17 + 8);
  if (puVar4 == *(undefined8 **)(lVar17 + 0x10)) {
    FUN_01035c40(lVar17,&local_2a0);
  }
  else {
    uVar16 = *(undefined8 *)(lVar17 + 0x18);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_01035c34;
    *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar16;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    *puVar4 = CONCAT17(cStack_299,
                       CONCAT16(cStack_29a,CONCAT15(cStack_29b,CONCAT14(cStack_29c,local_2a0))));
    puVar4[1] = CONCAT17(uStack_291,
                         CONCAT16(uStack_292,
                                  CONCAT15(uStack_293,
                                           CONCAT23(uStack_295,
                                                    CONCAT12(uStack_296,
                                                             CONCAT11(uStack_297,local_298))))));
    puVar4[4] = CONCAT17(uStack_279,
                         CONCAT16(uStack_27a,
                                  CONCAT15(uStack_27b,
                                           CONCAT23(uStack_27d,
                                                    CONCAT12(local_27e,
                                                             CONCAT11(uStack_27f,uStack_280))))));
    puVar4[5] = CONCAT17(uStack_271,
                         CONCAT16(uStack_272,
                                  CONCAT15(uStack_273,
                                           CONCAT23(uStack_275,
                                                    CONCAT12(local_276,
                                                             CONCAT11(uStack_277,uStack_278))))));
    puVar4[2] = CONCAT17(uStack_289,
                         CONCAT16(uStack_28a,
                                  CONCAT15(uStack_28b,
                                           CONCAT23(uStack_28d,
                                                    CONCAT12(uStack_28e,
                                                             CONCAT11(uStack_28f,uStack_290))))));
    puVar4[3] = CONCAT17(uStack_281,
                         CONCAT16(uStack_282,
                                  CONCAT15(uStack_283,
                                           CONCAT23(uStack_285,
                                                    CONCAT12(local_286,
                                                             CONCAT11(uStack_287,uStack_288))))));
    *(undefined1 *)(puVar4 + 10) = 0;
    puVar4[8] = CONCAT71(uStack_25f,uStack_260);
    puVar4[9] = local_258;
    puVar4[6] = CONCAT17(uStack_269,
                         CONCAT16(uStack_26a,
                                  CONCAT15(uStack_26b,
                                           CONCAT23(uStack_26d,
                                                    CONCAT12(local_26e,
                                                             CONCAT11(uStack_26f,uStack_270))))));
    puVar4[7] = CONCAT17(uStack_261,
                         CONCAT16(uStack_262,
                                  CONCAT15(uStack_263,
                                           CONCAT23(uStack_265,
                                                    CONCAT12(uStack_266,
                                                             CONCAT11(uStack_267,uStack_268))))));
    if (local_250 != '\0') {
      *(undefined8 *)((long)puVar4 + 0x69) = local_237;
      *(undefined8 *)((long)puVar4 + 0x61) = local_23f;
      *(undefined8 *)((long)puVar4 + 0x59) = local_247;
      *(undefined8 *)((long)puVar4 + 0x51) = local_24f;
      *(undefined8 *)((long)puVar4 + 0x71) = local_22f;
      *(undefined8 *)((long)puVar4 + 0x89) = local_217;
      *(undefined8 *)((long)puVar4 + 0x81) = local_21f;
      *(undefined8 *)((long)puVar4 + 0x79) = local_227;
      *(undefined1 *)(puVar4 + 10) = 1;
    }
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    *(long *)(lVar17 + 8) = *(long *)(lVar17 + 8) + 0x98;
  }
  local_258 = (uVar9 & 0xffff) * 0x3c + (uVar10 & 0xff);
  lVar17 = *param_1;
  local_250 = '\0';
  uStack_267 = 0;
  uStack_266 = 0;
  uStack_265 = 0;
  uStack_263 = 0;
  uStack_262 = 0;
  uStack_261 = 0;
  uStack_26f = 0;
  local_26e = 0;
  uStack_26d = 0;
  uStack_26b = 0;
  uStack_26a = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  uStack_277 = 0;
  local_276 = 0;
  uStack_275 = 0;
  uStack_273 = 0;
  uStack_272 = 0;
  uStack_271 = 0;
  uStack_270 = 0;
  uStack_27f = 0;
  local_27e = 0;
  uStack_27d = 0;
  uStack_27b = 0;
  uStack_27a = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  uStack_287 = 0;
  local_286 = 0;
  uStack_285 = 0;
  uStack_283 = 0;
  uStack_282 = 0;
  uStack_281 = 0;
  uStack_280 = 0;
  uStack_28f = 0;
  uStack_28e = 0;
  uStack_28d = 0;
  uStack_28b = 0;
  uStack_28a = 0;
  uStack_289 = 0;
  uStack_288 = 0;
  uStack_297 = 0;
  uStack_296 = 0;
  uStack_295 = 0;
  uStack_293 = 0;
  uStack_292 = 0;
  uStack_291 = 0;
  uStack_290 = 0;
  local_298 = 0x65;
  local_2a0 = s_play_time_01d115b4._0_4_;
  cStack_29c = s_play_time_01d115b4[4];
  cStack_29b = s_play_time_01d115b4[5];
  cStack_29a = s_play_time_01d115b4[6];
  cStack_299 = s_play_time_01d115b4[7];
  uStack_260 = 1;
  puVar4 = *(undefined8 **)(lVar17 + 8);
  if (puVar4 == *(undefined8 **)(lVar17 + 0x10)) {
    FUN_01035c40(lVar17,&local_2a0);
  }
  else {
    uVar16 = *(undefined8 *)(lVar17 + 0x18);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_01035c34;
    *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar16;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    *puVar4 = CONCAT17(cStack_299,
                       CONCAT16(cStack_29a,CONCAT15(cStack_29b,CONCAT14(cStack_29c,local_2a0))));
    puVar4[1] = CONCAT17(uStack_291,
                         CONCAT16(uStack_292,
                                  CONCAT15(uStack_293,
                                           CONCAT23(uStack_295,
                                                    CONCAT12(uStack_296,
                                                             CONCAT11(uStack_297,local_298))))));
    puVar4[4] = CONCAT17(uStack_279,
                         CONCAT16(uStack_27a,
                                  CONCAT15(uStack_27b,
                                           CONCAT23(uStack_27d,
                                                    CONCAT12(local_27e,
                                                             CONCAT11(uStack_27f,uStack_280))))));
    puVar4[5] = CONCAT17(uStack_271,
                         CONCAT16(uStack_272,
                                  CONCAT15(uStack_273,
                                           CONCAT23(uStack_275,
                                                    CONCAT12(local_276,
                                                             CONCAT11(uStack_277,uStack_278))))));
    puVar4[2] = CONCAT17(uStack_289,
                         CONCAT16(uStack_28a,
                                  CONCAT15(uStack_28b,
                                           CONCAT23(uStack_28d,
                                                    CONCAT12(uStack_28e,
                                                             CONCAT11(uStack_28f,uStack_290))))));
    puVar4[3] = CONCAT17(uStack_281,
                         CONCAT16(uStack_282,
                                  CONCAT15(uStack_283,
                                           CONCAT23(uStack_285,
                                                    CONCAT12(local_286,
                                                             CONCAT11(uStack_287,uStack_288))))));
    *(undefined1 *)(puVar4 + 10) = 0;
    puVar4[8] = CONCAT71(uStack_25f,uStack_260);
    puVar4[9] = local_258;
    puVar4[6] = CONCAT17(uStack_269,
                         CONCAT16(uStack_26a,
                                  CONCAT15(uStack_26b,
                                           CONCAT23(uStack_26d,
                                                    CONCAT12(local_26e,
                                                             CONCAT11(uStack_26f,uStack_270))))));
    puVar4[7] = CONCAT17(uStack_261,
                         CONCAT16(uStack_262,
                                  CONCAT15(uStack_263,
                                           CONCAT23(uStack_265,
                                                    CONCAT12(uStack_266,
                                                             CONCAT11(uStack_267,uStack_268))))));
    if (local_250 != '\0') {
      *(undefined8 *)((long)puVar4 + 0x69) = local_237;
      *(undefined8 *)((long)puVar4 + 0x61) = local_23f;
      *(undefined8 *)((long)puVar4 + 0x59) = local_247;
      *(undefined8 *)((long)puVar4 + 0x51) = local_24f;
      *(undefined8 *)((long)puVar4 + 0x71) = local_22f;
      *(undefined8 *)((long)puVar4 + 0x89) = local_217;
      *(undefined8 *)((long)puVar4 + 0x81) = local_21f;
      *(undefined8 *)((long)puVar4 + 0x79) = local_227;
      *(undefined1 *)(puVar4 + 10) = 1;
    }
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    *(long *)(lVar17 + 8) = *(long *)(lVar17 + 8) + 0x98;
  }
  lVar17 = *param_1;
  uStack_261 = 0;
  uStack_260 = 1;
  cStack_29a = 'g';
  local_250 = '\0';
  uStack_269 = 0;
  uStack_268 = 0;
  uStack_267 = 0;
  uStack_266 = 0;
  uStack_265 = 0;
  uStack_263 = 0;
  uStack_262 = 0;
  uStack_271 = 0;
  uStack_270 = 0;
  uStack_26f = 0;
  local_26e = 0;
  uStack_26d = 0;
  uStack_26b = 0;
  uStack_26a = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  uStack_277 = 0;
  local_276 = 0;
  uStack_275 = 0;
  uStack_273 = 0;
  uStack_272 = 0;
  uStack_281 = 0;
  uStack_280 = 0;
  uStack_27f = 0;
  local_27e = 0;
  uStack_27d = 0;
  uStack_27b = 0;
  uStack_27a = 0;
  uStack_289 = 0;
  uStack_288 = 0;
  uStack_287 = 0;
  local_286 = 0;
  uStack_285 = 0;
  uStack_283 = 0;
  uStack_282 = 0;
  uStack_291 = 0;
  uStack_290 = 0;
  uStack_28f = 0;
  uStack_28e = 0;
  uStack_28d = 0;
  uStack_28b = 0;
  uStack_28a = 0;
  cStack_299 = '\0';
  local_298 = 0;
  uStack_297 = 0;
  uStack_296 = 0;
  uStack_295 = 0;
  uStack_293 = 0;
  uStack_292 = 0;
  cStack_29c = 'l';
  cStack_29b = 'a';
  local_2a0 = 0x66637465;
  local_258 = 0;
  puVar4 = *(undefined8 **)(lVar17 + 8);
  if (puVar4 == *(undefined8 **)(lVar17 + 0x10)) {
    FUN_01035c40(lVar17,&local_2a0);
  }
  else {
    uVar16 = *(undefined8 *)(lVar17 + 0x18);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_01035c34;
    *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar16;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    *puVar4 = CONCAT17(cStack_299,
                       CONCAT16(cStack_29a,CONCAT15(cStack_29b,CONCAT14(cStack_29c,local_2a0))));
    puVar4[1] = CONCAT17(uStack_291,
                         CONCAT16(uStack_292,
                                  CONCAT15(uStack_293,
                                           CONCAT23(uStack_295,
                                                    CONCAT12(uStack_296,
                                                             CONCAT11(uStack_297,local_298))))));
    puVar4[4] = CONCAT17(uStack_279,
                         CONCAT16(uStack_27a,
                                  CONCAT15(uStack_27b,
                                           CONCAT23(uStack_27d,
                                                    CONCAT12(local_27e,
                                                             CONCAT11(uStack_27f,uStack_280))))));
    puVar4[5] = CONCAT17(uStack_271,
                         CONCAT16(uStack_272,
                                  CONCAT15(uStack_273,
                                           CONCAT23(uStack_275,
                                                    CONCAT12(local_276,
                                                             CONCAT11(uStack_277,uStack_278))))));
    puVar4[2] = CONCAT17(uStack_289,
                         CONCAT16(uStack_28a,
                                  CONCAT15(uStack_28b,
                                           CONCAT23(uStack_28d,
                                                    CONCAT12(uStack_28e,
                                                             CONCAT11(uStack_28f,uStack_290))))));
    puVar4[3] = CONCAT17(uStack_281,
                         CONCAT16(uStack_282,
                                  CONCAT15(uStack_283,
                                           CONCAT23(uStack_285,
                                                    CONCAT12(local_286,
                                                             CONCAT11(uStack_287,uStack_288))))));
    *(undefined1 *)(puVar4 + 10) = 0;
    puVar4[8] = CONCAT71(uStack_25f,uStack_260);
    puVar4[9] = local_258;
    puVar4[6] = CONCAT17(uStack_269,
                         CONCAT16(uStack_26a,
                                  CONCAT15(uStack_26b,
                                           CONCAT23(uStack_26d,
                                                    CONCAT12(local_26e,
                                                             CONCAT11(uStack_26f,uStack_270))))));
    puVar4[7] = CONCAT17(uStack_261,
                         CONCAT16(uStack_262,
                                  CONCAT15(uStack_263,
                                           CONCAT23(uStack_265,
                                                    CONCAT12(uStack_266,
                                                             CONCAT11(uStack_267,uStack_268))))));
    if (local_250 != '\0') {
      *(undefined8 *)((long)puVar4 + 0x69) = local_237;
      *(undefined8 *)((long)puVar4 + 0x61) = local_23f;
      *(undefined8 *)((long)puVar4 + 0x59) = local_247;
      *(undefined8 *)((long)puVar4 + 0x51) = local_24f;
      *(undefined8 *)((long)puVar4 + 0x71) = local_22f;
      *(undefined8 *)((long)puVar4 + 0x89) = local_217;
      *(undefined8 *)((long)puVar4 + 0x81) = local_21f;
      *(undefined8 *)((long)puVar4 + 0x79) = local_227;
      *(undefined1 *)(puVar4 + 10) = 1;
    }
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    *(long *)(lVar17 + 8) = *(long *)(lVar17 + 8) + 0x98;
  }
  local_258 = (ulong)*(int *)(lVar13 + 0x350);
  lVar13 = *param_1;
  uStack_267 = 0;
  uStack_266 = 0;
  uStack_265 = 0;
  uStack_263 = 0;
  uStack_262 = 0;
  uStack_261 = 0;
  uStack_26f = 0;
  local_26e = 0;
  uStack_26d = 0;
  uStack_26b = 0;
  uStack_26a = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  uStack_277 = 0;
  local_276 = 0;
  uStack_275 = 0;
  uStack_273 = 0;
  uStack_272 = 0;
  uStack_271 = 0;
  uStack_270 = 0;
  uStack_27f = 0;
  local_27e = 0;
  uStack_27d = 0;
  uStack_27b = 0;
  uStack_27a = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  uStack_287 = 0;
  local_286 = 0;
  uStack_285 = 0;
  uStack_283 = 0;
  uStack_282 = 0;
  uStack_281 = 0;
  uStack_280 = 0;
  uStack_28f = 0;
  uStack_28e = 0;
  uStack_28d = 0;
  uStack_28b = 0;
  uStack_28a = 0;
  uStack_289 = 0;
  uStack_288 = 0;
  uStack_297 = 0;
  uStack_296 = 0;
  uStack_295 = 0;
  uStack_293 = 0;
  uStack_292 = 0;
  uStack_291 = 0;
  uStack_290 = 0;
  local_250 = '\0';
  local_2a0 = s_tv_mobile_01d3e7fb._0_4_;
  cStack_29c = s_tv_mobile_01d3e7fb[4];
  cStack_29b = s_tv_mobile_01d3e7fb[5];
  cStack_29a = s_tv_mobile_01d3e7fb[6];
  cStack_299 = s_tv_mobile_01d3e7fb[7];
  local_298 = 0x65;
  uStack_260 = 1;
  puVar4 = *(undefined8 **)(lVar13 + 8);
  if (puVar4 == *(undefined8 **)(lVar13 + 0x10)) {
    FUN_01035c40(lVar13,&local_2a0);
  }
  else {
    uVar16 = *(undefined8 *)(lVar13 + 0x18);
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_01035c34;
    *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar16;
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
    *puVar4 = CONCAT17(cStack_299,
                       CONCAT16(cStack_29a,CONCAT15(cStack_29b,CONCAT14(cStack_29c,local_2a0))));
    puVar4[1] = CONCAT17(uStack_291,
                         CONCAT16(uStack_292,
                                  CONCAT15(uStack_293,
                                           CONCAT23(uStack_295,
                                                    CONCAT12(uStack_296,
                                                             CONCAT11(uStack_297,local_298))))));
    puVar4[4] = CONCAT17(uStack_279,
                         CONCAT16(uStack_27a,
                                  CONCAT15(uStack_27b,
                                           CONCAT23(uStack_27d,
                                                    CONCAT12(local_27e,
                                                             CONCAT11(uStack_27f,uStack_280))))));
    puVar4[5] = CONCAT17(uStack_271,
                         CONCAT16(uStack_272,
                                  CONCAT15(uStack_273,
                                           CONCAT23(uStack_275,
                                                    CONCAT12(local_276,
                                                             CONCAT11(uStack_277,uStack_278))))));
    puVar4[2] = CONCAT17(uStack_289,
                         CONCAT16(uStack_28a,
                                  CONCAT15(uStack_28b,
                                           CONCAT23(uStack_28d,
                                                    CONCAT12(uStack_28e,
                                                             CONCAT11(uStack_28f,uStack_290))))));
    puVar4[3] = CONCAT17(uStack_281,
                         CONCAT16(uStack_282,
                                  CONCAT15(uStack_283,
                                           CONCAT23(uStack_285,
                                                    CONCAT12(local_286,
                                                             CONCAT11(uStack_287,uStack_288))))));
    *(undefined1 *)(puVar4 + 10) = 0;
    puVar4[8] = CONCAT71(uStack_25f,uStack_260);
    puVar4[9] = local_258;
    puVar4[6] = CONCAT17(uStack_269,
                         CONCAT16(uStack_26a,
                                  CONCAT15(uStack_26b,
                                           CONCAT23(uStack_26d,
                                                    CONCAT12(local_26e,
                                                             CONCAT11(uStack_26f,uStack_270))))));
    puVar4[7] = CONCAT17(uStack_261,
                         CONCAT16(uStack_262,
                                  CONCAT15(uStack_263,
                                           CONCAT23(uStack_265,
                                                    CONCAT12(uStack_266,
                                                             CONCAT11(uStack_267,uStack_268))))));
    if (local_250 != '\0') {
      *(undefined8 *)((long)puVar4 + 0x69) = local_237;
      *(undefined8 *)((long)puVar4 + 0x61) = local_23f;
      *(undefined8 *)((long)puVar4 + 0x59) = local_247;
      *(undefined8 *)((long)puVar4 + 0x51) = local_24f;
      *(undefined8 *)((long)puVar4 + 0x71) = local_22f;
      *(undefined8 *)((long)puVar4 + 0x89) = local_217;
      *(undefined8 *)((long)puVar4 + 0x81) = local_21f;
      *(undefined8 *)((long)puVar4 + 0x79) = local_227;
      *(undefined1 *)(puVar4 + 10) = 1;
    }
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
    *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 0x98;
  }
  local_298 = 0x65;
  uStack_297 = 0x72;
  lVar13 = *param_1;
  local_2a0 = s_controller_01cdb22f._0_4_;
  cStack_29c = s_controller_01cdb22f[4];
  cStack_29b = s_controller_01cdb22f[5];
  cStack_29a = s_controller_01cdb22f[6];
  cStack_299 = s_controller_01cdb22f[7];
  local_250 = '\0';
  uStack_266 = 0;
  uStack_265 = 0;
  uStack_263 = 0;
  uStack_262 = 0;
  uStack_261 = 0;
  local_26e = 0;
  uStack_26d = 0;
  uStack_26b = 0;
  uStack_26a = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  uStack_267 = 0;
  local_276 = 0;
  uStack_275 = 0;
  uStack_273 = 0;
  uStack_272 = 0;
  uStack_271 = 0;
  uStack_270 = 0;
  uStack_26f = 0;
  local_27e = 0;
  uStack_27d = 0;
  uStack_27b = 0;
  uStack_27a = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  uStack_277 = 0;
  local_286 = 0;
  uStack_285 = 0;
  uStack_283 = 0;
  uStack_282 = 0;
  uStack_281 = 0;
  uStack_280 = 0;
  uStack_27f = 0;
  uStack_28e = 0;
  uStack_28d = 0;
  uStack_28b = 0;
  uStack_28a = 0;
  uStack_289 = 0;
  uStack_288 = 0;
  uStack_287 = 0;
  uStack_296 = 0;
  uStack_295 = 0;
  uStack_293 = 0;
  uStack_292 = 0;
  uStack_291 = 0;
  uStack_290 = 0;
  uStack_28f = 0;
  uStack_260 = 1;
  puVar4 = *(undefined8 **)(lVar13 + 8);
  local_258 = local_2c0;
  if (puVar4 == *(undefined8 **)(lVar13 + 0x10)) {
    FUN_01035c40(lVar13,&local_2a0);
  }
  else {
    uVar16 = *(undefined8 *)(lVar13 + 0x18);
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_01035c34;
    *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar16;
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
    *puVar4 = CONCAT17(cStack_299,
                       CONCAT16(cStack_29a,CONCAT15(cStack_29b,CONCAT14(cStack_29c,local_2a0))));
    puVar4[1] = CONCAT17(uStack_291,
                         CONCAT16(uStack_292,
                                  CONCAT15(uStack_293,
                                           CONCAT23(uStack_295,
                                                    CONCAT12(uStack_296,
                                                             CONCAT11(uStack_297,local_298))))));
    puVar4[4] = CONCAT17(uStack_279,
                         CONCAT16(uStack_27a,
                                  CONCAT15(uStack_27b,
                                           CONCAT23(uStack_27d,
                                                    CONCAT12(local_27e,
                                                             CONCAT11(uStack_27f,uStack_280))))));
    puVar4[5] = CONCAT17(uStack_271,
                         CONCAT16(uStack_272,
                                  CONCAT15(uStack_273,
                                           CONCAT23(uStack_275,
                                                    CONCAT12(local_276,
                                                             CONCAT11(uStack_277,uStack_278))))));
    puVar4[2] = CONCAT17(uStack_289,
                         CONCAT16(uStack_28a,
                                  CONCAT15(uStack_28b,
                                           CONCAT23(uStack_28d,
                                                    CONCAT12(uStack_28e,
                                                             CONCAT11(uStack_28f,uStack_290))))));
    puVar4[3] = CONCAT17(uStack_281,
                         CONCAT16(uStack_282,
                                  CONCAT15(uStack_283,
                                           CONCAT23(uStack_285,
                                                    CONCAT12(local_286,
                                                             CONCAT11(uStack_287,uStack_288))))));
    *(undefined1 *)(puVar4 + 10) = 0;
    puVar4[8] = CONCAT71(uStack_25f,uStack_260);
    puVar4[9] = local_258;
    puVar4[6] = CONCAT17(uStack_269,
                         CONCAT16(uStack_26a,
                                  CONCAT15(uStack_26b,
                                           CONCAT23(uStack_26d,
                                                    CONCAT12(local_26e,
                                                             CONCAT11(uStack_26f,uStack_270))))));
    puVar4[7] = CONCAT17(uStack_261,
                         CONCAT16(uStack_262,
                                  CONCAT15(uStack_263,
                                           CONCAT23(uStack_265,
                                                    CONCAT12(uStack_266,
                                                             CONCAT11(uStack_267,uStack_268))))));
    if (local_250 != '\0') {
      *(undefined8 *)((long)puVar4 + 0x69) = local_237;
      *(undefined8 *)((long)puVar4 + 0x61) = local_23f;
      *(undefined8 *)((long)puVar4 + 0x59) = local_247;
      *(undefined8 *)((long)puVar4 + 0x51) = local_24f;
      *(undefined8 *)((long)puVar4 + 0x71) = local_22f;
      *(undefined8 *)((long)puVar4 + 0x89) = local_217;
      *(undefined8 *)((long)puVar4 + 0x81) = local_21f;
      *(undefined8 *)((long)puVar4 + 0x79) = local_227;
      *(undefined1 *)(puVar4 + 10) = 1;
    }
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
    *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 0x98;
  }
  if (local_250 != '\0') {
    local_250 = '\0';
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_258 = FUN_01535080(lVar5,0);
  uStack_296 = 0x70;
  local_298 = 99;
  uStack_297 = 0x61;
  local_258 = local_258 & 0xffffffff;
  local_250 = '\0';
  uStack_265 = 0;
  uStack_263 = 0;
  uStack_262 = 0;
  uStack_261 = 0;
  uStack_26d = 0;
  uStack_26b = 0;
  uStack_26a = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  uStack_267 = 0;
  uStack_266 = 0;
  uStack_275 = 0;
  uStack_273 = 0;
  uStack_272 = 0;
  uStack_271 = 0;
  uStack_270 = 0;
  uStack_26f = 0;
  local_26e = 0;
  uStack_27d = 0;
  uStack_27b = 0;
  uStack_27a = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  uStack_277 = 0;
  local_276 = 0;
  uStack_285 = 0;
  uStack_283 = 0;
  uStack_282 = 0;
  uStack_281 = 0;
  uStack_280 = 0;
  uStack_27f = 0;
  local_27e = 0;
  uStack_28d = 0;
  uStack_28b = 0;
  uStack_28a = 0;
  uStack_289 = 0;
  uStack_288 = 0;
  uStack_287 = 0;
  local_286 = 0;
  uStack_295 = 0;
  uStack_293 = 0;
  uStack_292 = 0;
  uStack_291 = 0;
  uStack_290 = 0;
  uStack_28f = 0;
  uStack_28e = 0;
  uStack_260 = 1;
  local_2a0 = s_pokedex_cap_01d29883._0_4_;
  cStack_29c = s_pokedex_cap_01d29883[4];
  cStack_29b = s_pokedex_cap_01d29883[5];
  cStack_29a = s_pokedex_cap_01d29883[6];
  cStack_299 = s_pokedex_cap_01d29883[7];
  local_1c0 = FUN_01535080(lVar5,1);
  local_1c0 = local_1c0 & 0xffffffff;
  local_1b8 = '\0';
  local_1ca = 0;
  local_1d2 = 0;
  uStack_1d0 = 0;
  local_1da = 0;
  uStack_1d8 = 0;
  local_1e2 = 0;
  uStack_1e0 = 0;
  local_1ea = 0;
  uStack_1e8 = 0;
  local_1f2 = 0;
  uStack_1f0 = 0;
  local_1fa = 0;
  uStack_1f8 = 0;
  acStack_200[0] = s_pokedex_cap_r1_01d45118[8];
  acStack_200[1] = s_pokedex_cap_r1_01d45118[9];
  acStack_200[2] = s_pokedex_cap_r1_01d45118[10];
  acStack_200[3] = s_pokedex_cap_r1_01d45118[0xb];
  acStack_200[4] = s_pokedex_cap_r1_01d45118[0xc];
  acStack_200[5] = s_pokedex_cap_r1_01d45118[0xd];
  acStack_208[0] = s_pokedex_cap_r1_01d45118[0];
  acStack_208[1] = s_pokedex_cap_r1_01d45118[1];
  acStack_208[2] = s_pokedex_cap_r1_01d45118[2];
  acStack_208[3] = s_pokedex_cap_r1_01d45118[3];
  acStack_208[4] = s_pokedex_cap_r1_01d45118[4];
  acStack_208[5] = s_pokedex_cap_r1_01d45118[5];
  local_202[0] = s_pokedex_cap_r1_01d45118[6];
  local_202[1] = s_pokedex_cap_r1_01d45118[7];
  local_1c8 = 1;
  local_128 = FUN_01535080(lVar5,2);
  local_120 = '\0';
  local_13a = 0;
  uStack_138 = 0;
  local_142 = 0;
  uStack_140 = 0;
  local_162 = 0;
  uStack_160 = 0;
  lVar13 = *param_1;
  local_14a = 0;
  uStack_148 = 0;
  local_152 = 0;
  uStack_150 = 0;
  local_15a = 0;
  uStack_158 = 0;
  local_128 = local_128 & 0xffffffff;
  local_132 = 0;
  acStack_168[0] = s_pokedex_cap_r2_01d18635[8];
  acStack_168[1] = s_pokedex_cap_r2_01d18635[9];
  acStack_168[2] = s_pokedex_cap_r2_01d18635[10];
  acStack_168[3] = s_pokedex_cap_r2_01d18635[0xb];
  acStack_168[4] = s_pokedex_cap_r2_01d18635[0xc];
  acStack_168[5] = s_pokedex_cap_r2_01d18635[0xd];
  acStack_170[0] = s_pokedex_cap_r2_01d18635[0];
  acStack_170[1] = s_pokedex_cap_r2_01d18635[1];
  acStack_170[2] = s_pokedex_cap_r2_01d18635[2];
  acStack_170[3] = s_pokedex_cap_r2_01d18635[3];
  acStack_170[4] = s_pokedex_cap_r2_01d18635[4];
  acStack_170[5] = s_pokedex_cap_r2_01d18635[5];
  local_16a[0] = s_pokedex_cap_r2_01d18635[6];
  local_16a[1] = s_pokedex_cap_r2_01d18635[7];
  local_130 = 1;
  plVar12 = (long *)(lVar13 + 8);
  puVar6 = (undefined8 *)*plVar12;
  puVar4 = (undefined8 *)(lVar13 + 0x10);
  if (puVar6 == (undefined8 *)*puVar4) {
    FUN_01035c40(lVar13,&local_2a0);
  }
  else {
    uVar16 = *(undefined8 *)(lVar13 + 0x18);
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_01035c34;
    *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar16;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    *puVar6 = CONCAT17(cStack_299,
                       CONCAT16(cStack_29a,CONCAT15(cStack_29b,CONCAT14(cStack_29c,local_2a0))));
    puVar6[1] = CONCAT17(uStack_291,
                         CONCAT16(uStack_292,
                                  CONCAT15(uStack_293,
                                           CONCAT23(uStack_295,
                                                    CONCAT12(uStack_296,
                                                             CONCAT11(uStack_297,local_298))))));
    puVar6[4] = CONCAT17(uStack_279,
                         CONCAT16(uStack_27a,
                                  CONCAT15(uStack_27b,
                                           CONCAT23(uStack_27d,
                                                    CONCAT12(local_27e,
                                                             CONCAT11(uStack_27f,uStack_280))))));
    puVar6[5] = CONCAT17(uStack_271,
                         CONCAT16(uStack_272,
                                  CONCAT15(uStack_273,
                                           CONCAT23(uStack_275,
                                                    CONCAT12(local_276,
                                                             CONCAT11(uStack_277,uStack_278))))));
    puVar6[2] = CONCAT17(uStack_289,
                         CONCAT16(uStack_28a,
                                  CONCAT15(uStack_28b,
                                           CONCAT23(uStack_28d,
                                                    CONCAT12(uStack_28e,
                                                             CONCAT11(uStack_28f,uStack_290))))));
    puVar6[3] = CONCAT17(uStack_281,
                         CONCAT16(uStack_282,
                                  CONCAT15(uStack_283,
                                           CONCAT23(uStack_285,
                                                    CONCAT12(local_286,
                                                             CONCAT11(uStack_287,uStack_288))))));
    *(undefined1 *)(puVar6 + 10) = 0;
    puVar6[8] = CONCAT71(uStack_25f,uStack_260);
    puVar6[9] = local_258;
    puVar6[6] = CONCAT17(uStack_269,
                         CONCAT16(uStack_26a,
                                  CONCAT15(uStack_26b,
                                           CONCAT23(uStack_26d,
                                                    CONCAT12(local_26e,
                                                             CONCAT11(uStack_26f,uStack_270))))));
    puVar6[7] = CONCAT17(uStack_261,
                         CONCAT16(uStack_262,
                                  CONCAT15(uStack_263,
                                           CONCAT23(uStack_265,
                                                    CONCAT12(uStack_266,
                                                             CONCAT11(uStack_267,uStack_268))))));
    if (local_250 != '\0') {
      *(undefined8 *)((long)puVar6 + 0x69) = local_237;
      *(undefined8 *)((long)puVar6 + 0x61) = local_23f;
      *(undefined8 *)((long)puVar6 + 0x59) = local_247;
      *(undefined8 *)((long)puVar6 + 0x51) = local_24f;
      *(undefined8 *)((long)puVar6 + 0x71) = local_22f;
      *(undefined8 *)((long)puVar6 + 0x89) = local_217;
      *(undefined8 *)((long)puVar6 + 0x81) = local_21f;
      *(undefined8 *)((long)puVar6 + 0x79) = local_227;
      *(undefined1 *)(puVar6 + 10) = 1;
    }
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    *plVar12 = *plVar12 + 0x98;
    lVar13 = *param_1;
    plVar12 = (long *)(lVar13 + 8);
    puVar4 = (undefined8 *)(lVar13 + 0x10);
  }
  puVar6 = *(undefined8 **)(lVar13 + 8);
  if (puVar6 == *(undefined8 **)(lVar13 + 0x10)) {
    FUN_01035c40(lVar13,acStack_208);
  }
  else {
    uVar16 = *(undefined8 *)(lVar13 + 0x18);
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_01035c34;
    *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar16;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    *puVar6 = CONCAT26(local_202,acStack_208);
    puVar6[1] = CONCAT26(local_1fa,acStack_200);
    puVar6[4] = CONCAT26(local_1e2,uStack_1e8);
    puVar6[5] = CONCAT26(local_1da,uStack_1e0);
    puVar6[2] = CONCAT26(local_1f2,uStack_1f8);
    puVar6[3] = CONCAT26(local_1ea,uStack_1f0);
    *(undefined1 *)(puVar6 + 10) = 0;
    puVar6[8] = CONCAT71(uStack_1c7,local_1c8);
    puVar6[9] = local_1c0;
    puVar6[6] = CONCAT26(local_1d2,uStack_1d8);
    puVar6[7] = CONCAT26(local_1ca,uStack_1d0);
    if (local_1b8 != '\0') {
      *(undefined8 *)((long)puVar6 + 0x61) = local_1a7;
      *(undefined8 *)((long)puVar6 + 0x59) = local_1af;
      *(undefined8 *)((long)puVar6 + 0x51) = local_1b7;
      *(undefined8 *)((long)puVar6 + 0x69) = local_19f;
      *(undefined8 *)((long)puVar6 + 0x89) = local_17f;
      *(undefined8 *)((long)puVar6 + 0x81) = local_187;
      *(undefined8 *)((long)puVar6 + 0x79) = local_18f;
      *(undefined8 *)((long)puVar6 + 0x71) = local_197;
      *(undefined1 *)(puVar6 + 10) = 1;
    }
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    *plVar12 = *plVar12 + 0x98;
    lVar13 = *param_1;
    plVar12 = (long *)(lVar13 + 8);
    puVar4 = (undefined8 *)(lVar13 + 0x10);
  }
  puVar6 = (undefined8 *)*plVar12;
  if (puVar6 == (undefined8 *)*puVar4) {
    FUN_01035c40(lVar13,acStack_170);
  }
  else {
    uVar16 = *(undefined8 *)(lVar13 + 0x18);
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_01035c34:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar16;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    *puVar6 = CONCAT26(local_16a,acStack_170);
    puVar6[1] = CONCAT26(local_162,acStack_168);
    puVar6[4] = CONCAT26(local_14a,uStack_150);
    puVar6[5] = CONCAT26(local_142,uStack_148);
    puVar6[2] = CONCAT26(local_15a,uStack_160);
    puVar6[3] = CONCAT26(local_152,uStack_158);
    *(undefined1 *)(puVar6 + 10) = 0;
    puVar6[8] = CONCAT71(uStack_12f,local_130);
    puVar6[9] = local_128;
    puVar6[6] = CONCAT26(local_13a,uStack_140);
    puVar6[7] = CONCAT26(local_132,uStack_138);
    if (local_120 != '\0') {
      *(undefined8 *)((long)puVar6 + 0x69) = local_107;
      *(undefined8 *)((long)puVar6 + 0x61) = local_10f;
      *(undefined8 *)((long)puVar6 + 0x59) = local_117;
      *(undefined8 *)((long)puVar6 + 0x51) = local_11f;
      *(undefined8 *)((long)puVar6 + 0x89) = local_e7;
      *(undefined8 *)((long)puVar6 + 0x81) = local_ef;
      *(undefined8 *)((long)puVar6 + 0x79) = local_f7;
      *(undefined8 *)((long)puVar6 + 0x71) = local_ff;
      *(undefined1 *)(puVar6 + 10) = 1;
    }
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    *plVar12 = *plVar12 + 0x98;
  }
  if (local_120 != '\0') {
    local_120 = '\0';
  }
  if (local_1b8 != '\0') {
    local_1b8 = '\0';
  }
  if (local_250 != '\0') {
    local_250 = '\0';
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  return;
}


