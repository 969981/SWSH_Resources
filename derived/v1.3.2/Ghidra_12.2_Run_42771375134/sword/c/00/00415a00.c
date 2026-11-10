/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00415a00; name: FUN_00415a00
 */


undefined8 * FUN_00415a00(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  
  uVar7 = (ulong)*(uint *)(param_1 + 0xf0);
  puVar6 = *(undefined8 **)(param_1 + 0xe8);
  if (0 < (int)*(uint *)(param_1 + 0xf0)) {
    do {
      uVar8 = uVar7 - 1 & 0xffffffff;
      puVar5 = puVar6 + uVar8 * 0xc;
      puVar9 = (uint *)*puVar5;
      if (*puVar9 == 0xffffffff) {
LAB_00415a98:
        puVar9 = (uint *)puVar6[uVar8 * 0xc + 2];
        if (*puVar9 == 0xffffffff) {
          return puVar5;
        }
        if (puVar9 != (uint *)0x0) {
          puVar2 = puVar9 + *(uint *)(puVar6 + uVar8 * 0xc + 3);
          puVar10 = puVar2;
          do {
            while( true ) {
              uVar8 = (long)puVar10 - (long)puVar9 >> 2;
              if ((long)uVar8 < 0) {
                uVar8 = uVar8 + 1;
              }
              puVar3 = (uint *)((long)puVar9 + (uVar8 & 0x7ffffffffffffffe) * 2);
              uVar4 = *puVar3;
              if (param_3 > uVar4 || uVar4 == param_3) break;
              puVar10 = puVar3 + -1;
              if (puVar10 < puVar9) goto LAB_00415b14;
            }
            if (param_3 <= uVar4) {
              if (puVar3 != puVar2) {
                return puVar5;
              }
              break;
            }
            puVar9 = puVar3 + 1;
          } while (puVar9 <= puVar10);
        }
      }
      else if (puVar9 != (uint *)0x0) {
        puVar2 = puVar9 + *(uint *)(puVar6 + uVar8 * 0xc + 1);
        puVar10 = puVar2;
        do {
          while( true ) {
            uVar11 = (long)puVar10 - (long)puVar9 >> 2;
            if ((long)uVar11 < 0) {
              uVar11 = uVar11 + 1;
            }
            puVar3 = (uint *)((long)puVar9 + (uVar11 & 0x7ffffffffffffffe) * 2);
            uVar4 = *puVar3;
            if (param_2 > uVar4 || uVar4 == param_2) break;
            puVar10 = puVar3 + -1;
            if (puVar10 < puVar9) goto LAB_00415b14;
          }
          if (param_2 <= uVar4) {
            if (puVar3 != puVar2) goto LAB_00415a98;
            break;
          }
          puVar9 = puVar3 + 1;
        } while (puVar9 <= puVar10);
      }
LAB_00415b14:
      bVar1 = 1 < (long)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar1);
  }
  return puVar6;
}


