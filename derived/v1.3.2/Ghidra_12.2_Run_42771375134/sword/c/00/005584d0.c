/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005584d0; name: FUN_005584d0
 */


float FUN_005584d0(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
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
  
  lVar1 = *(long *)(param_1 + 0x170);
  fVar3 = *(float *)(param_1 + 0x134) * DAT_01d4bd54;
  FUN_00511040(&local_90,0);
  FUN_00511040(&local_70,0);
  if (((((local_90 == local_70) && (local_8c == local_6c)) && (local_88 == local_68)) &&
      ((local_84 == local_64 && (local_80 == local_60)))) &&
     ((local_7c == local_5c && ((local_78 == local_58 && (local_74 == local_54)))))) {
    fVar2 = *(float *)(lVar1 + 8) * DAT_01d4be14 + *(float *)(lVar1 + 0xc) * DAT_01d4be80;
    local_4c = *(float *)(lVar1 + 0x10) * DAT_01d4c3f8;
  }
  else {
    FUN_00511bb0(&local_70,&local_90,&local_88,&local_80,&local_78);
    fVar2 = local_6c * *(float *)(lVar1 + 8) + local_5c * *(float *)(lVar1 + 0xc);
    local_4c = local_4c * *(float *)(lVar1 + 0x10);
  }
  return fVar3 * (fVar2 + local_4c) * *(float *)(param_1 + 0x138);
}


