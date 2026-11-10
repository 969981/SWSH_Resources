/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcec10; name: FUN_00bcec10
 */


long FUN_00bcec10(long param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                 int param_7,int param_8)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long local_68;
  
  if ((param_2 == 0) && (param_3 == param_7)) {
    return 5;
  }
  if (((((param_2 == 1) &&
        (((((uVar4 = param_8 + param_4, param_4 == 0 && (uVar4 != 0)) ||
           (lVar2 = FUN_00bccb30(param_1,1,param_3,0), lVar2 == 0)) ||
          ((iVar1 = FUN_0087afd0(), iVar1 == 0 || (uVar3 = FUN_0087d610(lVar2,2), (uVar3 & 1) != 0))
          )) && (((param_4 < 2 && (1 < uVar4)) ||
                 (((lVar2 = FUN_00bccb30(param_1,1,param_3,1), lVar2 == 0 ||
                   (iVar1 = FUN_0087afd0(), iVar1 == 0)) ||
                  (uVar3 = FUN_0087d610(lVar2,2), (uVar3 & 1) != 0)))))))) &&
       ((((param_4 < 3 && (2 < uVar4)) || (lVar2 = FUN_00bccb30(param_1,1,param_3,2), lVar2 == 0))
        || ((iVar1 = FUN_0087afd0(), iVar1 == 0 || (uVar3 = FUN_0087d610(lVar2,2), (uVar3 & 1) != 0)
            ))))) &&
      (((param_4 < 4 && (3 < uVar4)) ||
       (((lVar2 = FUN_00bccb30(param_1,1,param_3,3), lVar2 == 0 ||
         (iVar1 = FUN_0087afd0(), iVar1 == 0)) || (uVar3 = FUN_0087d610(lVar2,2), (uVar3 & 1) != 0))
       )))) && ((((param_4 < 5 && (4 < uVar4)) ||
                 (lVar2 = FUN_00bccb30(param_1,1,param_3,4), lVar2 == 0)) ||
                ((iVar1 = FUN_0087afd0(), iVar1 == 0 ||
                 (uVar3 = FUN_0087d610(lVar2,2), (uVar3 & 1) != 0)))))) {
    if ((5 < param_4) || (uVar4 < 6)) {
      lVar2 = FUN_00bccb30(param_1,1,param_3,5);
      if (lVar2 == 0) {
        return 1;
      }
      iVar1 = FUN_0087afd0();
      if ((iVar1 != 0) && (uVar3 = FUN_0087d610(lVar2,2), (uVar3 & 1) == 0)) goto LAB_00bcee2c;
    }
    lVar2 = 1;
  }
  else {
LAB_00bcee2c:
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    local_68 = *(long *)(param_1 + 0x78);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    iVar1 = FUN_015073c0(uVar6,param_7,&local_68,1);
    uVar3 = 0;
    if (local_68 != 0) {
      uVar3 = (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    lVar2 = (ulong)(0x1e < (uint)(iVar1 + param_8)) << 2;
    if (((((uint)(iVar1 + param_8) < 0x1f) && (param_2 == 0)) && (lVar2 = 0, param_6 != 0)) &&
       (param_5 != 0)) {
      uVar4 = 0;
      do {
        uVar5 = 0;
        do {
          uVar3 = FUN_00bcd4d0(uVar3,0,param_3,param_4 + uVar5);
          if ((uVar3 & 1) != 0) {
            return 6;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_5);
        uVar4 = uVar4 + 1;
        lVar2 = 0;
        param_4 = param_4 + 6;
      } while (uVar4 < param_6);
    }
  }
  return lVar2;
}


