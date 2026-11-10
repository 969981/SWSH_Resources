/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b7650; name: FUN_005b7650
 */


undefined8 FUN_005b7650(long param_1,char *param_2)

{
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    FUN_00551860(param_1 + 0x10,PTR_s_CTextureLuminance_02713da8);
  }
  else {
    FUN_00550fe0(auStack_50,PTR_s_CTextureLuminance_02713da8);
    FUN_005528d0(auStack_40,auStack_50,&DAT_01ce77a5);
    FUN_005528d0(auStack_30,auStack_40,param_2);
    FUN_00551670(param_1 + 0x10,auStack_30);
    FUN_00551380(auStack_30);
    FUN_00551380(auStack_40);
    FUN_00551380(auStack_50);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x98) = 2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return 0;
}


