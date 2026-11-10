/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049d820; name: FUN_0049d820
 */


uint * FUN_0049d820(long *param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  float fVar6;
  
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = param_2 / uVar3;
    }
    for (puVar5 = *(uint **)(*param_1 + (ulong)(param_2 - uVar2 * uVar3) * 8); puVar5 != (uint *)0x0
        ; puVar5 = *(uint **)(puVar5 + 2)) {
      if (*puVar5 == param_2) {
        return puVar5;
      }
    }
  }
  puVar5 = (uint *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x68);
  if (puVar5 != (uint *)0x0) {
    *puVar5 = param_2;
    puVar5[10] = 0;
    *(undefined1 *)(puVar5 + 0xb) = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar1 = PTR_DAT_02713378 + 0x10;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    *(undefined **)(puVar5 + 8) = puVar1;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    puVar5[0x18] = 0;
    puVar5[0x19] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar5[0x14] = 0;
    puVar5[0x15] = 0;
    uVar3 = *(uint *)(param_1 + 1);
    if ((uVar3 == 0) ||
       (fVar6 = (float)NEON_ucvtf((int)param_1[2]), DAT_01d4bee0 < fVar6 / (float)uVar3)) {
      FUN_004a1540(param_1);
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 == 0) {
        return puVar5;
      }
      param_2 = *puVar5;
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = param_2 / uVar3;
    }
    lVar4 = (ulong)(param_2 - uVar2 * uVar3) * 8;
    *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(*param_1 + lVar4);
    *(uint **)(*param_1 + lVar4) = puVar5;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return puVar5;
}


