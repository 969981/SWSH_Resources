/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012287a0; name: FUN_012287a0
 */


undefined8 FUN_012287a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  undefined *local_230 [5];
  undefined1 auStack_208 [32];
  undefined *local_1e8;
  undefined1 local_1e0 [16];
  undefined1 *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_1b8 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  puVar1 = PTR_DAT_027167e8 + 0x10;
  local_1d0 = local_1e0;
  local_1e0[0] = 0;
  local_1c8 = 0x10;
  uStack_1c0 = 0;
  local_1e8 = puVar1;
  FUN_017d05f0(&local_1e8,param_3,0xffffffffffffffff);
  FUN_0179eba0(auStack_208,&local_1e8,param_2);
  FUN_01844a00(local_230,auStack_208);
  lVar3 = FUN_017d1100(local_230,&local_c0,0x80);
  FUN_0077dfd0(&uStack_1c0,0x80,&local_c0,0x80);
  uVar8 = 0;
  if (0xe < lVar3 - 1U) goto LAB_01228948;
  uVar2 = 0xf - lVar3;
  if (uVar2 == 0) {
LAB_01228928:
    memcpy((void *)((long)param_1 + uVar2 * 2 + 8),&uStack_1c0,lVar3 * 2 - 2);
  }
  else {
    uVar4 = uVar2 & 3;
    if (0xeU - lVar3 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      lVar5 = (long)param_1 + 0xe;
      do {
        lVar6 = lVar6 + 4;
        *(undefined8 *)(lVar5 + -6) = 0x30003000300030;
        lVar5 = lVar5 + 8;
      } while (uVar2 - uVar4 != lVar6);
    }
    if (uVar4 != 0) {
      lVar5 = -uVar4;
      puVar7 = (undefined2 *)((long)param_1 + lVar6 * 2 + 8);
      do {
        lVar5 = lVar5 + 1;
        *puVar7 = 0x30;
        puVar7 = puVar7 + 1;
      } while (lVar5 != 0);
    }
    if (uVar2 < 0xe) goto LAB_01228928;
  }
  uVar8 = 1;
  *param_1 = param_2;
LAB_01228948:
  local_230[0] = puVar1;
  FUN_017d0720(local_230);
  local_1e8 = puVar1;
  FUN_017d0720(&local_1e8);
  return uVar8;
}


