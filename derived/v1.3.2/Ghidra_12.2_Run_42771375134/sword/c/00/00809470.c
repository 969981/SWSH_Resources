/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00809470; name: FUN_00809470
 */


undefined8 FUN_00809470(long param_1,undefined8 param_2,undefined8 param_3)

{
  string sVar1;
  ulong uVar2;
  ulong *puVar3;
  char *pcVar4;
  string *psVar5;
  byte local_50 [16];
  void *local_40;
  ulong local_38;
  ulong local_30;
  void *local_28;
  
  if (*(int *)(param_1 + 0x28) != 3) {
    std::operator+("Expected integer, got: ",(string *)(param_1 + 0x30));
    FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_38);
    if (((byte)local_38 & 1) != 0) {
      operator_delete(local_28);
    }
    return 0;
  }
  psVar5 = (string *)(param_1 + 0x30);
  sVar1 = *psVar5;
  uVar2 = (ulong)((byte)sVar1 >> 1);
  if (((byte)sVar1 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x38);
  }
  if (1 < uVar2) {
    pcVar4 = *(char **)(param_1 + 0x40);
    if (((byte)sVar1 & 1) == 0) {
      pcVar4 = (char *)(param_1 + 0x31);
    }
    if ((*pcVar4 == '0') && (((byte)(pcVar4[1] | 0x20U) == 0x78 || ((pcVar4[1] & 0xf8U) == 0x30))))
    {
      std::operator+("Expect a decimal number, got: ",psVar5);
      FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_38
                  );
      if (((byte)local_38 & 1) != 0) {
        operator_delete(local_28);
      }
      return 0;
    }
  }
  uVar2 = FUN_00843290(psVar5,param_3,param_2);
  if ((uVar2 & 1) != 0) {
    FUN_00842de0(param_1 + 0x28);
    return 1;
  }
  std::operator+("Integer out of range (",psVar5);
  puVar3 = (ulong *)std::string::append((char *)local_50);
  local_38 = *puVar3;
  local_30 = puVar3[1];
  local_28 = (void *)puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_38);
  if ((local_38 & 1) != 0) {
    operator_delete(local_28);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  return 0;
}


