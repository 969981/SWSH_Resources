/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059aa70; name: FUN_0059aa70
 */


undefined8 FUN_0059aa70(long *param_1,char *param_2)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_0059ebe0(param_1,0);
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  puVar1 = PTR_DAT_02713cb8;
  *(undefined8 *)((long)param_1 + 0x45) = 0;
  param_1[8] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 1;
  param_1[0x21] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    FUN_00551860(param_1 + 2,PTR_s_CRenderTexture_02713cc0);
  }
  else {
    FUN_00550fe0(auStack_50,PTR_s_CRenderTexture_02713cc0);
    FUN_005528d0(auStack_40,auStack_50,&DAT_01ce77a5);
    FUN_005528d0(auStack_30,auStack_40,param_2);
    FUN_00551670(param_1 + 2,auStack_30);
    FUN_00551380(auStack_30);
    FUN_00551380(auStack_40);
    FUN_00551380(auStack_50);
  }
  *(undefined4 *)((long)param_1 + 0x3c) = 1;
  param_1[0xd] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x45) = 0;
  param_1[8] = 0;
  param_1[0x15] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if ((int)param_1[0x14] != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 0;
}


