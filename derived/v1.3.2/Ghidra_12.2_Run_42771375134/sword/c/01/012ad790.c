/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ad790; name: FUN_012ad790
 */


void FUN_012ad790(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_02727398 + 0x10);
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar6 = param_2[1] - *param_2;
  if (lVar6 != 0) {
    if ((ulong)(lVar6 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar3 = (undefined8 *)FUN_017cd750(lVar6);
    param_1[3] = (long)puVar3;
    param_1[4] = (long)puVar3;
    param_1[5] = (long)(puVar3 + (lVar6 >> 3));
    puVar1 = (undefined8 *)*param_2;
    puVar2 = (undefined8 *)param_2[1];
    if (puVar1 != puVar2) {
      uVar5 = (long)puVar2 + (-8 - (long)puVar1);
      puVar4 = puVar1;
      if (((uint)uVar5 >> 3 & 1) == 0) {
        puVar4 = puVar1 + 1;
        *puVar3 = *puVar1;
        puVar3 = (undefined8 *)(param_1[4] + 8);
        param_1[4] = (long)puVar3;
      }
      if (7 < uVar5) {
        do {
          *puVar3 = *puVar4;
          lVar6 = param_1[4];
          param_1[4] = lVar6 + 8;
          *(undefined8 *)(lVar6 + 8) = puVar4[1];
          puVar4 = puVar4 + 2;
          puVar3 = (undefined8 *)(param_1[4] + 8);
          param_1[4] = (long)puVar3;
        } while (puVar4 != puVar2);
      }
    }
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  return;
}


