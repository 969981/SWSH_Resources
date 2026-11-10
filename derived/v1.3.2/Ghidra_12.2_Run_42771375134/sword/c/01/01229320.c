/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01229320; name: FUN_01229320
 */


void FUN_01229320(long *param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  
  lVar7 = param_1[1] - *param_1 >> 3;
  uVar13 = 0x492492492492492;
  uVar1 = lVar7 * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar8 * 0x6db6db6db6db6db7) < 0x249249249249249) {
    uVar9 = lVar8 * -0x2492492492492492;
    uVar13 = uVar1;
    if (uVar1 <= uVar9) {
      uVar13 = uVar9;
    }
    if (uVar13 == 0) {
      lVar8 = 0;
      goto LAB_012293b8;
    }
  }
  lVar8 = FUN_017cd750(uVar13 * 0x38);
LAB_012293b8:
  plVar10 = (long *)(lVar8 + lVar7 * 8);
  puVar2 = PTR_DAT_02726120 + 0x10;
  *plVar10 = (long)puVar2;
  *(undefined1 *)(plVar10 + 1) = *(undefined1 *)(param_2 + 8);
  puVar6 = PTR_DAT_02726128;
  lVar8 = lVar8 + uVar13 * 0x38;
  *(undefined1 *)((long)plVar10 + 9) = *(undefined1 *)(param_2 + 9);
  plVar10[2] = (long)(puVar6 + 0x10);
  *(undefined1 *)(plVar10 + 3) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((long)plVar10 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)((long)plVar10 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)((long)plVar10 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  plVar10[4] = *(long *)(param_2 + 0x20);
  *(undefined4 *)(plVar10 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((long)plVar10 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined1 *)(plVar10 + 6) = *(undefined1 *)(param_2 + 0x30);
  *(undefined2 *)((long)plVar10 + 0x32) = *(undefined2 *)(param_2 + 0x32);
  puVar3 = PTR_DAT_02726110 + 0x10;
  plVar10[2] = (long)puVar3;
  puVar4 = PTR_DAT_02726118 + 0x10;
  *plVar10 = (long)puVar4;
  puVar14 = (undefined8 *)*param_1;
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 == puVar14) {
    *param_1 = (long)plVar10;
    param_1[1] = (long)(plVar10 + 7);
    param_1[2] = lVar8;
  }
  else {
    lVar7 = 0;
    do {
      lVar11 = lVar7 + -0x38;
      *(undefined **)((long)plVar10 + lVar7 + -0x38) = puVar2;
      *(undefined1 *)((long)plVar10 + lVar7 + -0x30) =
           *(undefined1 *)((long)puVar12 + lVar7 + -0x30);
      *(undefined1 *)((long)plVar10 + lVar7 + -0x2f) =
           *(undefined1 *)((long)puVar12 + lVar7 + -0x2f);
      *(undefined **)((long)plVar10 + lVar7 + -0x28) = puVar6 + 0x10;
      *(undefined1 *)((long)plVar10 + lVar7 + -0x20) =
           *(undefined1 *)((long)puVar12 + lVar7 + -0x20);
      *(undefined1 *)((long)plVar10 + lVar7 + -0x1f) =
           *(undefined1 *)((long)puVar12 + lVar7 + -0x1f);
      *(undefined1 *)((long)plVar10 + lVar7 + -0x1e) =
           *(undefined1 *)((long)puVar12 + lVar7 + -0x1e);
      *(undefined1 *)((long)plVar10 + lVar7 + -0x1d) =
           *(undefined1 *)((long)puVar12 + lVar7 + -0x1d);
      *(undefined8 *)((long)plVar10 + lVar7 + -0x18) =
           *(undefined8 *)((long)puVar12 + lVar7 + -0x18);
      *(undefined4 *)((long)plVar10 + lVar7 + -0x10) =
           *(undefined4 *)((long)puVar12 + lVar7 + -0x10);
      *(undefined4 *)((long)plVar10 + lVar7 + -0xc) = *(undefined4 *)((long)puVar12 + lVar7 + -0xc);
      *(undefined1 *)((long)plVar10 + lVar7 + -8) = *(undefined1 *)((long)puVar12 + lVar7 + -8);
      uVar5 = *(undefined2 *)((long)puVar12 + lVar7 + -6);
      *(undefined **)((long)plVar10 + lVar7 + -0x28) = puVar3;
      *(undefined **)((long)plVar10 + lVar7 + -0x38) = puVar4;
      *(undefined2 *)((long)plVar10 + lVar7 + -6) = uVar5;
      lVar7 = lVar11;
    } while ((long)puVar14 - (long)puVar12 != lVar11);
    puVar14 = (undefined8 *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    *param_1 = (long)plVar10 + lVar11;
    param_1[1] = (long)(plVar10 + 7);
    param_1[2] = lVar8;
    while (puVar12 != puVar14) {
      puVar12 = puVar12 + -7;
      (**(code **)*puVar12)(puVar12);
    }
  }
  if (puVar14 == (undefined8 *)0x0) {
    return;
  }
  FUN_017cd7a0(puVar14);
  return;
}


