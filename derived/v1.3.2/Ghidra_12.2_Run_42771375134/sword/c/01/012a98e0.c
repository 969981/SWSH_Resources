/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a98e0; name: FUN_012a98e0
 */


undefined8 *
FUN_012a98e0(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  
  lVar16 = (long)param_4 - (long)param_3;
  if (lVar16 < 1) {
    return param_2;
  }
  uVar2 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  uVar14 = (long)((long)param_2 - uVar2) >> 3;
  lVar7 = lVar16 >> 3;
  if (lVar7 <= (long)(param_1[2] - (long)puVar4) >> 3) {
    uVar15 = (long)puVar4 - (long)param_2 >> 3;
    puVar3 = puVar4;
    if ((long)uVar15 < lVar7) {
      puVar6 = param_3 + uVar15;
      if (puVar6 != param_4) {
        uVar15 = (long)param_4 + (~uVar15 * 8 - (long)param_3);
        puVar8 = puVar6;
        if (((uint)uVar15 >> 3 & 1) == 0) {
          *puVar4 = *puVar6;
          uVar5 = param_1[1];
          param_1[1] = uVar5 + 8;
          puVar3 = (undefined8 *)(uVar5 + 8);
          puVar8 = puVar6 + 1;
        }
        if (7 < uVar15) {
          do {
            *puVar3 = *puVar8;
            uVar15 = param_1[1];
            param_1[1] = uVar15 + 8;
            *(undefined8 *)(uVar15 + 8) = puVar8[1];
            puVar8 = puVar8 + 2;
            puVar3 = (undefined8 *)(param_1[1] + 8);
            param_1[1] = (ulong)puVar3;
          } while (puVar8 != param_4);
        }
      }
      param_4 = puVar6;
      if ((long)puVar4 - (long)param_2 < 1) {
        return param_2;
      }
    }
    puVar6 = puVar3 + -lVar7;
    __n = (long)puVar3 - (long)(param_2 + lVar7);
    if (puVar6 < puVar4) {
      uVar2 = (long)puVar4 + ~uVar2 + (-uVar14 - ((long)__n >> 3)) * 8;
      puVar8 = puVar3;
      if (((uint)uVar2 >> 3 & 1) == 0) {
        *puVar3 = *puVar6;
        uVar14 = param_1[1];
        param_1[1] = uVar14 + 8;
        puVar6 = puVar6 + 1;
        puVar8 = (undefined8 *)(uVar14 + 8);
      }
      if (7 < uVar2) {
        do {
          *puVar8 = *puVar6;
          uVar2 = param_1[1];
          param_1[1] = uVar2 + 8;
          *(undefined8 *)(uVar2 + 8) = puVar6[1];
          puVar6 = puVar6 + 2;
          puVar8 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (ulong)puVar8;
        } while (puVar6 < puVar4);
      }
    }
    if (__n != 0) {
      memmove(puVar3 + -((long)__n >> 3),param_2,__n);
    }
    if ((long)param_4 - (long)param_3 == 0) {
      return param_2;
    }
    uVar2 = ((long)param_4 - (long)param_3) - 8;
    uVar1 = ((uint)(uVar2 >> 3) & 0x1fffffff) + 1;
    puVar4 = param_2;
    if ((uVar1 & 3) != 0) {
      lVar16 = -((ulong)uVar1 & 3);
      puVar3 = param_2;
      puVar6 = param_3;
      do {
        param_3 = puVar6 + 1;
        lVar16 = lVar16 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = *puVar6;
        puVar3 = puVar4;
        puVar6 = param_3;
      } while (lVar16 != 0);
    }
    if (uVar2 < 0x18) {
      return param_2;
    }
    do {
      *puVar4 = *param_3;
      puVar4[1] = param_3[1];
      puVar4[2] = param_3[2];
      puVar3 = param_3 + 3;
      param_3 = param_3 + 4;
      puVar4[3] = *puVar3;
      puVar4 = puVar4 + 4;
    } while (param_3 != param_4);
    return param_2;
  }
  uVar15 = lVar7 + ((long)((long)puVar4 - uVar2) >> 3);
  if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - uVar2;
  if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
    uVar5 = lVar7 >> 2;
    if (uVar15 <= uVar5) {
      uVar15 = uVar5;
    }
    if (uVar15 == 0) {
      lVar7 = 0;
      puVar4 = (undefined8 *)(uVar14 << 3);
      goto joined_r0x012a9a14;
    }
  }
  else {
    uVar15 = 0x1fffffffffffffff;
  }
  lVar7 = FUN_017cd750(uVar15 << 3);
  puVar4 = (undefined8 *)(lVar7 + uVar14 * 8);
