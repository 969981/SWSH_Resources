/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00948c60; name: FUN_00948c60
 */


void FUN_00948c60(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  FUN_00942390();
  uVar1 = FUN_009319a0();
  uVar2 = FUN_00913dd0(uVar1,*param_3);
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar1 = FUN_009424e0(param_1,*param_3);
  uVar3 = FUN_009423b0(param_1);
  FUN_0093a080(uVar3,*param_3,0);
  uVar3 = FUN_009423b0(param_1);
  FUN_00936080(uVar3,uVar1,0x5f6);
  return;
}


