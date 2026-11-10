/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e0700; name: FUN_007e0700
 */


void FUN_007e0700(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  size_t __n;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *__src;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  puVar5 = *(undefined4 **)(param_1 + 0x160);
  uVar10 = (undefined4)((ulong)(*(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8)) >> 3);
  uVar12 = (undefined4)((ulong)(*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90)) >> 3);
  uVar9 = (undefined4)((ulong)(*(long *)(param_1 + 200) - *(long *)(param_1 + 0xc0)) >> 3);
  uVar11 = (undefined4)((ulong)(*(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8)) >> 3);
  uVar7 = (undefined4)((ulong)(*(long *)(param_1 + 400) - *(long *)(param_1 + 0x188)) >> 3);
  uVar13 = (undefined4)((ulong)(*(long *)(param_1 + 0x178) - *(long *)(param_1 + 0x170)) >> 3);
  uVar6 = (undefined4)((ulong)(*(long *)(param_1 + 0x1a8) - *(long *)(param_1 + 0x1a0)) >> 4);
  if (puVar5 < *(undefined4 **)(param_1 + 0x168)) {
    *puVar5 = uVar12;
    puVar5[1] = uVar10;
    puVar5[2] = uVar9;
    puVar5[3] = uVar11;
    puVar5[4] = uVar13;
    puVar5[5] = uVar7;
    puVar5[6] = uVar6;
    *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 0x1c;
    return;
  }
  __src = *(void **)(param_1 + 0x158);
  __n = (long)puVar5 - (long)__src;
  uVar8 = 0x924924924924924;
  uVar1 = ((long)__n >> 2) * 0x6db6db6db6db6db7 + 1;
  if (0x924924924924924 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = (long)*(undefined4 **)(param_1 + 0x168) - (long)__src >> 2;
  if ((ulong)(lVar3 * 0x6db6db6db6db6db7) < 0x492492492492492) {
    uVar4 = lVar3 * -0x2492492492492492;
    uVar8 = uVar1;
    if (uVar1 <= uVar4) {
      uVar8 = uVar4;
    }
    if (uVar8 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_007e0834;
    }
  }
  pvVar2 = operator_new(uVar8 * 0x1c);
LAB_007e0834:
  lVar3 = SUB168(SEXT816((long)__n) * SEXT816(-0x4924924924924925),8);
  puVar5 = (undefined4 *)((long)pvVar2 + ((long)__n >> 2) * 4);
  puVar5[4] = uVar13;
  puVar5[5] = uVar7;
  puVar5[2] = uVar9;
  puVar5[3] = uVar11;
  *puVar5 = uVar12;
  puVar5[1] = uVar10;
  puVar5[6] = uVar6;
  if (0 < (long)__n) {
    memcpy(puVar5 + ((lVar3 >> 3) - (lVar3 >> 0x3f)) * 7,__src,__n);
  }
  *(undefined4 **)(param_1 + 0x158) = puVar5 + ((lVar3 >> 3) - (lVar3 >> 0x3f)) * 7;
  *(undefined4 **)(param_1 + 0x160) = puVar5 + 7;
  *(void **)(param_1 + 0x168) = (void *)((long)pvVar2 + uVar8 * 0x1c);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}


