/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00902050; name: FUN_00902050
 */


undefined8 FUN_00902050(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 local_38;
  
  uVar6 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x800);
  if ((uVar6 & 1) != 0) {
    FUN_008e0a00(param_2);
    cVar1 = FUN_008f94e0();
    if (cVar1 == '\x01') goto LAB_009020c4;
  }
  iVar2 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58));
  if ((iVar2 == 2) && (cVar1 = FUN_009141d0(*(undefined8 *)(param_1 + 0x340)), cVar1 == '\0')) {
    return 0;
  }
  uVar6 = FUN_008e1600(param_2);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_008e28f0(param_2,0xc);
    if ((uVar6 & 1) != 0) {
      if (param_3 == 0) {
        return 1;
      }
      uVar3 = FUN_008e0a00(param_2);
      FUN_009186d0(param_3,uVar3);
      return 1;
    }
    uVar6 = FUN_008e1810(param_2,0x1a);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_008e1810(param_2,0x1b);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      uVar4 = FUN_008e4c50(param_2);
      uVar3 = FUN_008e4c80(param_2);
      uVar5 = FUN_008e0a00(param_2);
      if (param_3 == 0) {
        return 1;
      }
    }
    else {
      local_38 = FUN_008e1aa0(param_2,0x1a);
      uVar4 = FUN_008ed2f0(&local_38);
      uVar3 = FUN_008e4c80(param_2);
      uVar5 = FUN_008e0a00(param_2);
      if (param_3 == 0) {
        return 1;
      }
      uVar4 = uVar4 & 0xffff;
    }
    FUN_00918500(param_3,uVar5,uVar4,uVar3,0,0);
    return 1;
  }
LAB_009020c4:
  if (param_3 != 0) {
    FUN_009186c0(param_3);
  }
  return 1;
}


