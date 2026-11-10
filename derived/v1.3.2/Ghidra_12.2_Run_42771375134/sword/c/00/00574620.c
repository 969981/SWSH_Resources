/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00574620; name: FUN_00574620
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00574620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,long param_9
            ,undefined8 param_10,long *param_11,long *param_12,long *param_13,long param_14,
            uint param_15,uint param_16,float param_17,float param_18,float param_19,
            undefined4 *param_20,undefined4 param_21,int param_22,undefined4 *param_23,
            undefined4 *param_24,int param_25,byte param_26,undefined4 param_27)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float fVar9;
  
  if ((param_16 & 1) == 0) {
    lVar1 = 1;
    if (param_22 != 0) {
      lVar1 = 2;
    }
    if ((param_15 & 1) == 0) {
      lVar1 = 0;
    }
    puVar7 = (undefined4 *)(param_9 + (ulong)(param_25 != 0) * 0xc + lVar1 * 4 + 0x7e7c);
  }
  else {
    puVar7 = (undefined4 *)(param_9 + 0x7e78);
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))(*(long **)(param_9 + 0x30),*puVar7);
  _DAT_02760c18 = 0;
  DAT_02760c20 = (float)NEON_ucvtf(*(undefined4 *)((long)param_11 + 0x4c));
  DAT_02760c28._0_4_ = 1.0 / DAT_02760c20;
  DAT_02760c24 = (float)NEON_ucvtf((int)param_11[10]);
  DAT_02760c28._4_4_ = 1.0 / DAT_02760c24;
  DAT_02760c30._0_4_ = 0.5 / DAT_02760c20;
  DAT_02760c30._4_4_ = 0.5 / DAT_02760c24;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x104),&DAT_02760c18,2);
  fVar9 = logf(param_17 + 1.0);
  _DAT_02760c18 = CONCAT44(-1.0 / ((param_18 + param_18) * param_18),fVar9 / DAT_01d4c4dc);
  DAT_02760c20 = -1.0 / ((param_19 + param_19) * param_19);
  DAT_02760c24 = 0.0;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xfc),&DAT_02760c18,1);
  DAT_02760a18 = *param_20;
  DAT_02760a1c = param_20[1];
  DAT_02760a20 = param_20[2];
  DAT_02760a24 = 0;
  DAT_02760a28 = *param_23;
  DAT_02760a2c = param_23[1];
  DAT_02760a30 = param_23[2];
  DAT_02760a34 = 0;
  DAT_02760a38 = *param_24;
  DAT_02760a3c = param_24[1];
  DAT_02760a40._0_4_ = param_24[2];
  uVar2 = 0;
  DAT_02760a40._4_4_ = 0;
  uVar3 = 0x3f800000;
  uVar6 = 0;
  uVar4 = 0x3f800000;
  uVar5 = 0;
  uVar8 = 0;
  switch(param_22) {
  case 0:
    goto switchD_00574840_caseD_0;
  case 1:
    break;
  case 2:
    uVar2 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar3 = 0x3f800000;
    uVar5 = 0x3f800000;
    break;
  case 3:
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar8 = 0;
    uVar3 = 0x3f800000;
    uVar6 = 0x3f800000;
    break;
  case 4:
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar3 = 0x3f800000;
    uVar8 = 0x3f800000;
    break;
  case 5:
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar2 = 0x3f800000;
    break;
  default:
    uVar4 = 0x3f800000;
    uVar5 = 0;
    uVar6 = 0;
    uVar8 = 0;
  }
  DAT_02760a60 = 0;
  DAT_02760a48 = uVar4;
  DAT_02760a4c = uVar5;
  DAT_02760a50 = uVar6;
  DAT_02760a54 = uVar8;
  DAT_02760a58 = uVar3;
  DAT_02760a5c = uVar2;
switchD_00574840_caseD_0:
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,5);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_11);
  if (param_25 == 0) {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x44),param_12);
  }
  if (param_13 != (long *)0x0) {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x48),param_13);
  }
  if (param_14 != 0) {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x4c));
  }
  uVar2 = (**(code **)(*param_11 + 0x80))(param_11);
  uVar3 = (**(code **)(*param_12 + 0x80))(param_12);
  if (param_13 == (long *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (**(code **)(*param_13 + 0x80))(param_13);
  }
  uVar5 = 8;
  if ((param_25 == 0 & param_26) != 0) {
    uVar5 = 9;
  }
  (**(code **)(*param_11 + 0x78))(param_11,uVar5);
  (**(code **)(*param_12 + 0x78))(param_12,9);
  if (param_13 != (long *)0x0) {
    (**(code **)(*param_13 + 0x78))(param_13,9);
  }
  uVar5 = (**(code **)(**(long **)(param_9 + 0x20) + 0x178))();
  (**(code **)(**(long **)(param_9 + 0x20) + 0x160))(*(long **)(param_9 + 0x20),param_21);
  if (param_25 == 0) {
    uVar6 = FUN_005729b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_27);
  }
  else {
    uVar6 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_27);
  }
  (**(code **)(**(long **)(param_9 + 0x20) + 0x160))(*(long **)(param_9 + 0x20),uVar5);
  (**(code **)(*param_11 + 0x78))(param_11,uVar2);
  (**(code **)(*param_12 + 0x78))(param_12,uVar3);
  if (param_13 != (long *)0x0) {
    (**(code **)(*param_13 + 0x78))(param_13,uVar4);
  }
  return uVar6;
}


