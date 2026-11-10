/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00556ca0; name: FUN_00556ca0
 */


bool FUN_00556ca0(long param_1)

{
  long lVar1;
  float fVar2;
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
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  
  if (*(long *)(param_1 + 0x328) == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x330) == 0) {
    return false;
  }
  if (*(float *)(param_1 + 0x138) <= 0.0) {
    return false;
  }
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(int *)(lVar1 + 0x88) < 1) {
    return false;
  }
  if (*(float *)(lVar1 + 0x90) <= 0.0) {
    return false;
  }
  if (*(int *)(param_1 + 0xf0) < 1) {
    return false;
  }
  FUN_00511040(&local_80,0);
  FUN_00511040(&local_60,0);
  if (((((local_80 == local_60) && (local_7c == local_5c)) && (local_78 == local_58)) &&
      ((local_74 == local_54 && (local_70 == local_50)))) &&
     ((local_6c == local_4c && ((local_68 == local_48 && (local_64 == local_44)))))) {
    fVar2 = *(float *)(lVar1 + 8) * DAT_01d4be14 + *(float *)(lVar1 + 0xc) * DAT_01d4be80 +
            *(float *)(lVar1 + 0x10) * DAT_01d4c3f8;
  }
  else {
    FUN_00511bb0(&local_60,&local_80,&local_78,&local_70,&local_68);
    fVar2 = local_5c * *(float *)(lVar1 + 8) + local_4c * *(float *)(lVar1 + 0xc) +
            local_3c * *(float *)(lVar1 + 0x10);
  }
  if (0.0 < fVar2) {
    lVar1 = *(long *)(param_1 + 0x170);
    FUN_00511040(&local_a0,0);
    FUN_00511040(&local_60,0);
    if ((((local_a0 == local_60) && (local_9c == local_5c)) && (local_98 == local_58)) &&
       (((local_94 == local_54 && (local_90 == local_50)) &&
        ((local_8c == local_4c && ((local_88 == local_48 && (local_84 == local_44)))))))) {
      fVar2 = *(float *)(lVar1 + 0x4c) * DAT_01d4be14 + *(float *)(lVar1 + 0x50) * DAT_01d4be80;
      local_3c = *(float *)(lVar1 + 0x54) * DAT_01d4c3f8;
    }
    else {
      FUN_00511bb0(&local_60,&local_a0,&local_98,&local_90,&local_88);
      fVar2 = local_5c * *(float *)(lVar1 + 0x4c) + local_4c * *(float *)(lVar1 + 0x50);
      local_3c = local_3c * *(float *)(lVar1 + 0x54);
    }
    return 0.0 < fVar2 + local_3c;
  }
  return false;
}


