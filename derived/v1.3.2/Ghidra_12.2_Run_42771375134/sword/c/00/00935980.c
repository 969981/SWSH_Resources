/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00935980; name: FUN_00935980
 */


void FUN_00935980(uint *param_1,uint param_2,uint param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = 0;
  if (uVar2 + 1 < 400) {
    uVar1 = uVar2 + 1;
  }
  param_1[(ulong)uVar2 * 3 + 1] = param_3;
  param_1[(ulong)uVar2 * 3 + 2] = param_2;
  *(undefined1 *)(param_1 + (ulong)uVar2 * 3 + 3) = param_4;
  *(undefined1 *)((long)param_1 + (ulong)uVar2 * 0xc + 0xd) = 0;
  *param_1 = uVar1;
  return;
}


