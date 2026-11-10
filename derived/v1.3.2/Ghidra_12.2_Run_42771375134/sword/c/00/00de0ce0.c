/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de0ce0; name: FUN_00de0ce0
 */


void FUN_00de0ce0(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (*(int *)(param_1 + 0x84) == 1) {
    puVar4 = *(undefined8 **)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x10) - (long)puVar4;
    uVar5 = lVar6 >> 5;
    if (*(char *)(param_1 + 0x88) != '\0') {
      uVar3 = puVar4[uVar5 * 4 + -8];
      uVar7 = puVar4[uVar5 * 4 + -7];
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(puVar4 + uVar5 * 4 + -6);
      *(undefined8 *)(param_1 + 0x40) = uVar3;
      *(undefined8 *)(param_1 + 0x48) = uVar7;
      uVar3 = puVar4[4];
      uVar7 = puVar4[5];
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(puVar4 + 6);
      *(undefined8 *)(param_1 + 0x60) = uVar3;
      *(undefined8 *)(param_1 + 0x68) = uVar7;
      FUN_00de0dc0();
      return;
    }
    if ((lVar6 == 0) || (uVar5 < 2)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    uVar8 = puVar4[1];
    uVar7 = *puVar4;
    uVar11 = puVar4[5];
    uVar9 = puVar4[4];
    puVar1 = puVar4 + (uVar5 - 1) * 4;
    uVar14 = puVar4[uVar5 * 4 + -7];
    uVar13 = puVar4[uVar5 * 4 + -8];
    uVar12 = puVar1[1];
    uVar10 = *puVar1;
    uVar2 = *(undefined4 *)(puVar4 + 2);
    uVar3 = puVar4[1];
    *(undefined8 *)(param_1 + 0x40) = *puVar4;
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(ulong *)(param_1 + 0x48) =
         CONCAT44(((float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar11 >> 0x20)) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20),
                  ((float)uVar8 - (float)uVar11) + (float)*(undefined8 *)(param_1 + 0x48));
    *(ulong *)(param_1 + 0x40) =
         CONCAT44(((float)((ulong)uVar7 >> 0x20) - (float)((ulong)uVar9 >> 0x20)) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20),
                  ((float)uVar7 - (float)uVar9) + (float)*(undefined8 *)(param_1 + 0x40));
    uVar2 = *(undefined4 *)(puVar1 + 2);
    *(undefined8 *)(param_1 + 0x68) = puVar1[1];
    uVar3 = *puVar1;
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    *(ulong *)(param_1 + 0x68) =
         CONCAT44(((float)((ulong)uVar12 >> 0x20) - (float)((ulong)uVar14 >> 0x20)) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20),
                  ((float)uVar12 - (float)uVar14) + (float)*(undefined8 *)(param_1 + 0x68));
    *(ulong *)(param_1 + 0x60) =
         CONCAT44(((float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar13 >> 0x20)) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20),
                  ((float)uVar10 - (float)uVar13) + (float)*(undefined8 *)(param_1 + 0x60));
  }
  FUN_00de0dc0();
  return;
}


