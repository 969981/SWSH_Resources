/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c2730; name: FUN_006c2730
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c2730(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[4] = param_6;
  param_1[5] = 0xbf800000bf800000;
  uVar2 = _UNK_01d4b588;
  uVar1 = _DAT_01d4b580;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}


