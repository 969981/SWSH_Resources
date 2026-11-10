/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009047d0; name: FUN_009047d0
 */


undefined8 FUN_009047d0(long param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  iVar3 = FUN_008f3790(*(undefined8 *)(param_1 + 0x58));
  if (iVar3 == 0) {
    uVar6 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    uVar6 = FUN_008df3c0(uVar6,1);
    uVar4 = FUN_009141c0();
    uVar5 = FUN_008f8c60(*(undefined8 *)(param_1 + 0x58),1);
    uVar1 = uVar4 & 0xff;
    if (uVar5 <= (uVar4 & 0xff)) {
      uVar1 = uVar5;
    }
    if (uVar1 != 0) {
      bVar2 = false;
      iVar3 = 0;
      uVar4 = 0;
      do {
        lVar7 = FUN_00914330(uVar6,uVar4);
        if ((lVar7 != 0) && (uVar8 = FUN_008e1600(), (uVar8 & 1) == 0)) {
          iVar3 = iVar3 + 1;
          uVar8 = FUN_008e2ec0(lVar7);
          if ((uVar8 & 1) != 0) {
            bVar2 = true;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
      if ((iVar3 == 1) && (bVar2)) {
        return 1;
      }
    }
  }
  return 0;
}


