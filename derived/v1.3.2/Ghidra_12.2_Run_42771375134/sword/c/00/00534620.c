/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00534620; name: FUN_00534620
 */


byte FUN_00534620(long param_1)

{
  bool bVar1;
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
  
  bVar1 = 0.0 < *(float *)(param_1 + 0x848);
  if (*(int *)(param_1 + 0xf80) == -1) {
    FUN_00511040(&local_80,0);
    FUN_00511040(&local_60,0);
    if (((((local_80 == local_60) && (local_7c == local_5c)) && (local_78 == local_58)) &&
        ((local_74 == local_54 && (local_70 == local_50)))) &&
       ((local_6c == local_4c && ((local_68 == local_48 && (local_64 == local_44)))))) {
      fVar2 = *(float *)(param_1 + 0xf84) * DAT_01d4be14 +
              *(float *)(param_1 + 0xf88) * DAT_01d4be80 +
              *(float *)(param_1 + 0xf8c) * DAT_01d4c3f8;
    }
    else {
      FUN_00511bb0(&local_60,&local_80,&local_78,&local_70,&local_68);
      fVar2 = local_5c * *(float *)(param_1 + 0xf84) + local_4c * *(float *)(param_1 + 0xf88) +
              local_3c * *(float *)(param_1 + 0xf8c);
    }
    if (fVar2 <= 0.0) {
      bVar1 = false;
    }
  }
  return bVar1 & *(int *)(param_1 + 0xf80) != 0;
}


