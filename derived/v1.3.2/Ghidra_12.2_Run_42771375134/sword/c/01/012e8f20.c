/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e8f20; name: FUN_012e8f20
 */


undefined8 FUN_012e8f20(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = FUN_01321f40(*(undefined8 *)(param_1 + 0x4e0));
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  uVar1 = FUN_012b6590(*(undefined8 *)(param_1 + 0x710));
  if (0xdb < uVar1) {
    puVar4 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    uVar3 = *puVar4;
    uVar7 = puVar4[1];
    do {
      uVar8 = uVar3 ^ uVar7;
      iVar6 = (int)uVar7;
      iVar5 = (int)uVar3;
      uVar7 = uVar8 >> 0x1b | uVar8 << 0x25;
      uVar3 = uVar8 ^ (uVar3 >> 0x28 | uVar3 << 0x18) ^ uVar8 << 0x10;
      uVar1 = iVar5 + iVar6 & 0x7f;
    } while (99 < uVar1);
    *puVar4 = uVar3;
    puVar4[1] = uVar7;
    if ((uVar1 < 10) && (*(char *)(param_1 + 0x851) == '\0')) {
      *(undefined1 *)(param_1 + 0x851) = 1;
      uVar2 = FUN_0131e700(param_1 + 0x450,4);
      FUN_0131e620(param_1 + 0x450,uVar2);
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x851) = 0;
  FUN_01322430(*(undefined8 *)(param_1 + 0x4e0));
  FUN_013100e0(param_1,0xa43769c1d2e74412);
  FUN_012e9020(param_1,0);
  return 1;
}


