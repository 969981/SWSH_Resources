/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d70680; name: FUN_00d70680
 */


void FUN_00d70680(int *param_1,int *param_2,char *param_3,char *param_4)

{
  uint uVar1;
  undefined4 local_14;
  
  uVar1 = *param_1 - 2;
  if (uVar1 < 10) {
    local_14 = *(undefined4 *)(PTR_DAT_0271e2b8 + (ulong)uVar1 * 4);
    if (uVar1 == 3 && *param_3 == '\0') {
LAB_00d706e4:
      FUN_00d70680(&local_14);
      return;
    }
  }
  else {
    local_14 = 0xb;
    if ((*param_2 == 2) || (*param_4 == '\0')) goto LAB_00d706e4;
  }
  return;
}


