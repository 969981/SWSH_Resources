/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fb710; name: FUN_003fb710
 */


void FUN_003fb710(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  ushort uVar10;
  ushort uVar11;
  undefined2 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined1 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  int local_6c;
  
  lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x48);
  uVar6 = *(uint *)(param_1 + 0x40);
  plVar13 = (long *)FUN_0011d640(*(undefined8 *)(lVar18 + 0x720),param_2,uVar6 >> 0xb & 1);
  lVar4 = *(long *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x30);
  cVar8 = *(char *)(*(long *)(*(long *)(lVar4 + 0x10) + 0x50) + 0xd);
  cVar9 = *(char *)(*(long *)(*(long *)(lVar5 + 0x10) + 0x50) + 0xd);
  uVar7 = *(uint *)(param_1 + 0x40);
  if ((uVar7 & 0x18000) == 0) {
    local_6c = 0;
  }
  else {
    local_6c = (uVar7 >> 0xe & 2) - 1;
  }
  uVar2 = uVar6 & 2;
  lVar14 = FUN_003fc7b0(lVar4);
  lVar15 = FUN_003fc7b0(lVar5);
  if (lVar15 == 0) {
    uVar16 = 0;
    bVar3 = 0;
  }
  else {
    uVar16 = *(undefined1 *)(*(long *)(lVar15 + 0x50) + 0xf);
    bVar3 = *(byte *)(*(long *)(lVar15 + 0x50) + 0x2c) & 1;
  }
  uVar12 = FUN_003e9320(lVar18,*(undefined1 *)(*(long *)(lVar14 + 0x50) + 0xf),uVar16);
  lVar19 = *(long *)(lVar4 + 0x40);
  lVar17 = *(long *)(lVar5 + 0x40);
  lVar1 = lVar15 + 0x60;
  if (lVar15 == 0) {
    lVar1 = 0;
  }
  *plVar13 = lVar14 + 0x60;
  plVar13[1] = lVar1;
  plVar13[3] = param_1;
  plVar13[6] = lVar19 + 0x20;
  plVar13[7] = lVar17 + 0x20;
  lVar14 = FUN_003fcf00(lVar4);
  plVar13[4] = lVar14;
  lVar14 = FUN_003fcf00(lVar5);
  uVar11 = (ushort)(cVar8 == '\x04') << 3 | 0x10;
  if (cVar9 != '\x04') {
    uVar11 = (ushort)(cVar8 == '\x04') << 3;
  }
  plVar13[5] = lVar14;
  if (cVar8 != '\0') {
    uVar11 = uVar11 | 0x20;
  }
  fVar20 = *(float *)(*(long *)(lVar4 + 0x40) + 0xa0);
  fVar21 = *(float *)(*(long *)(lVar5 + 0x40) + 0xa0);
  *(char *)((long)plVar13 + 0x54) = (char)uVar12;
  *(char *)((long)plVar13 + 0x55) = (char)((ushort)uVar12 >> 8);
  *(float *)((long)plVar13 + 0x5c) = fVar20 + fVar21;
  *(char *)((long)plVar13 + 0x56) = (char)*(undefined4 *)(lVar19 + 0x48);
  if (cVar9 != '\0') {
    uVar11 = uVar11 | 0x40;
  }
  uVar10 = uVar11 | 2;
  if ((uVar7 & 0x40000) != 0 || uVar2 != 0) {
    uVar10 = uVar11;
  }
  uVar10 = uVar10 | (ushort)(uVar6 >> 1) & 0x200;
  uVar11 = uVar10 | 0x400;
  if (bVar3 == 0) {
    uVar11 = uVar10;
  }
  uVar10 = uVar11 | 0x800;
  if ((uVar7 & 0x40000) == 0) {
    uVar10 = uVar11;
  }
  uVar11 = uVar10 | 0x1000;
  if ((uVar6 & 0x800) == 0) {
    uVar11 = uVar10;
  }
  uVar11 = uVar11 | ((uVar7 & 0x20000) != 0 || uVar2 != 0);
  uVar10 = uVar11 | 0x100;
  if ((uVar6 & 0x1c0) == 0 || (uVar7 & 0x40000) != 0) {
    uVar10 = uVar11;
  }
  *(char *)((long)plVar13 + 0x57) = (char)*(undefined4 *)(lVar17 + 0x48);
  *(uint *)(plVar13 + 0xc) = *(uint *)(lVar4 + 0x18) & 0x1fffffff;
  uVar7 = *(uint *)(lVar5 + 0x18);
  *(ushort *)(plVar13 + 10) = uVar10 | (ushort)(uVar2 << 6);
  *(uint *)((long)plVar13 + 100) = uVar7 & 0x1fffffff;
  *(uint *)(plVar13 + 2) = uVar6 >> 1 & 1 | (uVar6 & 0x800) >> 10;
  *(undefined4 *)((long)plVar13 + 0x6c) = 0xffffffff;
  *(long **)(param_1 + 0x58) = plVar13;
  bVar3 = 2;
  if (local_6c < 1) {
    bVar3 = (byte)((uint)local_6c >> 0x1f);
  }
  *(byte *)((long)plVar13 + 0x53) = bVar3;
  if (param_2 == 0) {
    FUN_001144f0(*(undefined8 *)(lVar18 + 0x748),*(undefined4 *)(param_1 + 0x60),plVar13);
    plVar13 = *(long **)(*(long *)(lVar18 + 0x720) + 0x6e8);
                    /* WARNING: Could not recover jumptable at 0x003fba18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar13 + 0x38))(plVar13,*(undefined8 *)(param_1 + 0x58),local_6c,0);
    return;
  }
  return;
}


