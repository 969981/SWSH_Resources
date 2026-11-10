/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00558300; name: FUN_00558300
 */


float FUN_00558300(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float __x;
  float fVar7;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  
  lVar2 = *(long *)(param_1 + 0x170);
  FUN_00511040(&local_a0,0);
  FUN_00511040(&local_80,0);
  if (((((local_a0 == local_80) && (local_9c == local_7c)) && (local_98 == local_78)) &&
      ((local_94 == local_74 && (local_90 == local_70)))) &&
     ((local_8c == local_6c && ((local_88 == local_68 && (local_84 == local_64)))))) {
    fVar3 = *(float *)(lVar2 + 0x18) * DAT_01d4be14 + *(float *)(lVar2 + 0x1c) * DAT_01d4be80;
    local_5c = *(float *)(lVar2 + 0x20) * DAT_01d4c3f8;
  }
  else {
    FUN_00511bb0(&local_80,&local_a0,&local_98,&local_90,&local_88);
    fVar3 = local_7c * *(float *)(lVar2 + 0x18) + local_6c * *(float *)(lVar2 + 0x1c);
    local_5c = local_5c * *(float *)(lVar2 + 0x20);
  }
  fVar4 = (float)FUN_005584d0(param_1);
  __x = *(float *)(param_1 + 0x1e4);
  fVar4 = (fVar3 + local_5c) * fVar4;
  if (__x != 1.0) {
    iVar1 = *(int *)(param_1 + 0x3d8) + -2;
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    fVar7 = (float)iVar1;
    fVar3 = powf(__x,fVar7 * 0.5);
    fVar5 = SQRT(__x);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(__x);
    }
    fVar6 = DAT_01d4bbe0;
    if (__x != DAT_01d4bbdc) {
      fVar6 = ABS(fVar5);
    }
    fVar4 = fVar4 * (fVar7 / ((fVar3 + fVar7) - fVar6));
  }
  return fVar4;
}


