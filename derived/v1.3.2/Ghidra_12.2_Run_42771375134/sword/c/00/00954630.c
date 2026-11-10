/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00954630; name: FUN_00954630
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_00954630(undefined8 param_1,undefined8 param_2,uint param_3)

{
  ushort *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ushort *puVar7;
  undefined4 local_34;
  
  if ((param_3 & 0xffff) != 0) {
    uVar6 = 1;
    puVar7 = &DAT_0261cd50;
    if ((uint)DAT_0261cd40 != (param_3 & 0xffff)) {
      do {
        if (0xc4 < uVar6) {
          return 0;
        }
        if ((uint)*puVar7 == (param_3 & 0xffff)) {
          iVar5 = (int)uVar6;
          goto joined_r0x009546ac;
        }
        uVar6 = uVar6 + 2;
        puVar1 = puVar7 + 8;
        puVar7 = puVar7 + 0x10;
      } while ((uint)*puVar1 != (param_3 & 0xffff));
    }
    uVar6 = uVar6 - 1;
    iVar5 = (int)uVar6;
joined_r0x009546ac:
    if ((iVar5 != 0xc4) &&
       (lVar4 = (*(code *)(&PTR_FUN_0261cd48)[(uVar6 & 0xffffffff) * 2])(&local_34), lVar4 != 0)) {
      uVar2 = FUN_008e1720(param_2,0xc);
      uVar3 = FUN_008e0a00(param_2);
      lVar4 = FUN_008daa50(param_1,5,param_3,8,uVar2,uVar3,lVar4,local_34);
      if (lVar4 == 0) {
        return 0;
      }
      FUN_008db880(lVar4);
      FUN_008db870(lVar4,6,1);
      return lVar4;
    }
  }
  return 0;
}


