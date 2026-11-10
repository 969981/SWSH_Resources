/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090d530; name: FUN_0090d530
 */


undefined4 FUN_0090d530(long param_1,char param_2,undefined4 param_3,undefined1 *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  if (*(char *)(param_1 + 0x2a6) != param_2) {
    *param_4 = 1;
    uVar6 = FUN_008f80c0(*(undefined8 *)(param_1 + 0x58));
    uVar7 = 0x20;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0x21;
    }
    return uVar7;
  }
  *param_4 = 0;
  uVar5 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
  uVar5 = FUN_008deea0(uVar5,param_3);
  bVar1 = FUN_008fa2d0(*(undefined8 *)(param_1 + 0x58),uVar5);
  if (0xdb < bVar1) {
    return 0x105;
  }
  iVar3 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58));
  if (iVar3 != 0) {
    return 0x1c;
  }
  cVar2 = FUN_008f2b20(*(undefined8 *)(param_1 + 0x58));
  if (cVar2 != '\0') {
    return 0x1c;
  }
  uVar4 = FUN_009017c0(param_1);
  if (0x4a < uVar4) {
    return 0x1f;
  }
  if (0x32 < uVar4) {
    return 0x1e;
  }
  if (0x19 < uVar4) {
    return 0x1d;
  }
  uVar7 = 0x1b;
  if (uVar4 != 0) {
    uVar7 = 0x1c;
  }
  return uVar7;
}


