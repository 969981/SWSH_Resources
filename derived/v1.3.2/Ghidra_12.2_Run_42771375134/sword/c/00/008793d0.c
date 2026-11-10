/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008793d0; name: FUN_008793d0
 */


void FUN_008793d0(long param_1,ulong param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar3 = FUN_0087ac70();
  uVar4 = FUN_0087afd0(param_1);
  uVar7 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
  if ((((uVar7 & 1) == 0) ||
      (uVar7 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98)), (uVar7 & 1) == 0)) ||
     (cVar2 = FUN_00868a40(*(undefined8 *)(param_1 + 0x98)), 1 < (byte)(cVar2 - 1U))) {
    uVar5 = FUN_008799b0(param_1);
    FUN_0086ef10(*(undefined8 *)(param_1 + 0x98),uVar5);
  }
  else {
    uVar5 = FUN_00879ff0(param_1);
    FUN_0086ef10(*(undefined8 *)(param_1 + 0x98),uVar5);
  }
  if ((uVar4 == 0) && ((param_2 & 1) != 0)) {
    return;
  }
  uVar6 = FUN_0087ac70(param_1);
  uVar1 = uVar6;
  if (uVar4 <= uVar6) {
    uVar1 = uVar4;
  }
  if (uVar3 <= uVar6) {
    uVar1 = (uVar4 - uVar3) + uVar6;
  }
  FUN_0086f040(*(undefined8 *)(param_1 + 0x98),uVar1);
  return;
}


