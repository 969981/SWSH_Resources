/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c1c150; name: FUN_00c1c150
 */


void FUN_00c1c150(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  lVar13 = param_1[1] - *param_1 >> 5;
  uVar15 = lVar13 + 1;
  if (uVar15 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1;
  if ((ulong)(lVar8 >> 5) < 0x3ffffffffffffff) {
    uVar9 = lVar8 >> 4;
    if (uVar15 <= uVar9) {
      uVar15 = uVar9;
    }
    if (uVar15 == 0) {
      lVar8 = 0;
      goto LAB_00c1c1bc;
    }
  }
  else {
    uVar15 = 0x7ffffffffffffff;
  }
  lVar8 = FUN_017cd750(uVar15 << 5);
LAB_00c1c1bc:
  plVar3 = (long *)(lVar8 + lVar13 * 0x20);
  lVar4 = lVar8 + uVar15 * 0x20;
  puVar1 = PTR_DAT_0271bbf8 + 0x10;
  *plVar3 = (long)puVar1;
  *(undefined1 *)(plVar3 + 1) = *(undefined1 *)(param_2 + 8);
  plVar3[2] = *(long *)(param_2 + 0x10);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)(param_2 + 0x18);
  puVar2 = PTR_DAT_0271bbf0 + 0x10;
  *plVar3 = (long)puVar2;
  puVar14 = (undefined8 *)*param_1;
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 == puVar14) {
    *param_1 = (long)plVar3;
    param_1[1] = (long)(plVar3 + 4);
    param_1[2] = lVar4;
  }
  else {
    lVar7 = -0x20 - (long)puVar14;
    lVar10 = 0;
    do {
      lVar11 = lVar10 + -0x20;
      *(undefined **)((long)plVar3 + lVar10 + -0x20) = puVar1;
      *(undefined1 *)((long)plVar3 + lVar10 + -0x18) =
           *(undefined1 *)((long)puVar5 + lVar10 + -0x18);
      *(undefined8 *)((long)plVar3 + lVar10 + -0x10) =
           *(undefined8 *)((long)puVar5 + lVar10 + -0x10);
      uVar6 = *(undefined4 *)((long)puVar5 + lVar10 + -8);
      *(undefined **)((long)plVar3 + lVar10 + -0x20) = puVar2;
      *(undefined4 *)((long)plVar3 + lVar10 + -8) = uVar6;
      lVar10 = lVar11;
    } while ((long)puVar14 - (long)puVar5 != lVar11);
    puVar14 = (undefined8 *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    *param_1 = lVar8 + (lVar13 + ((ulong)((long)puVar5 + lVar7) >> 5 ^ 0xffffffffffffffff)) * 0x20;
    param_1[1] = (long)(plVar3 + 4);
    param_1[2] = lVar4;
    while (puVar12 != puVar14) {
      puVar12 = puVar12 + -4;
      (**(code **)*puVar12)(puVar12);
    }
  }
  if (puVar14 == (undefined8 *)0x0) {
    return;
  }
  FUN_017cd7a0(puVar14);
  return;
}


