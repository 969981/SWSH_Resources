/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d68f20; name: FUN_00d68f20
 */


undefined4 FUN_00d68f20(uint param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0xffffffff) {
    if (param_2 == (int *)0x0) {
      return 0x19;
    }
    uVar1 = 0x18;
    if (*param_2 != 0x2cc) {
      uVar1 = 0x19;
    }
    return uVar1;
  }
  if (param_1 < 4) {
    return *(undefined4 *)(PTR_DAT_0271e268 + (long)(int)param_1 * 4);
  }
  return 0x18;
}


