/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088fc70; name: FUN_0088fc70
 */


void FUN_0088fc70(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = param_1[1] - *param_1 >> 3;
  uVar11 = lVar10 + 1;
  if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  if ((ulong)(lVar4 >> 3) < 0xfffffffffffffff) {
    uVar5 = lVar4 >> 2;
    if (uVar11 <= uVar5) {
      uVar11 = uVar5;
    }
    if (uVar11 == 0) {
      lVar4 = 0;
      puVar6 = (undefined8 *)(lVar10 << 3);
      goto joined_r0x0088fcfc;
    }
  }
  else {
    uVar11 = 0x1fffffffffffffff;
  }
  lVar4 = (**(code **)(**(long **)PTR_DAT_027174a8 + 0x10))(*(long **)PTR_DAT_027174a8,uVar11 << 3);
  puVar6 = (undefined8 *)(lVar4 + lVar10 * 8);
joined_r0x0088fcfc:
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_2;
  }
  puVar3 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  puVar2 = puVar6 + 1;
  if (puVar7 != puVar3) {
    uVar5 = (long)puVar7 + (-8 - (long)puVar3);
    uVar8 = uVar5 >> 3;
    uVar1 = (int)uVar8 + 1;
    if ((uVar1 & 3) != 0) {
      lVar9 = -((ulong)uVar1 & 3);
      do {
        puVar7 = puVar7 + -1;
        lVar9 = lVar9 + 1;
        puVar6 = puVar6 + -1;
        *puVar6 = *puVar7;
      } while (lVar9 != 0);
    }
    if (0x17 < uVar5) {
      puVar6 = puVar6 + -2;
      do {
        puVar6[1] = puVar7[-1];
        *puVar6 = puVar7[-2];
        puVar6[-1] = puVar7[-3];
        puVar7 = puVar7 + -4;
        puVar6[-2] = *puVar7;
        puVar6 = puVar6 + -4;
      } while (puVar3 != puVar7);
    }
    puVar3 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)(lVar4 + (lVar10 + ~uVar8) * 8);
  }
  *param_1 = (long)puVar6;
  param_1[1] = (long)puVar2;
  param_1[2] = lVar4 + uVar11 * 8;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0088fdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)PTR_DAT_027174a8 + 0x18))();
  return;
}


