/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fe310; name: FUN_004fe310
 */


undefined8 FUN_004fe310(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  
  *(undefined8 *)(param_1 + 0x360) = param_3;
  uVar1 = *(uint *)(param_2 + 8);
  uVar2 = *(uint *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  if (uVar3 * uVar2 != 0) {
    uVar4 = 0x200;
    do {
      uVar7 = uVar4;
      uVar4 = uVar7 << 1;
    } while (uVar7 < *(uint *)(param_2 + 0xc));
    do {
      bVar5 = uVar7 < *(uint *)(param_2 + 0x14);
      uVar7 = uVar7 << 1;
    } while (bVar5);
    FUN_004fe3f0(param_1 + 0x38);
  }
  if (*(int *)(param_1 + 0x344) == -1) {
    if (*(int *)(param_2 + 8) != 0) {
      return 2;
    }
  }
  else {
    if (uVar2 <= uVar1) {
      lVar6 = FUN_00404690(*(undefined4 *)PTR_DAT_027137c8,(ulong)uVar3 << 3);
      *(long *)(param_1 + 0x28) = lVar6;
      if (lVar6 == 0) {
        return 2;
      }
      *(uint *)(param_1 + 0x34) = uVar3;
    }
    *(undefined1 *)(param_1 + 0x358) = *(undefined1 *)(param_2 + 0x48);
  }
  return 1;
}


