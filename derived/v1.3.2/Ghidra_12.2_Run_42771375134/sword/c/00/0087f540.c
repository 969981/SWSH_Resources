/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087f540; name: FUN_0087f540
 */


void FUN_0087f540(long param_1,uint param_2,ushort param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = 0;
  if (((((int)param_2 < 899) && (1 < param_2 - 899)) &&
      (uVar1 = (uint)param_3, uVar4 = param_2, param_3 != 0)) &&
     ((*(byte *)(*(long *)PTR_DAT_027173e0 + (ulong)param_2 * 0xb0 + 0x21) >> 6 & 1) != 0)) {
    lVar5 = *(long *)PTR_DAT_027173e0 + (ulong)param_2 * 0xb0;
    uVar6 = (uint)*(ushort *)(lVar5 + 0x1e);
    bVar2 = false;
    bVar3 = false;
    if (uVar6 != 0) {
      uVar7 = (uint)*(byte *)(lVar5 + 0x20);
      bVar3 = uVar1 <= uVar7;
      bVar2 = uVar7 == uVar1;
    }
    if (bVar3 && !bVar2) {
      uVar4 = (uVar1 + uVar6) - 1;
    }
  }
  memcpy((void *)(param_1 + 0x10),(void *)(*(long *)PTR_DAT_027173e0 + (ulong)uVar4 * 0xb0),0xb0);
  *(uint *)(param_1 + 8) = param_2;
  *(ushort *)(param_1 + 0xc) = param_3;
  return;
}


