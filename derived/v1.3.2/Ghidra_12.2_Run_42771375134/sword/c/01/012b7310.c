/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b7310; name: FUN_012b7310
 */


byte FUN_012b7310(long param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long local_38;
  
  FUN_012ba360(&local_38);
  uVar4 = FUN_012c3620(local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_012ba510(&local_38);
  iVar5 = FUN_012f7310(local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  uVar6 = FUN_0087eca0(*(undefined8 *)(param_1 + 0x58));
  uVar7 = FUN_0087ed40(*(undefined8 *)(param_1 + 0x58));
  uVar8 = FUN_012c3630(uVar4,uVar6,uVar7);
  if ((uVar8 & 1) == 0) {
    cVar2 = FUN_0087eca0(*(undefined8 *)(param_1 + 0x58));
    if (cVar2 == '\a') {
      bVar1 = true;
    }
    else {
      cVar2 = FUN_0087ed40(*(undefined8 *)(param_1 + 0x58));
      bVar1 = cVar2 == '\a';
    }
    bVar3 = iVar5 - 5U < 2 & bVar1;
  }
  else {
    bVar3 = 1;
  }
  return bVar3;
}


