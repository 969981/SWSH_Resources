/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00139570; name: FUN_00139570
 */


void FUN_00139570(uint param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  
  if (param_1 != 0) {
    uVar4 = (ulong)param_1;
    if (uVar4 - 1 < 3) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      puVar8 = (undefined4 *)(param_2 + 0x98);
      do {
        lVar7 = lVar7 + 4;
        puVar8[-0x1c] = 0;
        puVar8[-0xe] = 0;
        *puVar8 = 0;
        puVar8[0xe] = 0;
        puVar8 = puVar8 + 0x38;
      } while (uVar4 - (uVar4 & 3) != lVar7);
    }
    if ((param_1 & 3) != 0) {
      lVar5 = -(uVar4 & 3);
      puVar8 = (undefined4 *)(param_2 + lVar7 * 0x38 + 0x28);
      do {
        lVar5 = lVar5 + 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 0xe;
      } while (lVar5 != 0);
    }
    if (param_1 != 0) {
      puVar6 = (uint *)(param_2 + 0x3c);
      uVar9 = 0;
      do {
        param_1 = param_1 - 1;
        uVar1 = uVar9 + 1;
        if (*(long *)(param_2 + uVar9 * 0x38 + 0x20) != 0 && uVar1 < uVar4) {
          lVar7 = param_2 + uVar9 * 0x38;
          puVar3 = puVar6;
          uVar2 = param_1;
          do {
            if ((((*(long *)(puVar3 + 7) != 0) && (*puVar3 < *(uint *)(lVar7 + 0x10))) &&
                (*(uint *)(lVar7 + 4) < puVar3[3])) &&
               (((puVar3[1] < *(uint *)(lVar7 + 0x14) && (*(uint *)(lVar7 + 8) < puVar3[4])) &&
                ((puVar3[2] < *(uint *)(lVar7 + 0x18) && (*(uint *)(lVar7 + 0xc) < puVar3[5])))))) {
              *(undefined4 *)(lVar7 + 0x28) = 1;
              puVar3[9] = 1;
            }
            puVar3 = puVar3 + 0xe;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        puVar6 = puVar6 + 0xe;
        uVar9 = uVar1;
      } while (uVar1 != uVar4);
    }
  }
  return;
}


