/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096c060; name: FUN_0096c060
 */


void FUN_0096c060(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00942390();
  uVar1 = FUN_00931980(uVar1,*param_3,*(undefined4 *)(param_3 + 4));
  FUN_00934640(uVar1,param_3 + 8);
  uVar1 = FUN_009423a0(param_1);
  FUN_00916b10(uVar1,0x46,*(undefined4 *)(param_3 + 4),*param_3,*(undefined4 *)(param_3 + 8));
  return;
}


