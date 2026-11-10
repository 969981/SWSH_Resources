/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012530c0; name: FUN_012530c0
 */


void FUN_012530c0(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = param_1[1] - *param_1 >> 2;
  uVar11 = lVar10 + 1;
  if (uVar11 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  if ((ulong)(lVar3 >> 2) < 0x1fffffffffffffff) {
    uVar4 = lVar3 >> 1;
    if (uVar11 <= uVar4) {
      uVar11 = uVar4;
    }
    if (uVar11 == 0) {
      lVar3 = 0;
      goto LAB_01253130;
    }
  }
  else {
    uVar11 = 0x3fffffffffffffff;
  }
  lVar3 = FUN_017cd750(uVar11 << 2);
LAB_01253130:
  puVar7 = (undefined4 *)(lVar3 + lVar10 * 4);
  puVar5 = puVar7 + 1;
  *puVar7 = *param_2;
  puVar2 = (undefined4 *)*param_1;
  puVar6 = (undefined4 *)param_1[1];
  if (puVar6 != puVar2) {
    uVar4 = (long)puVar6 + (-4 - (long)puVar2);
    uVar8 = uVar4 >> 2;
    uVar1 = (int)uVar8 + 1;
    if ((uVar1 & 3) != 0) {
      lVar9 = -((ulong)uVar1 & 3);
      do {
        puVar6 = puVar6 + -1;
        lVar9 = lVar9 + 1;
        puVar7 = puVar7 + -1;
        *puVar7 = *puVar6;
      } while (lVar9 != 0);
    }
    if (0xb < uVar4) {
      puVar7 = puVar7 + -2;
      do {
        puVar7[1] = puVar6[-1];
        *puVar7 = puVar6[-2];
        puVar7[-1] = puVar6[-3];
        puVar6 = puVar6 + -4;
        puVar7[-2] = *puVar6;
        puVar7 = puVar7 + -4;
      } while (puVar2 != puVar6);
    }
    puVar2 = (undefined4 *)*param_1;
    puVar7 = (undefined4 *)(lVar3 + (lVar10 + ~uVar8) * 4);
  }
  *param_1 = (long)puVar7;
  param_1[1] = (long)puVar5;
  param_1[2] = lVar3 + uVar11 * 4;
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  FUN_017cd7a0();
  return;
}


