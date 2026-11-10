/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a81ba0; name: FUN_00a81ba0
 */


void FUN_00a81ba0(long param_1,undefined8 *param_2,uint param_3,undefined4 param_4,
                 undefined8 *param_5,uint param_6)

{
  ulong uVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_64 [4];
  undefined1 local_60 [8];
  float fStack_58;
  
  if ((param_3 == 0xff) ||
     (plVar2 = *(long **)(param_1 + (ulong)param_3 * 8 + 0x548), plVar2 == (long *)0x0)) {
    plVar2 = (long *)0x0;
  }
  else {
    (**(code **)(plVar2[9] + 0x10))();
    uVar1 = (**(code **)(*plVar2 + 400))(plVar2);
    if ((uVar1 & 1) != 0) {
      FUN_00ac74d0(plVar2,param_4,local_60);
      goto LAB_00a81c3c;
    }
  }
  FUN_00a67970(param_1,(ulong)param_3,local_60,auStack_64);
LAB_00a81c3c:
  fVar3 = local_60._0_4_ - (float)*param_2;
  fVar6 = local_60._4_4_ - (float)((ulong)*param_2 >> 0x20);
  fVar7 = fStack_58 - (float)param_2[1];
  fVar4 = (float)FUN_00a81e00(CONCAT44(fVar6,fVar3),fVar7);
  fVar8 = (float)((ulong)*param_5 >> 0x20);
  fVar5 = fVar4 + DAT_01d4c6ec;
  if (fVar4 - fVar8 <= DAT_01d4c284) {
    fVar5 = fVar4;
  }
  fVar4 = fVar5 + DAT_01d4bef8;
  if (DAT_01d4c4ec <= fVar5 - fVar8) {
    fVar4 = fVar5;
  }
  param_5[1] = param_5[1];
  *param_5 = CONCAT44(fVar4,(int)*param_5);
  if ((param_6 & 1) != 0) {
    fVar5 = fVar3 * fVar3 + fVar7 * fVar7;
    fVar3 = SQRT(fVar5);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar5);
    }
    fVar5 = (float)FUN_00a81e00(fVar6,fVar3);
    param_5[1] = param_5[1];
    *param_5 = CONCAT44((int)((ulong)*param_5 >> 0x20),-fVar5);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(plVar2[9] + 0x18))(plVar2 + 9);
  }
  return;
}


