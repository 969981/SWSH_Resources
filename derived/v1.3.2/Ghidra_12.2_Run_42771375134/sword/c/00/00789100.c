/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00789100; name: FUN_00789100
 */


void FUN_00789100(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_019adbe0(*(undefined8 *)(param_1 + 0x58),param_3);
  *(undefined8 *)(lVar1 + 8) = 0xffffffffffffffff;
  uVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  FUN_00788e50((undefined8 *)(lVar1 + 8),uVar2,param_1 + 0x170);
  return;
}


