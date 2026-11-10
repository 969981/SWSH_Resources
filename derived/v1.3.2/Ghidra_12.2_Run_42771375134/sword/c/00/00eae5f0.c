/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eae5f0; name: FUN_00eae5f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eae5f0(long param_1)

{
  void *__src;
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined1 local_3d0 [16];
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined1 local_3b0 [16];
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined4 local_380;
  undefined4 local_370;
  undefined8 local_36c;
  undefined8 local_364;
  undefined8 local_35c;
  undefined8 local_354;
  undefined8 local_34c;
  undefined8 local_344;
  undefined8 local_33c;
  undefined8 local_334;
  undefined8 local_32c;
  undefined8 local_324;
  undefined8 local_31c;
  undefined4 local_314;
  undefined4 uStack_310;
  undefined8 local_30c;
  undefined8 local_304;
  undefined8 local_2fc;
  undefined8 local_2f4;
  undefined8 local_2ec;
  undefined8 local_2e4;
  undefined8 local_2dc;
  undefined8 local_2d4;
  undefined8 local_2cc;
  undefined8 local_2c4;
  undefined8 local_2bc;
  undefined8 local_2b4;
  undefined2 local_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined5 uStack_268;
  undefined3 local_263;
  undefined5 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined4 local_170;
  undefined2 local_16c;
  undefined1 local_16a;
  undefined4 local_168;
  undefined2 local_164;
  undefined6 uStack_160;
  undefined2 local_15a;
  undefined6 uStack_158;
  undefined8 local_150;
  undefined6 uStack_148;
  undefined2 local_142;
  undefined6 uStack_140;
  undefined8 local_13a;
  undefined4 local_132;
  undefined8 local_12e;
  undefined2 local_126;
  undefined8 local_120;
  undefined4 local_118;
  undefined2 local_114;
  undefined8 local_110;
  undefined1 auStack_100 [160];
  
  iVar2 = *(int *)(param_1 + 0x690) + -1;
  if (*(int *)(param_1 + 0x690) < 1) {
    if (*(int *)(param_1 + 0x448) <= *(int *)(param_1 + 0x700)) {
      return;
    }
    if (3 < *(int *)(param_1 + 0x700)) {
      return;
    }
    if (0xb < *(int *)(*(long *)PTR_DAT_0271fc30 + 0x50)) {
      if (*(int *)(*(long *)PTR_DAT_0271fc30 + 0x50) != 0xc) {
        return;
      }
      lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar3 = *(long *)(lVar4 + 0x7b0);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      lVar4 = *(long *)(lVar3 + 0x78);
      if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00eae784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
        return;
      }
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      iVar2 = *(int *)(lVar4 + 0x54);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      if (iVar2 == 0) {
        return;
      }
    }
    if (*(long *)(param_1 + 0x708) == 0) {
      return;
    }
    if (*(int *)(*(long *)(param_1 + 0x708) + 0x54) == 0) {
      return;
    }
    __src = (void *)(param_1 + 0x3a0);
    memcpy(&local_3e0,__src,0xa0);
    lVar4 = 0;
    if (*(long *)(param_1 + 0x708) != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x708) + 0x60);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        uVar1 = FUN_015b5320(lVar4);
        lVar4 = lVar4 + -0x50;
        if ((uVar1 & 1) == 0) {
          lVar4 = 0;
        }
      }
    }
    uVar1 = FUN_00ddfc80(0,&local_3e0,lVar4 + 0xb0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x448) <= *(int *)(param_1 + 0x700)) {
      return;
    }
    local_3d0._0_8_ = 0;
    local_3d0._8_8_ = 0;
    uStack_3b8 = _UNK_01d4a138;
    local_3c0 = _DAT_01d4a130;
    local_3e0 = 0xcbf29ce484222645;
    uStack_3d8 = 0xcbf29ce484222645;
    local_3b0 = FUN_00a92cd0(0,0,0);
    local_380 = 0;
    local_3a0 = 0xcbf29ce484222645;
    uStack_398 = 0;
    local_390 = 0;
    uStack_388 = 0;
    local_370 = 1;
    local_364 = 0;
    local_36c = 0;
    local_354 = 0x100000000;
    local_334 = 0x100000000;
    local_35c = 0;
    local_33c = 0;
    local_344 = 0;
    local_34c = 0;
    local_314 = 0;
    uStack_310 = 1;
    local_31c = 0;
    local_324 = 0;
    local_32c = 0;
    local_2ac = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_2b4 = 0;
    local_2bc = 0;
    local_2c4 = 0;
    local_2cc = 0;
    local_2d4 = 0;
    local_2dc = 0;
    local_2e4 = 0;
    local_2ec = 0;
    local_2f4 = 0;
    local_2fc = 0;
    local_304 = 0;
    local_30c = 0;
    local_278 = 0xcbf29ce484222645;
    uStack_270 = 0xcbf29ce484222645;
    uStack_260 = 0;
    uStack_268 = 0;
    local_263 = 0;
    local_1b0 = 0;
    local_1b8 = 0;
    local_1c0 = 0;
    local_1c8 = 0;
    local_1d0 = 0;
    local_1d8 = 0;
    local_180 = 0;
    local_188 = 0;
    local_190 = 0;
    local_198 = 0;
    local_1a0 = 0;
    local_170 = 0;
    local_16c = 0;
    local_16a = 1;
    local_168 = 0;
    local_164 = 0xffff;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_258 = 0;
    uStack_250 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    local_15a = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    local_142 = 0;
    local_150 = 0;
    local_132 = 0xffffffff;
    local_13a = 0xffffffffffffffff;
    local_12e = 0xff000000000000;
    local_114 = 1;
    local_120 = 0;
    local_126 = 0;
    local_118 = 0;
    local_110 = 0xffffffff00000000;
    memcpy(auStack_100,__src,0xa0);
    local_3d0 = FUN_00de00d0(0,auStack_100,3);
    local_3a0 = 0xcbf29ce484222645;
    uVar1 = FUN_00eaf260(param_1,local_3d0,*(undefined4 *)(param_1 + 0x3b0),&local_3a0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar1 = FUN_00eaf350(param_1,&local_3e0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    fVar6 = uStack_250._4_4_ + 10.0;
    memcpy(auStack_100,__src,0xa0);
    uVar1 = FUN_00ddfc80(fVar6,auStack_100,local_3d0,3);
    if ((uVar1 & 1) == 0) {
      return;
    }
    FUN_00eaf4d0(param_1,&local_3e0);
    iVar2 = 5;
  }
  *(int *)(param_1 + 0x690) = iVar2;
  return;
}


