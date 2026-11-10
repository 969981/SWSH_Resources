/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00808f50; name: FUN_00808f50
 */


undefined8 FUN_00808f50(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong *puVar2;
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
  uVar1 = FUN_00843290((string *)(param_1 + 0x30),param_3,param_2);
  if ((uVar1 & 1) != 0) {
    FUN_00842de0(param_1 + 0x28);
    return 1;
  }
  std::operator+("Integer out of range (",(string *)(param_1 + 0x30));
  puVar2 = (ulong *)std::string::append((char *)local_50);
  local_38 = *puVar2;
  local_30 = puVar2[1];
  local_28 = (void *)puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_38);
  if ((local_38 & 1) != 0) {
    operator_delete(local_28);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  return 0;
}


