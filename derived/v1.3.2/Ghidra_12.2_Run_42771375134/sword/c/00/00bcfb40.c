/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcfb40; name: FUN_00bcfb40
 */


void FUN_00bcfb40(int param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  
  if (param_1 == 1) {
    uVar1 = 0;
  }
  else {
    if (param_1 != 0) {
      return;
    }
    uVar1 = param_2 % 6;
    param_2 = param_2 / 6;
  }
  *param_3 = uVar1;
  *param_4 = param_2;
  return;
}


