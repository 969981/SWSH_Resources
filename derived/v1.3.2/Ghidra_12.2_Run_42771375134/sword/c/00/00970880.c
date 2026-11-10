/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00970880; name: FUN_00970880
 */


undefined8 FUN_00970880(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 local_54;
  
  uVar7 = 1;
  puVar6 = &DAT_02620268;
  while (puVar6[-4] != param_3) {
    if (*puVar6 == param_3) goto LAB_009708e8;
    uVar1 = uVar7 + 1;
    uVar7 = uVar7 + 2;
    puVar6 = puVar6 + 8;
    if (0x14f < uVar1) {
      return 0;
    }
  }
  uVar7 = uVar7 - 1;
LAB_009708e8:
  uVar2 = FUN_008e0a00(param_2);
  uVar4 = FUN_008daa40(param_1);
  lVar5 = FUN_008dd0a0(uVar4,0,uVar2);
  if (lVar5 != 0) {
    uVar8 = 0;
    do {
      uVar3 = FUN_008dba00(lVar5);
      if (7 < uVar8) {
        return 0;
      }
      if ((uVar3 & 0xffff) == param_3) {
        return 0;
      }
      uVar8 = uVar8 + 1;
      lVar5 = FUN_008dd130(uVar4,lVar5,0);
    } while (lVar5 != 0);
  }
  lVar5 = (**(code **)((uVar7 & 0xffffffff) * 0x10 + 0x2620260))(&local_54);
  if (lVar5 == 0) {
    return 0;
  }
  FUN_008daa50(param_1,0,param_3,1,param_4,uVar2,lVar5,local_54);
  return 1;
}


