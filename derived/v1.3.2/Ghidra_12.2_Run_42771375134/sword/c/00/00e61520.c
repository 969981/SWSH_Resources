/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e61520; name: FUN_00e61520
 */


void FUN_00e61520(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  float fVar2;
  
  FUN_00dc0b40(param_1,param_2,param_1 + 0xc08);
  FUN_00dc04c0(param_1,param_2,param_3 & 1,0,0);
  lVar1 = FUN_00dc0e00(param_1,param_2);
  if (lVar1 != 0) {
    fVar2 = *(float *)(param_1 + 0xc28);
    FUN_00794680();
    lVar1 = FUN_00794780(lVar1);
    if (lVar1 != 0) {
      *(ulong *)(lVar1 + 0x128) = (ulong)(uint)fVar2;
      *(ulong *)(lVar1 + 0x120) = CONCAT44(fVar2,fVar2);
      *(undefined8 *)(lVar1 + 0x138) = *(undefined8 *)(lVar1 + 0x138);
      *(ulong *)(lVar1 + 0x130) = CONCAT44(fVar2,fVar2);
      *(ulong *)(lVar1 + 0x148) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0xf8) >> 0x20) * 0.0,
                    fVar2 * (float)*(undefined8 *)(lVar1 + 0xf8));
      *(ulong *)(lVar1 + 0x140) =
           CONCAT44(fVar2 * (float)((ulong)*(undefined8 *)(lVar1 + 0xf0) >> 0x20),
                    fVar2 * (float)*(undefined8 *)(lVar1 + 0xf0));
    }
  }
  return;
}


