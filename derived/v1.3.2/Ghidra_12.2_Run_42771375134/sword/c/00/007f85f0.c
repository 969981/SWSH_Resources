/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f85f0; name: FUN_007f85f0
 */


void FUN_007f85f0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  byte *pbVar12;
  byte *pbVar11;
  byte *pbVar13;
  ulong uVar14;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar14 = 0xaaaaaaaaaaaaaaa;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar5 * -0x5555555555555555) < 0x555555555555555) {
    uVar6 = lVar5 * 0x5555555555555556;
    uVar14 = uVar1;
    if (uVar1 <= uVar6) {
      uVar14 = uVar6;
    }
    if (uVar14 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_007f8674;
    }
  }
  pvVar3 = operator_new(uVar14 * 0x18);
LAB_007f8674:
  puVar7 = (undefined8 *)((long)pvVar3 + lVar4 * 8);
  uVar10 = param_2[2];
  uVar2 = param_2[1];
  *puVar7 = *param_2;
  puVar7[1] = uVar2;
  puVar7[2] = uVar10;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  pvVar3 = (void *)((long)pvVar3 + uVar14 * 0x18);
  pbVar13 = (byte *)*param_1;
  puVar8 = puVar7;
  pbVar12 = (byte *)param_1[1];
  if ((byte *)param_1[1] == pbVar13) {
    *param_1 = (long)puVar7;
    param_1[1] = (long)(puVar7 + 3);
    param_1[2] = (long)pvVar3;
  }
  else {
    do {
      pbVar11 = pbVar12 + -0x18;
      uVar2 = *(undefined8 *)(pbVar12 + -0x10);
      uVar10 = *(undefined8 *)(pbVar12 + -8);
      puVar9 = puVar8 + -3;
      *puVar9 = *(undefined8 *)pbVar11;
      puVar8[-2] = uVar2;
      puVar8[-1] = uVar10;
      pbVar11[0] = 0;
      pbVar11[1] = 0;
      pbVar11[2] = 0;
      pbVar11[3] = 0;
      pbVar11[4] = 0;
      pbVar11[5] = 0;
      pbVar11[6] = 0;
      pbVar11[7] = 0;
      pbVar12[-0x10] = 0;
      pbVar12[-0xf] = 0;
      pbVar12[-0xe] = 0;
      pbVar12[-0xd] = 0;
      pbVar12[-0xc] = 0;
      pbVar12[-0xb] = 0;
      pbVar12[-10] = 0;
      pbVar12[-9] = 0;
      pbVar12[-8] = 0;
      pbVar12[-7] = 0;
      pbVar12[-6] = 0;
      pbVar12[-5] = 0;
      pbVar12[-4] = 0;
      pbVar12[-3] = 0;
      pbVar12[-2] = 0;
      pbVar12[-1] = 0;
      puVar8 = puVar9;
      pbVar12 = pbVar11;
    } while (pbVar13 != pbVar11);
    pbVar13 = (byte *)*param_1;
    pbVar12 = (byte *)param_1[1];
    *param_1 = (long)puVar9;
    param_1[1] = (long)(puVar7 + 3);
    param_1[2] = (long)pvVar3;
    if (pbVar12 != pbVar13) {
      do {
        pbVar11 = pbVar12 + -0x18;
        if ((*pbVar11 & 1) != 0) {
          operator_delete(*(void **)(pbVar12 + -8));
        }
        pbVar12 = pbVar11;
      } while (pbVar13 != pbVar11);
    }
  }
  if (pbVar13 == (byte *)0x0) {
    return;
  }
  operator_delete(pbVar13);
  return;
}


