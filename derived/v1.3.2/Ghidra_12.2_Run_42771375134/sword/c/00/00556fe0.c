/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00556fe0; name: FUN_00556fe0
 */


bool FUN_00556fe0(long param_1)

{
  long lVar1;
  float fVar2;
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
  if (*(long *)(param_1 + 0x338) == 0) {
    return false;
  }
  if (*(char *)(param_1 + 0x1ac) == '\0') {
    return false;
  }
  if (0.0 < *(float *)(param_1 + 0x138)) {
    lVar1 = *(long *)(param_1 + 0x170);
    FUN_00511040(&local_80,0);
    FUN_00511040(&local_60,0);
    if (((((local_80 == local_60) && (local_7c == local_5c)) && (local_78 == local_58)) &&
        ((local_74 == local_54 && (local_70 == local_50)))) &&
       ((local_6c == local_4c && ((local_68 == local_48 && (local_64 == local_44)))))) {
      fVar2 = *(float *)(lVar1 + 8) * DAT_01d4be14 + *(float *)(lVar1 + 0xc) * DAT_01d4be80;
      local_3c = *(float *)(lVar1 + 0x10) * DAT_01d4c3f8;
    }
    else {
      FUN_00511bb0(&local_60,&local_80,&local_78,&local_70,&local_68);
      fVar2 = local_5c * *(float *)(lVar1 + 8) + local_4c * *(float *)(lVar1 + 0xc);
      local_3c = local_3c * *(float *)(lVar1 + 0x10);
    }
    return 0.0 < fVar2 + local_3c;
  }
  return false;
}


