/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00952960; name: FUN_00952960
 */


void FUN_00952960(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_2 = 0;
  uVar1 = FUN_009424e0(param_1,*param_3);
  uVar2 = FUN_008e1600();
  if ((uVar2 & 1) == 0) {
    FUN_008e3e50(uVar1,*(undefined4 *)(param_3 + 4));
    *param_2 = 1;
  }
  return;
}


