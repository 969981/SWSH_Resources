/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00914350; name: FUN_00914350
 */


void FUN_00914350(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = (param_2 & 0xff) * 8;
  lVar2 = (param_3 & 0xff) * 8;
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  return;
}


