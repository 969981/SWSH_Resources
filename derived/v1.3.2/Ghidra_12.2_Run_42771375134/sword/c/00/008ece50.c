/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ece50; name: FUN_008ece50
 */


ulong FUN_008ece50(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  
  uVar3 = FUN_008df3c0(param_2,0);
  bVar1 = FUN_009141c0();
  uVar2 = 0;
  if (bVar1 != 0) {
    uVar8 = 0;
    uVar6 = uVar2;
    do {
      uVar4 = FUN_00914330(uVar3,uVar8);
      uVar2 = FUN_008e12a0(uVar4,0x11);
      uVar8 = uVar8 + 1;
      if (uVar2 <= uVar6) {
        uVar2 = uVar6;
      }
      uVar6 = uVar2;
    } while (bVar1 != uVar8);
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  if (lVar7 == 0) {
    uVar5 = FUN_01539060(0,uVar2);
    return uVar5;
  }
  plVar9 = (long *)(lVar7 + 0x48);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  uVar5 = FUN_01539060(lVar7,uVar2);
  (**(code **)(*plVar9 + 0x18))(plVar9);
  return uVar5 & 0xffffffff;
}


