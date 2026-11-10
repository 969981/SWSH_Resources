/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00147760; name: FUN_00147760
 */


void FUN_00147760(long param_1,long param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  char cVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(long *)(param_1 + 0x1c0) = param_2;
  *(long *)(param_1 + 0x1c8) = param_3;
  if (*(uint *)(param_2 + 0x110) == 0) {
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    uVar2 = *(uint *)(param_2 + 0x120);
    lVar4 = param_2;
  }
  else {
    uVar6 = *(long *)(param_3 + 0x10) + 0x1fU & 0xfffffffffffffff0;
    lVar4 = (ulong)*(uint *)(param_2 + 0x110) * 0x10;
    *(undefined8 *)(uVar6 - 0x10) = *(undefined8 *)(param_3 + 0x18);
    *(uint *)(uVar6 - 8) = (uint)lVar4 & 0x7fffffff;
    *(ulong *)(param_3 + 0x10) = uVar6 + lVar4;
    *(undefined8 **)(param_3 + 0x18) = (undefined8 *)(uVar6 - 0x10);
    lVar4 = *(long *)(param_1 + 0x1c0);
    param_3 = *(long *)(param_1 + 0x1c8);
    *(ulong *)(param_1 + 0x1b0) = uVar6;
    uVar2 = *(uint *)(lVar4 + 0x120);
  }
  if (uVar2 == 0) {
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    cVar3 = *(char *)(lVar4 + 0x184);
  }
  else {
    uVar6 = *(long *)(param_3 + 0x10) + 0x1fU & 0xfffffffffffffff0;
    *(undefined8 *)(uVar6 - 0x10) = *(undefined8 *)(param_3 + 0x18);
    *(uint *)(uVar6 - 8) = (uint)((ulong)uVar2 * 0x30) & 0x7fffffff;
    *(ulong *)(param_3 + 0x10) = uVar6 + (ulong)uVar2 * 0x30;
    *(undefined8 **)(param_3 + 0x18) = (undefined8 *)(uVar6 - 0x10);
    lVar4 = *(long *)(param_1 + 0x1c0);
    *(ulong *)(param_1 + 0x1b8) = uVar6;
    cVar3 = *(char *)(lVar4 + 0x184);
  }
  if (cVar3 == '\0') {
    if (*(float *)(lVar4 + 0x188) <= 0.0) {
      return;
    }
  }
  lVar7 = *(long *)(param_1 + 0x1c8);
  if (*(uint *)(lVar4 + 0x110) == 0) {
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    uVar2 = *(uint *)(lVar4 + 0x120);
  }
  else {
    lVar4 = (ulong)*(uint *)(lVar4 + 0x110) * 0x10;
    uVar6 = *(long *)(lVar7 + 0x10) + 0x1fU & 0xfffffffffffffff0;
    *(undefined8 *)(uVar6 - 0x10) = *(undefined8 *)(lVar7 + 0x18);
    *(uint *)(uVar6 - 8) = (uint)lVar4 & 0x7fffffff;
    *(ulong *)(lVar7 + 0x10) = uVar6 + lVar4;
    *(undefined8 **)(lVar7 + 0x18) = (undefined8 *)(uVar6 - 0x10);
    lVar7 = *(long *)(param_1 + 0x1c8);
    *(ulong *)(param_1 + 0x1a0) = uVar6;
    uVar2 = *(uint *)(*(long *)(param_1 + 0x1c0) + 0x120);
  }
  if (uVar2 == 0) {
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    uVar2 = *(uint *)(param_2 + 0x110);
  }
  else {
    uVar6 = *(long *)(lVar7 + 0x10) + 0x1fU & 0xfffffffffffffff0;
    *(undefined8 *)(uVar6 - 0x10) = *(undefined8 *)(lVar7 + 0x18);
    *(uint *)(uVar6 - 8) = (uint)((ulong)uVar2 * 0x30) & 0x7fffffff;
    *(ulong *)(lVar7 + 0x10) = uVar6 + (ulong)uVar2 * 0x30;
    *(undefined8 **)(lVar7 + 0x18) = (undefined8 *)(uVar6 - 0x10);
    *(ulong *)(param_1 + 0x1a8) = uVar6;
    uVar2 = *(uint *)(param_2 + 0x110);
  }
  if (uVar2 != 0) {
    pauVar5 = *(undefined1 (**) [16])(param_2 + 0x100);
    puVar8 = *(undefined8 **)(param_1 + 0x1a0);
    uVar9 = uVar2;
    if ((uVar2 & 1) != 0) {
      auVar11._8_8_ = DAT_02736988;
      auVar11._0_8_ = DAT_02736980;
      auVar11 = NEON_fmax(auVar11,*pauVar5,4);
      puVar8[1] = auVar11._8_8_;
      *puVar8 = auVar11._0_8_;
      uVar9 = uVar2 - 1;
      pauVar5 = pauVar5 + 1;
      puVar8 = puVar8 + 2;
    }
    if (uVar2 != 1) {
      do {
        auVar10._8_8_ = DAT_02736988;
        auVar10._0_8_ = DAT_02736980;
        uVar9 = uVar9 - 2;
        auVar11 = NEON_fmax(auVar10,*pauVar5,4);
        puVar8[1] = auVar11._8_8_;
        *puVar8 = auVar11._0_8_;
        auVar12._8_8_ = DAT_02736988;
        auVar12._0_8_ = DAT_02736980;
        pauVar1 = pauVar5 + 1;
        pauVar5 = pauVar5 + 2;
        auVar11 = NEON_fmax(auVar12,*pauVar1,4);
        puVar8[3] = auVar11._8_8_;
        puVar8[2] = auVar11._0_8_;
        puVar8 = puVar8 + 4;
      } while (uVar9 != 0);
    }
    uVar6 = *(ulong *)(param_1 + 0x1a8);
  }
  FUN_00147950(uVar6,*(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(param_2 + 0x118),
               *(undefined4 *)(param_2 + 0x120));
  return;
}


