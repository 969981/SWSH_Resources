/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00578940; name: FUN_00578940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00578940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float param_5,float param_6,float param_7,float param_8,long param_9,
                 undefined4 param_10,ulong param_11,ulong param_12,ulong param_13,long *param_14,
                 undefined8 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,
                 float param_19,undefined4 param_20,undefined4 param_21,undefined4 param_22,
                 undefined4 param_23,float param_24,undefined4 param_25,undefined4 param_26,
                 undefined4 param_27,float param_28,undefined4 param_29,undefined4 param_30)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_94;
  float local_48;
  float local_44;
  
  fVar9 = param_28;
  uVar8 = param_27;
  uVar7 = param_26;
  uVar6 = param_25;
  fVar5 = param_24;
  uVar4 = param_23;
  uVar3 = param_22;
  uVar2 = param_21;
  uVar1 = param_20;
  fVar15 = param_19;
  puVar13 = (undefined4 *)(param_9 + 0x1b3a4);
  if ((param_11 & 1) == 0) {
    if (param_28 != 0.0) {
      if (param_19 == 0.0) {
        puVar13 = (undefined4 *)(param_9 + 0x1b3c0);
        puVar12 = (undefined4 *)(param_9 + 0x1b3bc);
      }
      else {
        puVar13 = (undefined4 *)(param_9 + 0x1b3b8);
        puVar12 = (undefined4 *)(param_9 + 0x1b3b0);
      }
      if ((param_12 & 1) == 0) {
        puVar13 = puVar12;
      }
    }
  }
  else {
    puVar13 = (undefined4 *)(param_9 + 0x1b3a8);
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))(*(long **)(param_9 + 0x30),*puVar13);
  FUN_00578590(param_17,param_18,fVar15,uVar1,uVar2,uVar3,uVar4,uVar8,param_10,&local_44,&local_48,
               &local_94,&param_19);
  fVar17 = param_7 / (local_48 + local_48);
  fVar18 = param_8 / (local_94 + local_94);
  fVar15 = tanf(local_44 * 0.5);
  DAT_02760c3c = 1.0 / fVar15;
  _DAT_02760c18 = CONCAT44(1.0 / fVar18,1.0 / fVar17);
  DAT_02760c28 = CONCAT44(fVar18,fVar17);
  DAT_02760c30 = CONCAT44(param_8 * 0.5,param_7 * 0.5);
  fVar15 = (float)NEON_ucvtf(*(undefined4 *)((long)param_14 + 0x4c));
  DAT_02760c40 = ((param_7 - param_5) / fVar15) * 0.375;
  fVar15 = (float)NEON_ucvtf((int)param_14[10]);
  fVar16 = 1.0 / fVar5;
  DAT_02760c44._0_4_ = ((param_8 - param_6) / fVar15) * 0.375;
  DAT_02760c4c._4_4_ = fVar16 * 0.0 - (1.0 - fVar5) * fVar16;
  DAT_02760c44._4_4_ = fVar16 * (1.0 / local_48);
  DAT_02760c4c._0_4_ = fVar16 * (1.0 / local_94);
  DAT_02760c20 = (param_7 * -0.5) / fVar17;
  DAT_02760c24 = (param_8 * -0.5) / fVar18;
  DAT_02760c38 = local_44 * 0.5;
  DAT_02760c54._0_4_ = DAT_02760c4c._4_4_;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x110),&DAT_02760c18,4);
  local_a4 = uVar6;
  local_a8 = param_19;
  local_a0 = 0;
  local_9c = uVar7;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x128),&local_a8);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_14);
  if (fVar9 == 0.0) goto LAB_00578ea0;
  if (((DAT_027606d0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_027606d0), iVar11 != 0)) {
    DAT_027605dc = 1;
    __cxa_guard_release(&DAT_027606d0);
    if ((DAT_027606d8 & 1) == 0) goto LAB_00578cc8;
LAB_00578c28:
    if ((DAT_027606e0 & 1) != 0) goto LAB_00578c38;
LAB_00578cfc:
    iVar11 = __cxa_guard_acquire(&DAT_027606e0);
    if (iVar11 == 0) goto LAB_00578c38;
    DAT_027605e4 = 0x61e9b;
    __cxa_guard_release(&DAT_027606e0);
    if ((DAT_027606e8 & 1) == 0) goto LAB_00578d34;
LAB_00578c48:
    if ((param_13 & 1) != 0) {
LAB_00578c58:
      DAT_027605dc = DAT_027605dc * 0x5d588b65 + 0x1000001;
      DAT_027605e0 = DAT_027605e0 * 0x5d588b65 + 0x1000001;
      DAT_027605e4 = DAT_027605e4 * 0x5d588b65 + 0x1000001;
      DAT_027605e8 = DAT_027605e8 * 0x5d588b65 + 0x1000001;
    }
  }
  else {
    if ((DAT_027606d8 & 1) != 0) goto LAB_00578c28;
LAB_00578cc8:
    iVar11 = __cxa_guard_acquire(&DAT_027606d8);
    if (iVar11 == 0) goto LAB_00578c28;
    DAT_027605e0 = 0x3391;
    __cxa_guard_release(&DAT_027606d8);
    if ((DAT_027606e0 & 1) == 0) goto LAB_00578cfc;
LAB_00578c38:
    if ((DAT_027606e8 & 1) != 0) goto LAB_00578c48;
LAB_00578d34:
    iVar11 = __cxa_guard_acquire(&DAT_027606e8);
    if (iVar11 == 0) goto LAB_00578c48;
    DAT_027605e8 = 0xbf1;
    __cxa_guard_release(&DAT_027606e8);
    if ((param_13 & 1) != 0) goto LAB_00578c58;
  }
  lVar14 = *(long *)(param_9 + 0x29ab8);
  _DAT_02760c18 = 0xbf80000040000000;
  NEON_ucvtf(*(undefined4 *)(lVar14 + 0x4c));
  NEON_ucvtf(*(undefined4 *)(lVar14 + 0x50));
  bVar10 = (param_12 & 1) == 0;
  DAT_02760c28 = 0x3f000000;
  DAT_02760c30 = 0;
  DAT_02760c20 = fVar9 * DAT_01d4c6ac;
  if (bVar10) {
    DAT_02760c20 = fVar9;
  }
  DAT_02760c24 = 0.0;
  if (bVar10) {
    DAT_02760c24 = 1.0;
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760c18,2);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x44),lVar14);
LAB_00578ea0:
  (**(code **)(*param_14 + 0x88))(param_14,0);
  if (fVar9 == 0.0) {
    FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_16);
  }
  else {
    FUN_00572010(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_16);
  }
  return;
}


