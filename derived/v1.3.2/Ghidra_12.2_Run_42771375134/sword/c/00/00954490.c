/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00954490; name: FUN_00954490
 */


void FUN_00954490(undefined8 param_1,undefined8 param_2)

{
  ushort *puVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ushort *puVar7;
  undefined4 local_34;
  
  uVar3 = FUN_008e2d10(param_2);
  uVar6 = 1;
  puVar7 = &DAT_0261cd50;
  if ((uint)DAT_0261cd40 != (uVar3 & 0xffff)) {
    do {
      if (0xc4 < uVar6) {
        return;
      }
      if ((uint)*puVar7 == (uVar3 & 0xffff)) {
        if ((int)uVar6 == 0xc4) {
          return;
        }
        goto LAB_00954514;
      }
      uVar6 = uVar6 + 2;
      puVar1 = puVar7 + 8;
      puVar7 = puVar7 + 0x10;
    } while ((uint)*puVar1 != (uVar3 & 0xffff));
  }
  uVar6 = uVar6 - 1;
  if ((int)uVar6 != 0xc4) {
LAB_00954514:
    lVar5 = (*(code *)(&PTR_FUN_0261cd48)[(uVar6 & 0xffffffff) * 2])(&local_34);
    if (lVar5 != 0) {
      uVar2 = FUN_008e1720(param_2,0xc);
      uVar4 = FUN_008e0a00(param_2);
      FUN_008daa50(param_1,5,uVar3,8,uVar2,uVar4,lVar5,local_34);
    }
  }
  return;
}


