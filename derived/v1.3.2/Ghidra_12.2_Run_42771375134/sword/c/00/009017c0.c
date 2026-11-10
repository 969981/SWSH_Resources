/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009017c0; name: FUN_009017c0
 */


ulong FUN_009017c0(long param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  cVar2 = FUN_008f2b20(*(undefined8 *)(param_1 + 0x58));
  if (cVar2 != '\0') {
    return 0;
  }
  iVar3 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58));
  if (iVar3 == 0) {
    uVar4 = FUN_008f8d30(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6),0);
    uVar7 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    lVar8 = FUN_008df3d0(uVar7,uVar4,0);
    uVar6 = 0;
    if (lVar8 != 0) {
      uVar6 = FUN_008e12a0(lVar8,0xd);
      uVar5 = (uint)uVar6;
      if (uVar5 != 0) {
        if (*(ushort *)(param_1 + 0x290) <= uVar5) {
          return 0;
        }
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = ((*(ushort *)(param_1 + 0x290) - uVar5) * 100) / uVar5;
        }
        return (ulong)uVar1;
      }
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


