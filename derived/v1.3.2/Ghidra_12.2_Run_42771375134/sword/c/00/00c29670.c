/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c29670; name: FUN_00c29670
 */


void FUN_00c29670(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  
  puVar6 = (undefined1 *)*param_2;
  uVar8 = (long)*param_3 - (long)puVar6;
  uVar2 = 0;
  if (uVar8 != 0) {
    uVar2 = uVar8;
  }
  uVar8 = param_1[2];
  puVar4 = (undefined1 *)*param_1;
  if (uVar8 - (long)puVar4 < uVar2) {
    if (puVar4 != (undefined1 *)0x0) {
      param_1[1] = puVar4;
      FUN_017cd7a0();
      uVar8 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= uVar8 << 1) {
      uVar2 = uVar8 << 1;
    }
    uVar1 = 0x7fffffffffffffff;
    if (uVar8 < 0x3fffffffffffffff) {
      uVar1 = uVar2;
    }
    puVar6 = (undefined1 *)FUN_017cd750(uVar1);
    *param_1 = puVar6;
    param_1[1] = puVar6;
    param_1[2] = puVar6 + uVar1;
    puVar7 = (undefined1 *)*param_3;
    for (puVar4 = (undefined1 *)*param_2; puVar7 != puVar4; puVar4 = puVar4 + 1) {
      *puVar6 = *puVar4;
      puVar6 = (undefined1 *)(param_1[1] + 1);
      param_1[1] = puVar6;
    }
    return;
  }
  uVar8 = param_1[1] - (long)puVar4;
  puVar7 = puVar6;
  if (uVar8 < uVar2) {
    if ((long)uVar8 < 0) {
      bVar3 = true;
      puVar6 = puVar6 + uVar8;
    }
    else {
      if (uVar8 == 0) {
        bVar3 = true;
        goto LAB_00c2978c;
      }
      uVar2 = 0xfffffffffffffffe;
      if (-2 < (long)~uVar8) {
        uVar2 = ~uVar8;
      }
      bVar3 = true;
      puVar6 = puVar6 + uVar8 + uVar2 + 2;
    }
  }
  else {
    bVar3 = false;
    puVar6 = (undefined1 *)*param_3;
  }
  for (; puVar6 != puVar7; puVar7 = puVar7 + 1) {
    *puVar4 = *puVar7;
    puVar4 = puVar4 + 1;
  }
LAB_00c2978c:
  if (bVar3) {
    puVar4 = (undefined1 *)*param_3;
    if (puVar4 != puVar6) {
      puVar7 = (undefined1 *)param_1[1];
      do {
        puVar5 = puVar6 + 1;
        *puVar7 = *puVar6;
        puVar7 = (undefined1 *)(param_1[1] + 1);
        param_1[1] = puVar7;
        puVar6 = puVar5;
      } while (puVar4 != puVar5);
    }
    return;
  }
  param_1[1] = puVar4;
  return;
}


