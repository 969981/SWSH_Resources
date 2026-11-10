/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c04c90; name: FUN_00c04c90
 */


void FUN_00c04c90(long param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  *(bool *)(param_1 + 0xb70) = *(int *)(param_1 + 0xb48) != *param_2;
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0xb58) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0xb50) = uVar2;
  *(undefined8 *)(param_1 + 0xb48) = uVar1;
  lVar4 = *(long *)(param_2 + 6);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0xb60);
  *(long *)(param_1 + 0xb60) = lVar4;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(int *)(param_1 + 0xb68) = param_2[8];
  FUN_00c028c0(param_1,*(undefined4 *)(param_1 + 0xb48));
  return;
}


