/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b1380; name: FUN_014b1380
 */


ulong FUN_014b1380(long *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  lVar10 = *param_1;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar11 == 0) {
    uVar6 = FUN_01524c50(0,lVar10);
  }
  else {
    plVar12 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    uVar6 = FUN_01524c50(lVar11,lVar10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  bVar1 = (uVar6 & 1) == 0;
  uVar5 = 10;
  if (bVar1) {
    uVar5 = 0xe;
  }
  uVar7 = 0xb;
  if (bVar1) {
    uVar7 = 0xf;
  }
  uVar8 = 0xc;
  if (bVar1) {
    uVar8 = 0x10;
  }
  uVar9 = 0xd;
  if (bVar1) {
    uVar9 = 0x11;
  }
  uVar2 = FUN_00878e20(*param_1,uVar5);
  uVar3 = FUN_00878e20(*param_1,uVar7);
  iVar4 = FUN_00878e20(*param_1,uVar8);
  uVar5 = FUN_00878e20(*param_1,uVar9);
  return CONCAT44(uVar5,iVar4 << 0x10) & 0xffffffffff | (ulong)((uVar3 & 0xff) << 8) |
         (ulong)(uVar2 & 0xff);
}


