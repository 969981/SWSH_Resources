/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e9d80; name: FUN_004e9d80
 */


void FUN_004e9d80(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7,float *param_8,
                 undefined4 *param_9,undefined4 *param_10,float *param_11,uint param_12)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  undefined8 local_80;
  undefined4 local_78;
  
  FUN_004eb320(&local_80,param_2,param_1[7],param_5);
  param_7[3] = local_80;
  *(undefined4 *)(param_7 + 4) = local_78;
  *(undefined4 *)(param_7 + 1) = *(undefined4 *)(param_1 + 1);
  *param_7 = *param_1;
  *(undefined4 *)((long)param_7 + 0x14) = *(undefined4 *)((long)param_1 + 0x14);
  *(undefined8 *)((long)param_7 + 0xc) = *(undefined8 *)((long)param_1 + 0xc);
  *(undefined4 *)((long)param_7 + 0x24) = 0xffffffff;
  fVar6 = (float)FUN_004eb070(param_2,param_5,param_6);
  *param_8 = fVar6 * DAT_01d4be7c;
  *param_9 = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  *param_10 = 0;
  param_10[1] = uVar1;
  *param_11 = 0.0;
  lVar3 = FUN_004eb760(param_2,param_3);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x100) + -1;
    if (iVar2 < 0) {
      fVar6 = 0.0;
    }
    else {
      lVar4 = (long)iVar2;
      fVar6 = 0.0;
      puVar5 = (undefined8 *)(lVar3 + (long)iVar2 * 0x18 + 0x40);
      do {
        fVar7 = (float)FUN_004eb4f0(*(undefined8 *)(lVar3 + lVar4 * 8),param_5,*puVar5);
        if (fVar6 <= fVar7) {
          fVar6 = (float)FUN_004eb4f0(*(undefined8 *)(lVar3 + lVar4 * 8),param_5,*puVar5);
        }
        lVar4 = lVar4 + -1;
        puVar5 = puVar5 + -3;
      } while (-1 < (int)lVar4);
    }
    *param_11 = fVar6;
  }
  if ((param_12 >> 1 & 1) != 0) {
    fVar6 = (float)param_10[1];
    if ((float)param_10[1] <= *param_11 * DAT_01d4c6c0) {
      fVar6 = *param_11 * DAT_01d4c6c0;
    }
    param_10[1] = fVar6;
  }
  return;
}