joined_r0x012a9a14:
  if (param_3 == param_4) {
    puVar6 = (undefined8 *)*param_1;
    puVar3 = puVar4;
  }
  else {
    uVar5 = lVar16 - 8U >> 3;
    uVar1 = (int)uVar5 + 1;
    puVar3 = puVar4;
    if ((uVar1 & 3) != 0) {
      lVar9 = -((ulong)uVar1 & 3);
      puVar6 = puVar4;
      puVar8 = param_3;
      do {
        param_3 = puVar8 + 1;
        lVar9 = lVar9 + 1;
        puVar3 = puVar6 + 1;
        *puVar6 = *puVar8;
        puVar6 = puVar3;
        puVar8 = param_3;
      } while (lVar9 != 0);
    }
    if (0x17 < lVar16 - 8U) {
      do {
        *puVar3 = *param_3;
        puVar3[1] = param_3[1];
        puVar3[2] = param_3[2];
        puVar6 = param_3 + 3;
        param_3 = param_3 + 4;
        puVar3[3] = *puVar6;
        puVar3 = puVar3 + 4;
      } while (param_3 != param_4);
    }
    puVar6 = (undefined8 *)*param_1;
    puVar3 = (undefined8 *)(lVar7 + (uVar14 + uVar5 + 1) * 8);
  }
  if (puVar6 == param_2) {
    puVar8 = (undefined8 *)param_1[1];
    puVar6 = puVar4;
  }
  else {
    uVar5 = (uVar2 + (uVar14 - 1) * 8) - (long)puVar6;
    uVar11 = uVar5 >> 3;
    uVar1 = (int)uVar11 + 1;
    puVar8 = param_2;
    puVar10 = puVar4;
    if ((uVar1 & 3) != 0) {
      lVar16 = -((ulong)uVar1 & 3);
      do {
        puVar8 = puVar8 + -1;
        lVar16 = lVar16 + 1;
        puVar10 = puVar10 + -1;
        *puVar10 = *puVar8;
      } while (lVar16 != 0);
    }
    if (0x17 < uVar5) {
      puVar10 = puVar10 + -2;
      do {
        puVar10[1] = puVar8[-1];
        *puVar10 = puVar8[-2];
        puVar10[-1] = puVar8[-3];
        puVar8 = puVar8 + -4;
        puVar10[-2] = *puVar8;
        puVar10 = puVar10 + -4;
      } while (puVar6 != puVar8);
    }
    puVar8 = (undefined8 *)param_1[1];
    puVar6 = (undefined8 *)(lVar7 + ((uVar14 - 1) - uVar11) * 8);
  }
  if (puVar8 != param_2) {
    uVar5 = (long)puVar8 + (~uVar14 * 8 - uVar2);
    uVar2 = (uVar5 >> 3) + 1;
    uVar14 = uVar2 & 3;
    puVar10 = puVar3;
    if (uVar14 != 0) {
      lVar16 = -uVar14;
      puVar12 = puVar3;
      puVar13 = param_2;
      do {
        param_2 = puVar13 + 1;
        lVar16 = lVar16 + 1;
        puVar10 = puVar12 + 1;
        *puVar12 = *puVar13;
        puVar12 = puVar10;
        puVar13 = param_2;
      } while (lVar16 != 0);
    }
    if (0x17 < uVar5) {
      do {
        *puVar10 = *param_2;
        puVar10[1] = param_2[1];
        puVar10[2] = param_2[2];
        puVar12 = param_2 + 3;
        param_2 = param_2 + 4;
        puVar10[3] = *puVar12;
        puVar10 = puVar10 + 4;
      } while (param_2 != puVar8);
    }
    puVar3 = puVar3 + uVar2;
  }
  uVar2 = *param_1;
  *param_1 = (ulong)puVar6;
  param_1[1] = (ulong)puVar3;
  param_1[2] = lVar7 + uVar15 * 8;
  if (uVar2 != 0) {
    FUN_017cd7a0();
  }
  return puVar4;
}


