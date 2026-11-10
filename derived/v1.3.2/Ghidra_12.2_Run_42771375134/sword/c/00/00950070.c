/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00950070; name: FUN_00950070
 */


void FUN_00950070(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar2 = FUN_009424e0(param_1,*param_3);
  uVar3 = FUN_009424e0(param_1,param_3[1]);
  uVar4 = FUN_008e1810(uVar2,0x10);
  if ((uVar4 & 1) != 0) {
    uVar2 = FUN_009423e0(param_1);
    FUN_0092c210(uVar2,uVar3);
  }
  uVar2 = FUN_009423b0(param_1);
  FUN_00938490(uVar2,*param_3,param_3[1]);
  uVar4 = FUN_008e55a0(uVar3);
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar1 = FUN_00942580(param_1,param_3[1]);
  uVar2 = FUN_009423b0(param_1);
  FUN_0093a0a0(uVar2,uVar1);
  return;
}


