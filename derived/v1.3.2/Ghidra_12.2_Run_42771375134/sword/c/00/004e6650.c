/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e6650; name: FUN_004e6650
 */


void FUN_004e6650(long param_1,long param_2,long param_3)

{
  long lVar1;
  long local_40;
  ulong local_38;
  
  local_40 = *(long *)(param_2 + 200);
  local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_2 + 0xd0));
  lVar1 = FUN_004e69d0(param_1,param_2,&local_40);
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_004f4570(param_2);
    return;
  }
  if (*(long *)(param_3 + 0x30) == *(long *)(param_2 + 0x30)) {
    FUN_004f4570(param_2);
    FUN_004f4380(param_2,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  local_40 = 0;
  local_38 = 0;
  if (lVar1 != 0) {
    FUN_004e89c0(lVar1,param_2,param_3,&local_40);
    if ((int)local_38 != 0) {
      FUN_004f4570(param_2);
      FUN_004f3bd0(param_2,&local_40,*(undefined4 *)(param_1 + 0xc));
      goto joined_r0x004e6728;
    }
  }
  FUN_004f39f0(param_2);
  FUN_004f41e0(param_2,*(undefined4 *)(param_1 + 0xc));
joined_r0x004e6728:
  if (local_40 != 0) {
    local_38 = local_38 & 0xffffffff00000000;
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
  }
  return;
}


