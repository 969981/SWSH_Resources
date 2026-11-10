/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00887ad0; name: FUN_00887ad0
 */


void FUN_00887ad0(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  
  iVar6 = FUN_00886130(param_2);
  sVar4 = FUN_00886140(param_2);
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      iVar7 = FUN_00886130(*(long *)(param_1 + 8) + lVar8);
      if ((iVar7 == iVar6) && (sVar5 = FUN_00886140(*(long *)(param_1 + 8) + lVar8), sVar5 == sVar4)
         ) {
        return;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x30;
    } while (uVar9 < *(uint *)(param_1 + 0x28));
  }
  FUN_008863f0(param_2,*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x2c) * 0x30);
  uVar2 = *(uint *)(param_1 + 0x28);
  uVar1 = *(int *)(param_1 + 0x2c) + 1;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1 - uVar3 * uVar2;
  return;
}


