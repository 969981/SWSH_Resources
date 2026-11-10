/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ec180; name: FUN_007ec180
 */


void FUN_007ec180(long param_1,long param_2,int param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  ulong local_58 [2];
  char *local_48;
  
  local_48 = operator_new(0x30);
  local_58[0] = 0x31;
  local_48[0x21] = '\0';
  uVar4 = s_File_recursively_imports_itself__01cf2c37._24_8_;
  uVar3 = s_File_recursively_imports_itself__01cf2c37._16_8_;
  uVar2 = s_File_recursively_imports_itself__01cf2c37._8_8_;
  local_58[1] = 0x21;
  uVar7 = (ulong)param_3;
  *(undefined8 *)local_48 = s_File_recursively_imports_itself__01cf2c37._0_8_;
  *(undefined8 *)(local_48 + 8) = uVar2;
  *(undefined8 *)(local_48 + 0x10) = uVar3;
  *(undefined8 *)(local_48 + 0x18) = uVar4;
  local_48[0x20] = ' ';
  plVar5 = *(long **)(param_1 + 8);
  if (uVar7 < (ulong)((plVar5[1] - *plVar5 >> 3) * -0x5555555555555555)) {
    lVar8 = uVar7 * 0x18;
    do {
      pbVar1 = (byte *)(*plVar5 + lVar8);
      pbVar6 = *(byte **)(pbVar1 + 0x10);
      if ((*pbVar1 & 1) == 0) {
        pbVar6 = pbVar1 + 1;
      }
      std::string::append((char *)local_58,(ulong)pbVar6);
      std::string::append((char *)local_58);
      plVar5 = *(long **)(param_1 + 8);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x18;
    } while (uVar7 < (ulong)((plVar5[1] - *plVar5 >> 3) * -0x5555555555555555));
  }
  pbVar6 = *(byte **)(param_2 + 0x18);
  pbVar1 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbVar1 = pbVar6 + 1;
  }
  std::string::append((char *)local_58,(ulong)pbVar1);
  FUN_007eaaf0(param_1,*(undefined8 *)(param_2 + 0x18),param_2,9,local_58);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  return;
}


