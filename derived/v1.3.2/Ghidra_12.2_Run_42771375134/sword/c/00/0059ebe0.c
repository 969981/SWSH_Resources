/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059ebe0; name: FUN_0059ebe0
 */


undefined8 FUN_0059ebe0(long *param_1,char *param_2)

{
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 1;
  *param_1 = (long)(PTR_DAT_02713d20 + 0x10);
  param_1[3] = 0;
  FUN_00550f60(param_1 + 2);
  *(undefined1 *)(param_1 + 5) = 0;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    FUN_00551860(param_1 + 2,PTR_s_CGPUResourceManage_02713d28);
  }
  else {
    FUN_00550fe0(auStack_50,PTR_s_CGPUResourceManage_02713d28);
    FUN_005528d0(auStack_40,auStack_50,&DAT_01ce77a5);
    FUN_005528d0(auStack_30,auStack_40,param_2);
    FUN_00551670(param_1 + 2,auStack_30);
    FUN_00551380(auStack_30);
    FUN_00551380(auStack_40);
    FUN_00551380(auStack_50);
  }
  param_1[4] = 0;
  return 0;
}


