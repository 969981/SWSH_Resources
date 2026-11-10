/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b8780; name: FUN_005b8780
 */


undefined8 FUN_005b8780(long *param_1,char *param_2)

{
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_0059ebe0(param_1,0);
  *param_1 = (long)(PTR_DAT_02713db8 + 0x10);
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    FUN_00551860(param_1 + 2,PTR_s_CTextureLuminanceManage_02713dc0);
  }
  else {
    FUN_00550fe0(auStack_50,PTR_s_CTextureLuminanceManage_02713dc0);
    FUN_005528d0(auStack_40,auStack_50,&DAT_01ce77a5);
    FUN_005528d0(auStack_30,auStack_40,param_2);
    FUN_00551670(param_1 + 2,auStack_30);
    FUN_00551380(auStack_30);
    FUN_00551380(auStack_40);
    FUN_00551380(auStack_50);
  }
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((long)param_1 + 0x4d) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return 0;
}


