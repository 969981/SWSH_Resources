/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006be180; name: FUN_006be180
 */


void FUN_006be180(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  
  puVar10 = *(undefined8 **)(param_1 + 0x68);
  for (puVar9 = *(undefined8 **)(param_1 + 0x60); puVar9 != puVar10; puVar9 = puVar9 + 5) {
    FUN_006ac3b0(0,*puVar9);
  }
  lVar1 = param_1 + 0x48;
  iVar3 = FUN_006b4830(lVar1);
  if (iVar3 == 1) {
    fVar11 = (float)FUN_006b4930(lVar1);
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    puVar10 = *(undefined8 **)(param_1 + 0x68);
    lVar1 = (long)puVar10 - (long)puVar9;
  }
  else if (iVar3 == 0) {
    iVar3 = FUN_006b48b0(lVar1);
    fVar11 = (float)iVar3;
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    puVar10 = *(undefined8 **)(param_1 + 0x68);
    lVar1 = (long)puVar10 - (long)puVar9;
  }
  else {
    fVar11 = 0.0;
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    puVar10 = *(undefined8 **)(param_1 + 0x68);
    lVar1 = (long)puVar10 - (long)puVar9;
  }
  if (lVar1 == 0) goto LAB_006be36c;
  if ((lVar1 == 0x28) || (fVar11 <= *(float *)(puVar9 + 4))) {
    uVar8 = *puVar9;
LAB_006be32c:
    FUN_006ac3b0(0x3f800000,uVar8);
    *(undefined8 *)(param_1 + 0x90) = uVar8;
    return;
  }
  uVar4 = (lVar1 >> 3) * -0x3333333333333333;
  if (*(float *)(puVar9 + (uVar4 - 1) * 5 + 4) <= fVar11) {
    uVar8 = puVar9[(uVar4 - 1) * 5];
    goto LAB_006be32c;
  }
  puVar6 = puVar9;
  uVar5 = uVar4;
  do {
    uVar7 = uVar5;
    if ((long)uVar5 < 0) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = (long)uVar7 >> 1;
    puVar2 = puVar6 + uVar7 * 5 + 5;
    uVar5 = uVar5 + ~uVar7;
    if (fVar11 <= *(float *)(puVar6 + uVar7 * 5 + 4)) {
      puVar2 = puVar6;
      uVar5 = uVar7;
    }
    puVar6 = puVar2;
  } while (uVar5 != 0);
  if (puVar2 == puVar10) {
    uVar5 = 0;
    if (uVar4 == 0) goto LAB_006be36c;
  }
  else {
    uVar5 = ((ulong)(uint)((int)((ulong)((long)puVar2 - (long)puVar9) >> 3) * -0x33333333) << 0x20)
            - 0x100000000 >> 0x20;
    if (uVar4 <= uVar5) goto LAB_006be36c;
  }
  uVar7 = (ulong)((int)uVar5 + 1);
  if (uVar7 < uVar4) {
    puVar10 = puVar9 + uVar5 * 5;
    puVar9 = puVar9 + uVar7 * 5;
    fVar11 = (fVar11 - *(float *)(puVar10 + 4)) / (*(float *)(puVar9 + 4) - *(float *)(puVar10 + 4))
    ;
    FUN_006ac3b0(1.0 - fVar11,*puVar10);
    FUN_006ac3b0(fVar11,*puVar9);
    if (1.0 - fVar11 <= fVar11) {
      puVar10 = puVar9;
    }
    *(undefined8 *)(param_1 + 0x90) = *puVar10;
    return;
  }
LAB_006be36c:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


