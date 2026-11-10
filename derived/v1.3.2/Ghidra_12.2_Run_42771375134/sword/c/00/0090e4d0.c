/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090e4d0; name: FUN_0090e4d0
 */


void FUN_0090e4d0(long param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
  FUN_00914680(uVar1,0,*param_2);
  uVar1 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
  FUN_00914680(uVar1,1,param_2[1]);
  uVar1 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
  FUN_00914680(uVar1,2,param_2[2]);
  uVar1 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
  FUN_00914680(uVar1,3,param_2[3]);
  uVar1 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
  FUN_00914680(uVar1,4,param_2[4]);
  return;
}


