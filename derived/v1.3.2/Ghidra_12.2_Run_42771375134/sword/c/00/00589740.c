/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00589740; name: FUN_00589740
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00589740(float param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
            float *param_7,ulong param_8,int param_9,uint param_10)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_108;
  undefined4 local_104;
  float local_100 [2];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x54));
  fVar9 = *(float *)(param_3 + 0x88) * fVar8 + *(float *)(param_3 + 0x90);
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x58));
  uVar11 = *(undefined4 *)(param_6 + 0x54);
  uVar10 = *(undefined4 *)(param_6 + 0x58);
  fVar8 = *(float *)(param_3 + 0x8c) * fVar8 + *(float *)(param_3 + 0x94);
  FUN_0059d300(param_6,0,1,1,0,0);
  FUN_0059d000(0,0);
  puVar7 = (undefined8 *)(param_2 + 0x30);
  (**(code **)(*(long *)*puVar7 + 0xe8))
            ((long *)*puVar7,*(undefined4 *)((long)puVar7 + (long)param_9 * 4 + 0x7ae4));
  _DAT_02760c20 = 0;
  DAT_02760c30 = 0;
  DAT_02760c94._4_4_ = *(float *)(PTR_DAT_02713c78 + 0x70) * param_1;
  DAT_02760c9c._0_4_ = *(float *)(PTR_DAT_02713c78 + 0x74) * param_1;
  DAT_02760cac._0_4_ = *(float *)(PTR_DAT_02713c78 + 100) * param_1;
  DAT_02760ca4._4_4_ = *(float *)(PTR_DAT_02713c78 + 0x60) * param_1;
  DAT_02760cbc._0_4_ = *(float *)(PTR_DAT_02713c78 + 0x54) * param_1;
  DAT_02760cb4._4_4_ = *(float *)(PTR_DAT_02713c78 + 0x50) * param_1;
  DAT_02760ccc._0_4_ = *(float *)(PTR_DAT_02713c78 + 0x44) * param_1;
  DAT_02760cc4._4_4_ = *(float *)(PTR_DAT_02713c78 + 0x40) * param_1;
  DAT_02760cd8._4_4_ = *(float *)(PTR_DAT_02713c78 + 0x34) * param_1;
  DAT_02760cd8._0_4_ = *(float *)(PTR_DAT_02713c78 + 0x30) * param_1;
  DAT_02760c18 = fVar9 * 0.5;
  DAT_02760c1c = fVar8 * 0.5;
  DAT_02760c9c._4_4_ = param_1 * 0.0;
  DAT_02760d08._0_4_ = *(float *)PTR_DAT_02713c78 * param_1;
  DAT_02760d08._4_4_ = *(float *)(PTR_DAT_02713c78 + 4) * param_1;
  DAT_02760ce8._0_4_ = *(float *)(PTR_DAT_02713c78 + 0x20) * param_1;
  DAT_02760ce8._4_4_ = *(float *)(PTR_DAT_02713c78 + 0x24) * param_1;
  _DAT_02760c40 = 0;
  ram0x02760c50 = 0;
  ram0x02760c60 = 0;
  ram0x02760c70 = 0;
  ram0x02760c80 = 0;
  ram0x02760c90 = 0;
  DAT_02760cf8._4_4_ = *(float *)(PTR_DAT_02713c78 + 0x14) * param_1;
  DAT_02760cf8._0_4_ = *(float *)(PTR_DAT_02713c78 + 0x10) * param_1;
  DAT_02760c28._0_4_ = DAT_02760c18;
  DAT_02760c28._4_4_ = DAT_02760c1c;
  DAT_02760c38 = DAT_02760c18;
  DAT_02760c3c = DAT_02760c1c;
  DAT_02760c44._4_4_ = DAT_02760c18;
  DAT_02760c4c._0_4_ = DAT_02760c1c;
  DAT_02760c54._4_4_ = DAT_02760c18;
  DAT_02760c5c._0_4_ = DAT_02760c1c;
  DAT_02760c64._4_4_ = DAT_02760c18;
  DAT_02760c6c._0_4_ = DAT_02760c1c;
  DAT_02760c74._4_4_ = DAT_02760c18;
  DAT_02760c7c._0_4_ = DAT_02760c1c;
  DAT_02760c84._4_4_ = DAT_02760c18;
  DAT_02760c8c._0_4_ = DAT_02760c1c;
  DAT_02760ca4._0_4_ = DAT_02760c9c._4_4_;
  DAT_02760cac._4_4_ = DAT_02760c9c._4_4_;
  DAT_02760cb4._0_4_ = DAT_02760c9c._4_4_;
  DAT_02760cbc._4_4_ = DAT_02760c9c._4_4_;
  DAT_02760cc4._0_4_ = DAT_02760c9c._4_4_;
  DAT_02760ccc._4_4_ = DAT_02760c9c._4_4_;
  DAT_02760cd4 = DAT_02760c9c._4_4_;
  DAT_02760ce0._0_4_ = DAT_02760c9c._4_4_;
  DAT_02760ce0._4_4_ = DAT_02760c9c._4_4_;
  DAT_02760cf0._0_4_ = DAT_02760c9c._4_4_;
  DAT_02760cf0._4_4_ = DAT_02760c9c._4_4_;
  DAT_02760d00._0_4_ = DAT_02760c9c._4_4_;
  DAT_02760d00._4_4_ = DAT_02760c9c._4_4_;
  DAT_02760d10._0_4_ = DAT_02760c9c._4_4_;
  DAT_02760d10._4_4_ = DAT_02760c9c._4_4_;
  (**(code **)(*(long *)*puVar7 + 0xb0))
            ((long *)*puVar7,*(undefined4 *)(param_2 + 0xf4),&DAT_02760c18,0x10);
  local_100[0] = DAT_01d4bec0;
  if (*param_7 != 0.0) {
    local_100[0] = 1.0 / *param_7;
  }
  local_f8 = param_7[2];
  local_f4 = param_7[3];
  local_f0 = DAT_01d4bec0;
  if (param_7[4] != 0.0) {
    local_f0 = 1.0 / param_7[4];
  }
  local_e8 = param_7[6];
  local_e4 = param_7[7];
  local_e0 = DAT_01d4bec0;
  if (param_7[8] != 0.0) {
    local_e0 = 1.0 / param_7[8];
  }
  local_d8 = param_7[10];
  local_d4 = param_7[0xb];
  local_d0 = DAT_01d4bec0;
  if (param_7[0xc] != 0.0) {
    local_d0 = 1.0 / param_7[0xc];
  }
  local_c8 = param_7[0xe];
  local_c4 = param_7[0xf];
  local_c0 = DAT_01d4bec0;
  if (param_7[0x10] != 0.0) {
    local_c0 = 1.0 / param_7[0x10];
  }
  local_b8 = param_7[0x12];
  local_b4 = param_7[0x13];
  local_b0 = DAT_01d4bec0;
  if (param_7[0x14] != 0.0) {
    local_b0 = 1.0 / param_7[0x14];
  }
  local_a8 = param_7[0x16];
  local_a4 = param_7[0x17];
  local_a0 = DAT_01d4bec0;
  if (param_7[0x18] != 0.0) {
    local_a0 = 1.0 / param_7[0x18];
  }
  local_98 = param_7[0x1a];
  local_94 = param_7[0x1b];
  local_90 = DAT_01d4bec0;
  if (param_7[0x1c] != 0.0) {
    local_90 = 1.0 / param_7[0x1c];
  }
  local_88 = param_7[0x1e];
  uVar11 = NEON_ucvtf(uVar11);
  local_84 = param_7[0x1f];
  uVar10 = NEON_ucvtf(uVar10);
  (**(code **)(**(long **)(param_2 + 0x30) + 0xb0))
            (*(long **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0xfc),local_100,8);
  (**(code **)(**(long **)(param_2 + 0x30) + 0xb0))
            (*(long **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x100),param_8,8);
  lVar2 = param_3;
  do {
    lVar3 = lVar2;
    lVar2 = *(long *)(lVar3 + 0x120);
  } while (lVar2 != 0);
  (**(code **)(**(long **)(param_2 + 0x30) + 0xd0))
            (*(long **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x40),
             *(undefined8 *)(lVar3 + 0xa8));
  lVar2 = param_4;
  do {
    lVar3 = lVar2;
    lVar2 = *(long *)(lVar3 + 0x120);
  } while (lVar2 != 0);
  (**(code **)(**(long **)(param_2 + 0x30) + 0xd0))
            (*(long **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x44),
             *(undefined8 *)(lVar3 + 0xa8));
  lVar2 = param_5;
  do {
    lVar3 = lVar2;
    lVar2 = *(long *)(lVar3 + 0x120);
  } while (lVar2 != 0);
  (**(code **)(**(long **)(param_2 + 0x30) + 0xd0))
            (*(long **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x48),
             *(undefined8 *)(lVar3 + 0xa8));
  do {
    lVar2 = param_3;
    param_3 = *(long *)(lVar2 + 0x120);
  } while (param_3 != 0);
  plVar6 = *(long **)(lVar2 + 0xa8);
  do {
    lVar2 = param_4;
    param_4 = *(long *)(lVar2 + 0x120);
  } while (param_4 != 0);
  plVar5 = *(long **)(lVar2 + 0xa8);
  do {
    lVar2 = param_5;
    param_5 = *(long *)(lVar2 + 0x120);
  } while (param_5 != 0);
  plVar4 = *(long **)(lVar2 + 0xa8);
  if (plVar6 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar6 + 0x80))(plVar6);
    param_8 = (ulong)uVar1;
    (**(code **)(*plVar6 + 0x78))(plVar6,2);
  }
  if (plVar5 != (long *)0x0) {
    local_108 = (**(code **)(*plVar5 + 0x80))(plVar5);
    (**(code **)(*plVar5 + 0x78))(plVar5,2);
  }
  if (plVar4 != (long *)0x0) {
    local_104 = (**(code **)(*plVar4 + 0x80))(plVar4);
    (**(code **)(*plVar4 + 0x78))(plVar4,2);
  }
  uVar10 = FUN_00571d00(0,0,uVar11,uVar10,0,0,fVar9,fVar8,param_2,param_10 | 0x10000);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x78))(plVar6,param_8 & 0xffffffff);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x78))(plVar5,local_108);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x78))(plVar4,local_104);
  }
  return uVar10;
}


