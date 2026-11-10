/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f49330; name: FUN_00f49330
 */


void FUN_00f49330(undefined8 param_1,long param_2,uint param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  
  puVar4 = PTR_DAT_02710848;
  if (0 < (int)param_3) {
    uVar7 = (0x20 - LZCOUNT(param_3)) -
            (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(param_3)) & 0x1f) & param_3
                    ) == 0);
    uVar8 = uVar7 >> 6;
    if ((uVar7 & 0x3f) != 0) {
      uVar8 = uVar8 + 1;
    }
    if (param_3 != 1) {
      uVar3 = 0;
      if (uVar8 != 0) {
        uVar3 = uVar7 / uVar8;
      }
      uVar9 = 0;
      do {
        if (param_3 == 1) {
          uVar11 = 0;
          if (uVar9 != 0) goto LAB_00f4941c;
        }
        else {
          puVar10 = *(ulong **)(*(long *)puVar4 + 0x98);
          if (param_3 == 0) {
            uVar1 = *puVar10;
            uVar11 = (ulong)(uint)((int)puVar10[1] + (int)uVar1);
            uVar12 = puVar10[1] ^ uVar1;
            *puVar10 = uVar12 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar12 << 0x10;
            puVar10[1] = uVar12 >> 0x1b | uVar12 << 0x25;
            uVar1 = uVar11;
          }
          else {
            uVar12 = *puVar10;
            uVar5 = puVar10[1];
            uVar1 = 0;
            if (uVar8 <= uVar7) {
              uVar1 = 0xffffffffffffffff >> (-uVar3 & 0x3f);
            }
            do {
              uVar6 = uVar12 ^ uVar5;
              uVar11 = uVar12 + uVar5;
              uVar5 = uVar6 >> 0x1b | uVar6 << 0x25;
              uVar12 = uVar6 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar6 << 0x10;
              uVar11 = uVar11 & uVar1;
            } while (param_3 <= (uint)uVar11);
            *puVar10 = uVar12;
            puVar10[1] = uVar5;
            uVar1 = uVar11 & 0xffffffff;
          }
          if (uVar9 != uVar1) {
LAB_00f4941c:
            uVar11 = -(uVar11 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar11 & 0xffffffff) << 1;
            uVar2 = *(undefined2 *)(param_2 + uVar9 * 2);
            *(undefined2 *)(param_2 + uVar9 * 2) = *(undefined2 *)(param_2 + uVar11);
            *(undefined2 *)(param_2 + uVar11) = uVar2;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != param_3);
    }
  }
  return;
}


