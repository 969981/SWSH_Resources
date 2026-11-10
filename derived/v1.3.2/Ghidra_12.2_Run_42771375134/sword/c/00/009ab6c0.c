/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ab6c0; name: FUN_009ab6c0
 */


void FUN_009ab6c0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  bVar3 = FUN_00945f40(param_2);
  uVar2 = (uint)bVar3;
  if ((bVar3 != 0) && (uVar2 != 1)) {
    uVar8 = 0;
    do {
      uVar1 = uVar8 + 1;
      uVar7 = uVar1;
      do {
        lVar5 = FUN_00946110(param_2,uVar8);
        lVar6 = FUN_00946110(param_2,uVar7);
        if ((*(uint *)(lVar5 + 0x54) <= *(uint *)(lVar6 + 0x54)) &&
           ((*(uint *)(lVar5 + 0x54) != *(uint *)(lVar6 + 0x54) ||
            (iVar4 = FUN_008ebfa0(2), iVar4 != 0)))) {
          FUN_00946130(param_2,uVar8,uVar7);
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
      uVar8 = uVar1;
    } while (uVar1 != uVar2 - 1);
  }
  return;
}


