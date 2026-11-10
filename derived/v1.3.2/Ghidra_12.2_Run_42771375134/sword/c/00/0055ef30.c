/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0055ef30; name: FUN_0055ef30
 */


undefined8
FUN_0055ef30(float param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5,
            float param_6,undefined4 param_7,long param_8,undefined8 param_9,undefined4 param_10,
            uint param_11,long param_12,uint param_13,undefined4 param_14,undefined8 param_15)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_8 + 0xbc));
  fVar7 = logf(fVar6 / DAT_01d4be34);
  fVar7 = fVar7 / DAT_01d4c4dc;
  fVar6 = 1.0;
  if (0.0 <= param_3) {
    fVar6 = param_3;
  }
  *(undefined4 *)(param_8 + 0x140) = param_10;
  *(float *)(param_8 + 0x178) = param_6;
  *(undefined4 *)(param_8 + 0x17c) = param_7;
  *(float *)(param_8 + 0x168) = param_1;
  *(undefined4 *)(param_8 + 0x13c) = param_4;
  *(undefined4 *)(param_8 + 0x144) = param_5;
  *(float *)(param_8 + 0x138) = fVar6;
  *(float *)(param_8 + 0x164) = param_1 / param_2;
  *(int *)(param_8 + 0x414) = (int)fVar7 + 2;
  if (param_11 == 0xffffffff) {
    if (param_12 == 0) {
      return 0xffffffff;
    }
  }
  else {
    param_12 = *(long *)PTR_DAT_02713a78 + (ulong)param_11 * 0xa8;
  }
  *(long *)(param_8 + 0x170) = param_12;
  uVar8 = FUN_0055ee30(param_8);
  *(undefined4 *)(param_8 + 0x134) = uVar8;
  fVar6 = *(float *)(&DAT_01cd5370 + (ulong)(*(char *)(param_8 + 0xfa) == '\0') * 4);
  fVar7 = *(float *)(param_8 + 0x404);
  iVar3 = *(int *)(param_8 + 0xe0);
  if (*(int *)(param_8 + 0x3d8) <= *(int *)(param_8 + 0xe0)) {
    iVar3 = *(int *)(param_8 + 0x3d8);
  }
  fVar9 = exp2f(-((float)iVar3 + -1.0));
  puVar1 = PTR_DAT_027139b0;
  *(float *)(param_8 + 0x1e0) = fVar7 * fVar6 * fVar9;
  iVar3 = *(int *)puVar1;
  if (iVar3 < 1) {
    plVar4 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar4,0);
    *(long **)PTR_DAT_027139b8 = plVar4;
    *(undefined4 *)puVar1 = 1;
  }
  else {
    plVar4 = *(long **)PTR_DAT_027139b8;
    *(int *)puVar1 = iVar3 + 1;
    if (1 < iVar3 + 1) goto LAB_0055f140;
  }
  if (plVar4 == (long *)0x0) {
    iVar3 = 0;
  }
  else {
    uVar5 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar4 + 0x20))(plVar4);
    FUN_005b9b10(uVar5,plVar4);
    iVar3 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_0055f140:
  *(int *)puVar1 = iVar3;
  FUN_005714c0(plVar4,0x10,3,4);
  FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
  FUN_00557fb0(param_8,param_9,param_14,param_15);
  uVar5 = FUN_005587d0(param_8);
  if (-1 < (int)uVar5) {
    *(undefined1 *)(param_8 + 0x41c) = 0;
    FUN_005594a0(param_8,0);
    uVar2 = FUN_00556fe0(param_8);
    if ((uVar2 & 1) != 0) {
      FUN_005594a0(param_8,1);
    }
    uVar5 = FUN_0055a8d0(param_8);
    if ((-1 < (int)uVar5) &&
       ((param_6 <= 0.0 || (param_13 & 1) != 0 || (uVar5 = FUN_0055c290(param_8), -1 < (int)uVar5)))
       ) {
      FUN_0055c930(param_8);
      FUN_0055d460(param_8);
      *(undefined4 *)(*(long *)(param_8 + 0x358) + (ulong)*(uint *)(param_8 + 0x2ec) * 4) =
           *(undefined4 *)(param_8 + 0x164);
      FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
      uVar5 = 0;
    }
  }
  return uVar5;
}


