/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095fd70; name: FUN_0095fd70
 */


void FUN_0095fd70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_008e0a00(*param_3);
  uVar2 = FUN_00942580(param_1,uVar1);
  if (*(char *)(param_3 + 1) != '\0') {
    uVar3 = FUN_009423b0(param_1);
    FUN_00936080(uVar3,*param_3,0x42e);
  }
  uVar3 = FUN_009423b0(param_1);
  FUN_00938750(uVar3,uVar1);
  uVar3 = FUN_009423b0(param_1);
  FUN_0093a270(uVar3,uVar2);
  return;
}


