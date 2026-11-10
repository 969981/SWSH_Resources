/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a1fd0; name: FUN_009a1fd0
 */


uint FUN_009a1fd0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long local_28;
  
  FUN_00942380();
  uVar4 = FUN_008f89e0();
  if ((uVar4 & 1) != 0) {
    FUN_008e0a00(param_2);
    cVar1 = FUN_008f94e0();
    FUN_00942380(param_1);
    cVar2 = FUN_008f98a0();
    if (cVar1 == cVar2) {
      uVar5 = FUN_008e1680(param_2);
      FUN_00942380(param_1);
      FUN_008f8fc0(&local_28);
      uVar3 = FUN_01524c50(local_28,uVar5);
      uVar3 = uVar3 ^ 1;
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
      goto LAB_009a2064;
    }
  }
  uVar3 = 0;
LAB_009a2064:
  return uVar3 & 1;
}


