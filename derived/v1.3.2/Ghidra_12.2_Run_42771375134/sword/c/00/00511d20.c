/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00511d20; name: FUN_00511d20
 */


void FUN_00511d20(float param_1,float param_2,uint param_3,int param_4,int param_5,int *param_6,
                 uint *param_7,float *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float __x;
  
  fVar6 = (float)(int)param_3;
  if (((1.0 < param_2) && (param_1 <= fVar6 * param_2)) &&
     (param_2 = param_1 / fVar6, param_2 <= 1.0)) {
    param_2 = 1.0;
  }
  __x = param_1 / param_2 + 1.0;
  if (__x <= DAT_01d4bcb8) {
    param_3 = 0;
    param_5 = 0;
    param_1 = 0.0;
  }
  else {
    fVar4 = logf(__x);
    fVar5 = logf(fVar6);
    fVar4 = fVar4 / fVar5;
    if (fVar4 <= 1.0) {
      fVar4 = 1.0;
    }
    iVar3 = (int)fVar4;
    fVar5 = powf(fVar6,(float)iVar3);
    uVar2 = (uint)((__x * fVar6) / fVar5);
    uVar1 = param_3;
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
    uVar2 = param_4 == 2 & uVar1;
    if (param_4 == 1) {
      uVar2 = ~uVar1 & 1;
    }
    if ((param_5 < 0 || iVar3 <= param_5) && (int)(uVar2 + uVar1) <= (int)param_3) {
      param_3 = uVar2 + uVar1;
    }
    if (param_5 < 0 || iVar3 <= param_5) {
      param_5 = iVar3;
    }
    fVar6 = powf(fVar6,(float)(param_5 + -1));
    param_1 = param_1 / (fVar6 * (float)(int)param_3 + -1.0);
  }
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = param_3;
  }
  if (param_8 != (float *)0x0) {
    *param_8 = param_1;
  }
  return;
}


