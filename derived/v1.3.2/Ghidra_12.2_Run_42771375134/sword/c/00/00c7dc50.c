/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7dc50; name: FUN_00c7dc50
 */


void FUN_00c7dc50(undefined8 param_1,long param_2,uint param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  void *__src;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long local_460;
  undefined1 auStack_458 [144];
  undefined *local_3c8;
  undefined4 local_3c0;
  undefined8 local_3b8;
  undefined6 uStack_3b0;
  undefined2 local_3aa;
  undefined4 uStack_3a8;
  undefined1 uStack_3a4;
  undefined1 uStack_3a3;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined1 local_350;
  undefined *local_348;
  undefined4 local_340;
  undefined8 local_338;
  undefined6 uStack_330;
  undefined2 local_32a;
  undefined6 uStack_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined *puStack_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined6 uStack_2d0;
  undefined2 local_2ca;
  undefined6 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined *puStack_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined6 uStack_270;
  undefined2 local_26a;
  undefined6 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined *local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined6 uStack_210;
  undefined2 local_20a;
  undefined6 uStack_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined6 uStack_1b0;
  undefined2 local_1aa;
  undefined6 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined6 uStack_150;
  undefined2 local_14a;
  undefined6 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined1 local_102;
  undefined4 local_100;
  undefined1 local_fc;
  int local_f8;
  undefined1 auStack_f0 [144];
  undefined8 local_60;
  undefined8 local_58;
  
  uStack_3a8 = 0;
  uStack_3a4 = 0;
  uStack_3a3 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_3aa = 0;
  local_3a0 = 0;
  local_398 = *(undefined8 *)PTR_DAT_02719748;
  uStack_378 = *(undefined8 *)PTR_DAT_0271c2f8;
  local_360 = 0;
  uStack_358 = 0;
  local_350 = 1;
  local_370 = 0;
  uStack_368 = 0;
  uStack_328 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_32a = 0;
  local_320 = 0;
  local_340 = 0xf;
  local_348 = PTR_DAT_0271c288 + 0x10;
  local_2f8 = 6;
  local_2f0 = 0;
  uStack_2c8 = 0;
  local_2e0 = 0xf;
  local_298 = 6;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2ca = 0;
  local_2c0 = 0;
  local_290 = 0;
  uStack_268 = 0;
  local_260 = 0;
  local_280 = 0xf;
  local_238 = 6;
  local_230 = 0;
  local_218 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_26a = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  local_20a = 0;
  local_200 = 0;
  local_220 = 0xf;
  local_1d8 = 6;
  local_1d0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  local_1aa = 0;
  local_1b8 = 0;
  local_1a0 = 0;
  local_1c0 = 0xf;
  local_178 = 6;
  local_170 = 0;
  uStack_148 = 0;
  local_160 = 0xf;
  local_104 = 0x101;
  local_108 = 0x1010101;
  uStack_150 = 0;
  local_14a = 0;
  local_158 = 0;
  local_140 = 0;
  local_118 = 6;
  local_110 = 0;
  local_3c0 = 0x10;
  local_3c8 = PTR_DAT_0271c370 + 0x10;
  local_102 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  local_390 = local_398;
  uStack_388 = local_398;
  local_380 = local_398;
  local_318 = local_398;
  uStack_310 = local_398;
  local_308 = local_398;
  uStack_300 = local_398;
  puStack_2e8 = local_348;
  uStack_2b8 = local_398;
  local_2b0 = local_398;
  uStack_2a8 = local_398;
  local_2a0 = local_398;
  puStack_288 = local_348;
  local_258 = local_398;
  local_250 = local_398;
  local_248 = local_398;
  local_240 = local_398;
  local_228 = local_348;
  local_1f8 = local_398;
  local_1f0 = local_398;
  local_1e8 = local_398;
  local_1e0 = local_398;
  local_1c8 = local_348;
  local_198 = local_398;
  local_190 = local_398;
  local_188 = local_398;
  local_180 = local_398;
  local_168 = local_348;
  local_138 = local_398;
  local_130 = local_398;
  local_128 = local_398;
  local_120 = local_398;
  FUN_00cc10e0(auStack_f0);
  local_58 = 0;
  local_60 = 0;
  local_3c0 = 0x11;
  FUN_00cc10e0(auStack_458);
  __src = *(void **)(param_4 + 0x60);
  if (__src == (void *)0x0) {
    lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    if (lVar9 == 0) {
      __src = (void *)FUN_01524df0(0);
    }
    else {
      plVar7 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __src = (void *)FUN_01524df0(lVar9);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  memcpy(auStack_458,__src,0x90);
  FUN_00c7bb40(param_2,&local_3c8,param_4);
  iVar8 = *(int *)(param_4 + 0x58);
  local_f8 = iVar8;
  memcpy(auStack_f0,auStack_458,0x90);
  if (iVar8 == 2) {
    local_58 = 0;
    local_60 = 0;
  }
  else if (iVar8 == 1) {
    local_60 = *(undefined8 *)(*(long *)(param_2 + 0x80) + 8);
    local_58 = *(undefined8 *)(*(long *)(param_2 + 0x80) + 0x28);
  }
  local_102 = *(undefined1 *)(param_4 + 0x79);
  local_100 = *(undefined4 *)(param_4 + 0x160);
  local_fc = *(undefined1 *)(param_4 + 0x164);
  if (*(char *)(param_4 + 0x78) == '\0') {
    FUN_00cc1260(auStack_f0);
  }
  uStack_3a3 = *(undefined1 *)(param_4 + 0x15e);
  uStack_3a4 = param_3 == 1;
  FUN_00c7b270(&local_460,param_2,param_3 < 2,&local_3c8);
  if ((local_460 == 0) || (*(int *)(local_460 + 0x54) == 0)) {
    plVar7 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(local_460 + 0x54);
    iVar8 = *(int *)(local_460 + 0x54);
    do {
      while( true ) {
        plVar6 = *(long **)(local_460 + 0x58);
        plVar5 = (long *)FUN_00c80fa0();
        plVar7 = (long *)0x0;
        if (plVar6 == (long *)0x0) goto LAB_00c7dfec;
        while (plVar6 != plVar5) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            plVar7 = (long *)0x0;
            goto LAB_00c7dfec;
          }
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar8) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar7 = (long *)0x0;
          if (*(long *)(local_460 + 0x60) != 0) {
            plVar7 = (long *)(*(long *)(local_460 + 0x60) + -0x50);
          }
          goto LAB_00c7dfec;
        }
        plVar7 = (long *)0x0;
        iVar8 = iVar2;
        if (iVar2 == 0) goto LAB_00c7dfec;
      }
      ClearExclusiveLocal();
      plVar7 = (long *)0x0;
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00c7dfec:
  (**(code **)(*plVar7 + 0x98))(param_1,plVar7);
  if (plVar7 != (long *)0x0) {
    (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
  }
  if (local_460 != 0) {
    (**(code **)(*(long *)(local_460 + 0x48) + 0x18))((long *)(local_460 + 0x48));
  }
  FUN_00c71750(&local_3c8);
  return;
}


