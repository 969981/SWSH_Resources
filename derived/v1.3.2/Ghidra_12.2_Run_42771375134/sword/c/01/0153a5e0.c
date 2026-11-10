/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0153a5e0; name: FUN_0153a5e0
 */


void FUN_0153a5e0(long param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  if ((param_2 < 0xf) && (param_3 < 0x400)) {
    lVar1 = param_1 + (long)(int)param_2 * 0x80 + (ulong)(param_3 >> 3);
    bVar3 = *(byte *)(lVar1 + 0x7e8);
    bVar4 = (byte)(1 << (ulong)(param_3 & 7));
    bVar2 = bVar3 & (bVar4 ^ 0xff);
    if ((param_4 & 1) == 0) {
      bVar2 = bVar3 | bVar4;
    }
    *(byte *)(lVar1 + 0x7e8) = bVar2;
  }
  return;
}


