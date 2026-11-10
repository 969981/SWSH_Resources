/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0116e630; name: FUN_0116e630
 */


void FUN_0116e630(long param_1)

{
  undefined2 uVar1;
  long lVar2;
  
  lVar2 = FUN_01165170(param_1 + 0x88);
  if (lVar2 == 0) {
    return;
  }
  uVar1 = FUN_0119d1d0(lVar2,0);
  FUN_01164bf0(*(undefined8 *)(param_1 + 0x98),0,uVar1);
  uVar1 = FUN_0119d1d0(lVar2,1);
  FUN_01164bf0(*(undefined8 *)(param_1 + 0x98),2,uVar1);
  uVar1 = FUN_0119d1d0(lVar2,2);
  FUN_01164bf0(*(undefined8 *)(param_1 + 0x98),1,uVar1);
  uVar1 = FUN_0119d1d0(lVar2,3);
  FUN_01164bf0(*(undefined8 *)(param_1 + 0x98),3,uVar1);
  FUN_01164c20(*(undefined8 *)(param_1 + 0x98));
  return;
}


