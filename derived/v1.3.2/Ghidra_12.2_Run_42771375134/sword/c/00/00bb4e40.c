/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb4e40; name: FUN_00bb4e40
 */


void FUN_00bb4e40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x100;
  FUN_00ffd430(lVar1,&DAT_02159bc8);
  FUN_00ffd430(lVar1,&DAT_02159bd0);
  FUN_00ffd430(lVar1,&DAT_02159bd8);
  FUN_00ffd430(lVar1,&DAT_02159be8);
  FUN_00ffd430(lVar1,&DAT_02159bf0);
  FUN_00ffd430(lVar1,&DAT_02159bf8);
  FUN_00ffd430(lVar1,&DAT_02159c08);
  FUN_00ffd430(lVar1,&DAT_02159c10);
  FUN_00ffd430(lVar1,&DAT_02159c18);
  FUN_00ffd010(lVar1,&DAT_02159bc8 + (long)*(int *)(param_1 + 0x61c) * 0x20);
  FUN_00ffd010(lVar1,&DAT_02159bd0 + (long)*(int *)(param_1 + 0x61c) * 0x20);
  FUN_00ffd010(lVar1,&DAT_02159bd8 + (long)*(int *)(param_1 + 0x61c) * 0x20);
  FUN_00bb6fe0(param_1,*(undefined8 *)(&DAT_02159bc0 + (long)*(int *)(param_1 + 0x61c) * 0x20),
               0x333002b3c5532fa9);
  return;
}


