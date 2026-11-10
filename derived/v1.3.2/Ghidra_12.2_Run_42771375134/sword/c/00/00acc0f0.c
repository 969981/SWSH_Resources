/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00acc0f0; name: FUN_00acc0f0
 */


void FUN_00acc0f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 auStack_70 [48];
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar1 = FUN_00acb970(param_1,param_2,auStack_70);
  if ((uVar1 & 1) == 0) {
    uVar2 = 4;
    if (2 < (int)param_2 - 7U) {
      uVar2 = 5;
    }
    uVar1 = FUN_00acb970(param_1,uVar2,auStack_70);
    if ((uVar1 & 1) == 0) {
      *param_3 = 0;
      param_3[1] = 0;
      return;
    }
  }
  param_3[1] = uStack_38;
  *param_3 = local_40;
  return;
}


