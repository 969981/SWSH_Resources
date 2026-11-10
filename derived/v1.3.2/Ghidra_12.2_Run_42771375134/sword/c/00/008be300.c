/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008be300; name: FUN_008be300
 */


void FUN_008be300(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x90) + 0xa8);
  plVar8 = *(long **)(lVar11 + 0x10);
  uVar9 = (**(code **)(*plVar8 + 0x50))(plVar8,*(undefined4 *)(lVar11 + 0x1c));
  FUN_008a6e20(*(undefined8 *)(param_1 + 0x90),0x34f,uVar9,0);
  uVar7 = FUN_008783c0(uVar9);
  uVar10 = 2;
  if ((uVar7 & 0xffff) != 4) {
    uVar10 = uVar7;
  }
  uVar7 = uVar10 & 0xffff;
  uVar1 = 0;
  if (uVar7 != 1) {
    uVar1 = (uint)(uVar7 == 2);
  }
  bVar5 = (uVar10 & 0xffff) == 0;
  uVar2 = 0;
  if (!bVar5) {
    uVar2 = uVar1;
  }
  bVar6 = uVar7 == 3;
  uVar3 = uVar2;
  if (bVar6) {
    uVar3 = 1;
  }
  uVar12 = (uint)bVar5;
  uVar4 = uVar12;
  if (uVar7 != 0) {
    uVar12 = (uint)(bVar6 || (uVar10 & 0xffff) == 0);
    uVar4 = (uint)bVar6;
  }
  uVar13 = (ulong)uVar12;
  if (uVar7 != 0) {
    uVar2 = uVar3;
  }
  if (uVar7 == 1 || uVar7 == 2) {
    uVar13 = 0;
    uVar4 = 1;
    uVar2 = uVar1;
  }
  if (uVar4 != 0) {
    bVar5 = *(int *)(param_1 + 0xac) == 0;
    if (!bVar5) {
      uVar2 = uVar2 ^ 1;
    }
    uVar10 = (uint)*(ushort *)(&UNK_01cd5130 + (uVar13 ^ bVar5) * 2 + (ulong)uVar2 * 4);
  }
  FUN_0087df30(uVar9,uVar10,0);
  lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f8);
  if (lVar11 != 0) {
    plVar8 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  FUN_015351d0(lVar11,uVar9,0);
  return;
}


