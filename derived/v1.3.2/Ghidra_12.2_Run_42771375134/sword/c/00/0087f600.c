/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087f600; name: FUN_0087f600
 */


ulong FUN_0087f600(ulong param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = 0;
  if (((int)param_1 < 899) && (1 < (int)param_1 - 899U)) {
    param_2 = param_2 & 0xffff;
    if (param_2 == 0) {
      return param_1;
    }
    if ((*(byte *)(*(long *)PTR_DAT_027173e0 + (param_1 & 0xffffffff) * 0xb0 + 0x21) >> 6 & 1) == 0)
    {
      return param_1;
    }
    lVar4 = *(long *)PTR_DAT_027173e0 + (param_1 & 0xffffffff) * 0xb0;
    uVar3 = param_1 & 0xffffffff;
    uVar5 = (uint)*(ushort *)(lVar4 + 0x1e);
    bVar1 = false;
    bVar2 = false;
    if (uVar5 != 0) {
      uVar6 = (uint)*(byte *)(lVar4 + 0x20);
      bVar2 = param_2 <= uVar6;
      bVar1 = uVar6 == param_2;
    }
    if (bVar2 && !bVar1) {
      uVar3 = (ulong)((param_2 + uVar5) - 1);
    }
  }
  return uVar3;
}


