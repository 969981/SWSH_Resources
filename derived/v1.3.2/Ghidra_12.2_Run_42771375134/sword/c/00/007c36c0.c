/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c36c0; name: FUN_007c36c0
 */


void FUN_007c36c0(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  nn::os::GenerateRandomBytes(&local_28,8);
  uVar3 = *(ulong *)(param_1 + 0x348);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = local_28 / uVar3;
  }
  nn::os::SleepThread(((local_28 - uVar2 * uVar3) + *(long *)(param_1 + 0x340)) * 1000000);
  lVar4 = *(long *)PTR_DAT_02716b80;
  if (lVar4 != 0) {
    iVar1 = FUN_007c2bc0(lVar4);
    if (iVar1 == 0) {
      FUN_007c3840(param_1);
      return;
    }
    uVar2 = FUN_007c2c90(lVar4);
    if ((uVar2 & 1) == 0) {
      local_2c = 3;
      FUN_007c2c00(lVar4,&local_2c);
    }
  }
  return;
}


