/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e613e0; name: FUN_00e613e0
 */


void FUN_00e613e0(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  long lVar4;
  float local_38;
  float local_34;
  long local_30 [2];
  
  lVar4 = FUN_00e612f0();
  *(long *)(param_1 + 0xb88) = lVar4;
  if (lVar4 != -0x340d631b7bddd9bb) {
    lVar4 = param_1 + 0xb88;
    FUN_00dc04c0(param_1,lVar4,0,0,0);
    if ((*(int *)(param_1 + 0xa90) != 0) && (*(int *)(param_1 + 0xa90) != 3)) {
      local_30[0] = (ulong)(uint)(30.0 - *(float *)(param_1 + 0x9a0)) << 0x20;
      local_30[1] = 0;
      FUN_00dc0bf0(param_1,lVar4,local_30);
    }
    lVar4 = FUN_00dc0e00(param_1,lVar4);
    if (lVar4 != 0) {
      fVar3 = *(float *)(param_1 + 0xc28);
      local_34 = 1.0;
      local_30[0] = CONCAT44(local_30[0]._4_4_,fVar3);
      local_38 = 1.6;
      pfVar1 = &local_38;
      if (fVar3 <= DAT_01d4c0e4) {
        pfVar1 = (float *)local_30;
      }
      pfVar2 = &local_34;
      if (1.0 <= fVar3) {
        pfVar2 = pfVar1;
      }
      fVar3 = *pfVar2;
      local_30[0] = CONCAT44(local_30[0]._4_4_,fVar3);
      FUN_00794680();
      lVar4 = FUN_00794780(lVar4);
      if (lVar4 != 0) {
        *(ulong *)(lVar4 + 0x128) = (ulong)(uint)fVar3;
        *(ulong *)(lVar4 + 0x120) = CONCAT44(fVar3,fVar3);
        *(undefined8 *)(lVar4 + 0x138) = *(undefined8 *)(lVar4 + 0x138);
        *(ulong *)(lVar4 + 0x130) = CONCAT44(fVar3,fVar3);
        *(ulong *)(lVar4 + 0x148) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0xf8) >> 0x20) * 0.0,
                      fVar3 * (float)*(undefined8 *)(lVar4 + 0xf8));
        *(ulong *)(lVar4 + 0x140) =
             CONCAT44(fVar3 * (float)((ulong)*(undefined8 *)(lVar4 + 0xf0) >> 0x20),
                      fVar3 * (float)*(undefined8 *)(lVar4 + 0xf0));
      }
    }
  }
  return;
}


