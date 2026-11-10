/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009509d0; name: FUN_009509d0
 */


void FUN_009509d0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_2 = 0;
  uVar1 = FUN_009424e0(param_1,*param_3);
  uVar2 = FUN_008e1600();
  if ((uVar2 & 1) == 0) {
    FUN_008e3830(uVar1,*(undefined4 *)(param_3 + 4));
    *param_2 = 1;
  }
  return;
}


