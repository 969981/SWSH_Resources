/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd6380; name: FUN_00fd6380
 */


void FUN_00fd6380(long *param_1)

{
  uint uVar1;
  undefined8 local_18;
  
  local_18 = 0x8e89686f5660e8f;
  FUN_0167ba30(param_1[0x34],&local_18);
  *(undefined2 *)((long)param_1 + 0x84) = 0x101;
  uVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  DAT_02a61820 = DAT_02a61820 | 1 << (ulong)(uVar1 & 0x1f);
  (**(code **)(*param_1 + 0x70))(param_1);
  return;
}


