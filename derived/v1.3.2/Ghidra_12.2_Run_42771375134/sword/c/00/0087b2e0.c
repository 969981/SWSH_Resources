/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087b2e0; name: FUN_0087b2e0
 */


void FUN_0087b2e0(long param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  FUN_00864b10(uVar1,uVar2);
  uVar3 = FUN_00864ba0(100);
  if (param_2 <= uVar3) {
    uVar3 = param_2;
  }
  FUN_0086fcc0(*(undefined8 *)(param_1 + 0x98),uVar3);
  FUN_00879500(param_1,0);
  return;
}


