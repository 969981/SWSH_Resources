/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bf870; name: FUN_005bf870
 */


void FUN_005bf870(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_02713e48 + 0x10);
  FUN_005bf710(param_1 + 1,0);
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_005c8750(param_1 + 4);
  param_1[9] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  lVar2 = FUN_005bc740();
  if (lVar2 == 0) {
    lVar2 = FUN_005bc6f0();
  }
  else {
    lVar2 = FUN_005bc740();
  }
  param_1[0x8a] = lVar2;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)((long)param_1 + 0x484) = 1;
  param_1[0x91] = 0;
  FUN_005c8970(param_1 + 0x92,0);
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  puVar1 = PTR_DAT_02713e50;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 8;
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  param_1[0xcf] = (long)(puVar1 + 0x10);
  lVar2 = FUN_005bc6f0();
  param_1[0x1d9] = 0;
  puVar1 = PTR_DAT_02713e58;
  param_1[0x1dd] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1db] = 0;
  param_1[0x1de] = 8;
  param_1[0xd0] = lVar2;
  param_1[0x1e3] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1df] = 0;
  param_1[0x1da] = (long)(puVar1 + 0x10);
  lVar2 = FUN_005bc6f0();
  puVar1 = PTR_DAT_02713e60;
  param_1[0x1e7] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e8] = 8;
  param_1[0x1ed] = 0;
  param_1[0x1db] = lVar2;
  param_1[0x1ec] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1e4] = (long)(puVar1 + 0x10);
  lVar2 = FUN_005bc6f0();
  puVar1 = PTR_DAT_02713e68;
  param_1[0x1e5] = lVar2;
  param_1[0x1f1] = 0;
  param_1[0x1f0] = 0;
  param_1[0x1ee] = (long)(puVar1 + 0x10);
  param_1[0x1ef] = 0;
  lVar2 = FUN_005bc6f0();
  puVar1 = PTR_DAT_02713e70;
  param_1[0x1f6] = 0;
  param_1[0x1f5] = 0;
  param_1[500] = 0;
  param_1[0x1f7] = 8;
  param_1[0x1fc] = 0;
  param_1[0x1ef] = lVar2;
  param_1[0x1fb] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1f8] = 0;
  param_1[499] = (long)(puVar1 + 0x10);
  lVar2 = FUN_005bc6f0();
  param_1[0x202] = 0;
  param_1[500] = lVar2;
  param_1[0x201] = 0;
  param_1[0x200] = 0;
  param_1[0x1ff] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1fd] = 0;
  lVar2 = FUN_005bc740();
  if (lVar2 == 0) {
    lVar2 = FUN_005bc6f0();
  }
  else {
    lVar2 = FUN_005bc740();
  }
  param_1[0x1fd] = lVar2;
  param_1[0x208] = 0;
  param_1[0x207] = 0;
  param_1[0x206] = 0;
  param_1[0x205] = 0;
  param_1[0x204] = 0;
  param_1[0x203] = 0;
  lVar2 = FUN_005bc740();
  if (lVar2 == 0) {
    lVar2 = FUN_005bc6f0();
  }
  else {
    lVar2 = FUN_005bc740();
  }
  param_1[0x203] = lVar2;
  *(undefined1 *)((long)param_1 + 0x487) = 0;
  *(undefined2 *)((long)param_1 + 0x485) = 0;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 10,0,0x400);
}


