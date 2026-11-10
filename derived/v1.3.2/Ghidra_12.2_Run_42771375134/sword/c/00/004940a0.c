/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004940a0; name: FUN_004940a0
 */


long * FUN_004940a0(long *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  short sVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  double dVar12;
  
  plVar10 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
  uVar1 = *(uint *)(plVar10 + 1);
  uVar7 = *(uint *)((long)plVar10 + 0xc);
  if (uVar7 <= uVar1) {
    uVar5 = FUN_0047a9a0(plVar10,2);
    if ((uVar5 & 1) == 0) {
      return (long *)0x0;
    }
    uVar7 = *(uint *)((long)plVar10 + 0xc);
  }
  if (uVar7 <= uVar1) {
    return (long *)0x0;
  }
  uVar1 = *(uint *)(plVar10 + 1);
  lVar11 = *plVar10;
  *(uint *)(plVar10 + 1) = uVar1 + 1;
  plVar10 = (long *)(lVar11 + (ulong)uVar1 * 0x28);
  if (plVar10 == (long *)0x0) {
    return (long *)0x0;
  }
  FUN_0045b3c0(plVar10);
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  plVar6 = (long *)*plVar10;
  *plVar10 = (long)param_1;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  lVar11 = lVar11 + (ulong)uVar1 * 0x28;
  sVar3 = *(short *)((long)param_1 + 0xf4);
  bVar2 = *(byte *)(lVar11 + 0x12);
  *(byte *)(lVar11 + 0x12) = bVar2 & 0xfe | sVar3 != 1;
  sVar4 = *(short *)((long)param_1 + 0xf4);
  *(byte *)(lVar11 + 0x12) = bVar2 & 0xfc | sVar3 != 1 | (sVar4 == 0) << 1;
  *(short *)(lVar11 + 0x10) = 1;
  if (sVar4 == 0) {
    return plVar10;
  }
  if (sVar3 == 1) {
    return plVar10;
  }
  sVar3 = *(short *)((long)param_1 + 0xf6);
  sVar8 = (short)param_1[0x1f] - sVar3;
  sVar4 = *(short *)((long)param_1 + 0xf4);
  if (sVar8 == 0) {
    sVar8 = 0;
  }
  else {
    lVar9 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
    dVar12 = (double)(int)sVar8 * DAT_01cd53a0;
    *(long *)PTR_DAT_02712b80 = lVar9;
    sVar8 = (short)(int)((double)(uint)((ulong)lVar9 >> 0x21) * dVar12 + 0.5);
  }
  sVar8 = sVar3 + sVar4 + sVar8;
  if (sVar8 < 2) {
    sVar8 = 1;
  }
  *(short *)(lVar11 + 0x10) = sVar8;
  return plVar10;
}


