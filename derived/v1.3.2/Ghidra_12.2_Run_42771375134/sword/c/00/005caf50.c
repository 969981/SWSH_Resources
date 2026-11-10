/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005caf50; name: FUN_005caf50
 */


void FUN_005caf50(long *param_1,long param_2,char *param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  param_1[2] = param_2;
  *param_1 = (long)(PTR_DAT_02713f58 + 0x10);
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_2 == 0) {
    lVar3 = FUN_005bc740();
    if (lVar3 == 0) {
      lVar3 = FUN_005bc6f0();
    }
    else {
      lVar3 = FUN_005bc740();
    }
    param_1[2] = lVar3;
  }
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    param_1[3] = (long)param_3;
    lVar3 = 0;
    do {
      lVar4 = lVar3;
      lVar3 = lVar4 + 1;
    } while (param_3[lVar4] != '\0');
    param_1[4] = lVar4;
    param_1[6] = 0;
    param_1[7] = param_1[7] | 1;
  }
  param_1[8] = param_4;
  puVar1 = PTR_DAT_02713f60;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[10] = param_5;
  param_1[0xb] = (long)(puVar1 + 0x10);
  if (param_2 == 0) {
    lVar3 = FUN_005bc6f0();
    param_1[0xc] = lVar3;
  }
  puVar1 = PTR_DAT_02713f68;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 8;
  param_1[0x15] = 0;
  param_1[0x10] = (long)(puVar1 + 0x10);
  param_1[0x11] = param_2;
  if (param_2 == 0) {
    lVar3 = FUN_005bc6f0();
    param_1[0x11] = lVar3;
  }
  param_1[0x1a] = (long)(puVar1 + 0x10);
  param_1[0x1b] = param_2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 8;
  param_1[0x1f] = 0;
  if (param_2 == 0) {
    lVar3 = FUN_005bc6f0();
    param_1[0x1b] = lVar3;
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar2 = FUN_005c3550(param_4);
  *(undefined4 *)(param_1 + 9) = uVar2;
  return;
}


