/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00558630; name: FUN_00558630
 */


float FUN_00558630(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  
  if (*(char *)(param_1 + 0x410) == '\0') {
    fVar2 = 1.0;
  }
  else {
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xbc));
    fVar2 = 1.0 / (fVar2 * DAT_01d4c5dc);
  }
  lVar1 = *(long *)(param_1 + 0x170);
  FUN_00511040(&local_90,0);
  FUN_00511040(&local_70,0);
  if (((((local_90 == local_70) && (local_8c == local_6c)) && (local_88 == local_68)) &&
      ((local_84 == local_64 && (local_80 == local_60)))) &&
     ((local_7c == local_5c && ((local_78 == local_58 && (local_74 == local_54)))))) {
    fVar3 = *(float *)(lVar1 + 0x4c) * DAT_01d4be14 + *(float *)(lVar1 + 0x50) * DAT_01d4be80;
    local_4c = *(float *)(lVar1 + 0x54) * DAT_01d4c3f8;
  }
  else {
    FUN_00511bb0(&local_70,&local_90,&local_88,&local_80,&local_78);
    fVar3 = local_6c * *(float *)(lVar1 + 0x4c) + local_5c * *(float *)(lVar1 + 0x50);
    local_4c = local_4c * *(float *)(lVar1 + 0x54);
  }
  fVar5 = *(float *)(&DAT_01cd4ff8 + (ulong)(*(char *)(param_1 + 0xfa) == '\0') * 4);
  fVar4 = (float)FUN_005584d0(param_1);
  return fVar4 * fVar2 * (fVar3 + local_4c) * fVar5;
}


