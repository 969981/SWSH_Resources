/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095ed00; name: FUN_0095ed00
 */


void FUN_0095ed00(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined2 uVar1;
  ulong uVar2;
  
  uVar2 = FUN_0095ee10(param_4);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00915360(*(undefined8 *)(param_1 + 8));
  }
  else {
    uVar1 = *(undefined2 *)(param_4 + 2);
  }
  *(undefined2 *)(param_3 + 0xc) = uVar1;
  FUN_00938ac0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}


