/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00667c30; name: FUN_00667c30
 */


void FUN_00667c30(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  param_1[4] = 0;
  param_1[5] = 0x60;
  puVar1 = PTR_DAT_02714d30;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  *param_1 = param_2;
  param_1[1] = (long)(puVar1 + 0x10);
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[2] = lVar2;
  }
  puVar1 = PTR_DAT_02713f98;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0x30;
  param_1[0x10] = 0;
  param_1[0xb] = (long)(puVar1 + 0x10);
  param_1[0xc] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0xc] = lVar2;
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = *param_1;
  param_1[0x18] = 0;
  if (*param_1 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[0x17] = lVar2;
  }
  *(undefined4 *)(param_1 + 0x1e) = 0xa0;
  param_1[0x1d] = 0x400000003;
  *(undefined2 *)((long)param_1 + 0xf4) = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0;
  plVar3 = param_1 + 0x20;
  do {
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = 4;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[6] = 4;
    plVar3[7] = 0;
    plVar3 = plVar3 + 8;
  } while (plVar3 != param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)((long)param_1 + 0x914) = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x20,0,0x800);
}


