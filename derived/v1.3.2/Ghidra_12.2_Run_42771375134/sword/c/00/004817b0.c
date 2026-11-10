/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004817b0; name: FUN_004817b0
 */


void FUN_004817b0(uint param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long local_18;
  
  uVar1 = 0x42480000;
  if (((param_1 ^ 0xffffffff) & 0x7f800000) != 0) {
    uVar1 = (ulong)param_1;
  }
  local_18 = param_3;
  FUN_00481800(param_2,*(undefined8 *)(param_3 + 0x270),*(undefined4 *)(param_3 + 0x278),
               uVar1 | (ulong)*(uint *)(param_3 + 0x274) << 0x20,*(undefined4 *)(param_3 + 0x278),
               &local_18);
  return;
}


