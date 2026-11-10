/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059abd0; name: FUN_0059abd0
 */


void FUN_0059abd0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  FUN_0059ed30();
  *(undefined8 *)(param_1 + 0x2c) = *param_2;
  uVar11 = param_2[1];
  uVar2 = param_2[2];
  uVar9 = param_2[3];
  *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 4);
  uVar3 = *(uint *)(param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x44) = uVar9;
  *(undefined8 *)(param_1 + 0x34) = uVar11;
  *(undefined8 *)(param_1 + 0x3c) = uVar2;
  uVar4 = (uVar3 & 0x100) << 0x14;
  if ((uVar3 & 0x4000) != 0) {
    uVar4 = (uVar3 >> 8 & 1) << 0x1c | 0x3200000;
  }
  uVar4 = uVar4 | uVar3 >> 8 & 0x13000;
  if ((uVar3 & 0x2000000) != 0) {
    uVar4 = uVar4 | 0x240000;
  }
  *(uint *)(param_1 + 0x50) = uVar4 | uVar3 >> 4 & 0x1000000;
  if (*(int *)(param_1 + 0x48) == 0) {
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x38);
  }
  FUN_0059ade0(param_1,0,0,0,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar4 = *(uint *)(PTR_DAT_02713a88 + 0x10);
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    if (0 < (int)uVar4) {
      lVar5 = 0;
      lVar7 = 0;
      do {
        lVar7 = lVar7 + 1;
        *(undefined4 *)(*(long *)(param_1 + 0x68) + lVar5) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(*(long *)(param_1 + 0x68) + lVar5 + 4) = *(undefined4 *)(param_1 + 0x58);
        *(undefined4 *)(*(long *)(param_1 + 0x68) + lVar5 + 8) = *(undefined4 *)(param_1 + 0x5c);
        lVar1 = *(long *)(param_1 + 0x68) + lVar5;
        lVar5 = lVar5 + 0x10;
        *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(param_1 + 0x60);
      } while (lVar7 < (int)uVar4);
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0x3f80000000000000;
  lVar7 = *(long *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x108);
  if (lVar7 != 0) {
    uVar11 = *(undefined8 *)PTR_PTR_02713988;
    uVar6 = *(ulong *)(lVar7 + 8);
    if (uVar6 != 0) {
      uVar8 = uVar6 + *(long *)(uVar6 - 8) * 0x20;
      do {
        uVar8 = uVar8 - 0x20;
      } while (uVar6 <= uVar8);
      FUN_005b9b10(uVar11);
      *(undefined8 *)(lVar7 + 8) = 0;
    }
    FUN_005b9b10(uVar11,lVar7);
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  lVar7 = *(long *)(param_1 + 0xf8);
  if (lVar7 != 0) {
    uVar11 = *(undefined8 *)PTR_PTR_02713988;
    uVar6 = *(ulong *)(lVar7 + 8);
    if (uVar6 != 0) {
      uVar8 = uVar6 + *(long *)(uVar6 - 8) * 0x20;
      do {
        uVar8 = uVar8 - 0x20;
      } while (uVar6 <= uVar8);
      FUN_005b9b10(uVar11);
      *(undefined8 *)(lVar7 + 8) = 0;
    }
    FUN_005b9b10(uVar11,lVar7);
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  FUN_0059ece0(param_1,uVar10);
  return;
}


