/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00914b00; name: FUN_00914b00
 */


void FUN_00914b00(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  long lVar6;
  ulong uVar7;
  
  sVar4 = FUN_00915210(param_2);
  if (*(int *)(param_1 + 0x100) != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      sVar5 = FUN_00915210(*(long *)(param_1 + 0xa0) + lVar6);
      if ((sVar5 != 0) && (sVar5 = FUN_00915210(*(long *)(param_1 + 0xa0) + lVar6), sVar5 == sVar4))
      {
        if (-lVar6 != *(long *)(param_1 + 0xa0)) {
          return;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x2728;
    } while (uVar7 < *(uint *)(param_1 + 0x100));
  }
  FUN_00915180(*(long *)(param_1 + 0xa0) + (ulong)*(uint *)(param_1 + 0x104) * 0x2728,param_2);
  uVar2 = *(uint *)(param_1 + 0x100);
  uVar1 = *(int *)(param_1 + 0x104) + 1;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  *(uint *)(param_1 + 0x104) = uVar1 - uVar3 * uVar2;
  return;
}


