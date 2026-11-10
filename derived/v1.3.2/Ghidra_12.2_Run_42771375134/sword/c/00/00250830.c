/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00250830; name: FUN_00250830
 */


uint FUN_00250830(float param_1,float param_2,float *param_3)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  float local_28;
  float fStack_24;
  
  uVar3 = 0xffffffff;
  if ((0.0 <= *param_3 * param_1) && (0.0 <= param_3[2] * param_2)) {
    lVar4 = *(long *)(param_3 + 4);
    if (*(float *)(lVar4 + 0x40) + 1.0 <= *param_3 * param_1) {
      return 0xffffffff;
    }
    if (*(float *)(lVar4 + 0x44) + 1.0 <= param_3[2] * param_2) {
      return 0xffffffff;
    }
    uVar3 = FUN_00250220(lVar4,&fStack_24,&local_28);
    bVar1 = fStack_24 < local_28;
    if (-1 < *(char *)(*(long *)(lVar4 + 0x50) + (ulong)uVar3 * 4 + 2)) {
      bVar1 = 1.0 < fStack_24 + local_28;
    }
    lVar4 = *(long *)(*(long *)(param_3 + 4) + 0x50) + (ulong)(uVar3 & 0x7fffffff) * 4;
    uVar3 = (uint)bVar1 | uVar3 << 1;
    pbVar2 = (byte *)(lVar4 + 3);
    if (bVar1 == 0) {
      pbVar2 = (byte *)(lVar4 + 2);
    }
    if (((*pbVar2 ^ 0xff) & 0x7f) == 0) {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}


