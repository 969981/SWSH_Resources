/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01487040; name: FUN_01487040
 */


undefined8 FUN_01487040(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  if (*param_1 == 6) {
    lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    uVar1 = FUN_0150a590(lVar4,param_1[2],param_1[1]);
    uVar2 = FUN_0150a5c0(lVar4,param_1[2],param_1[1]);
    uVar3 = FUN_0150aef0(lVar4,uVar1,uVar2);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  else if (*param_1 == 2) {
    lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    uVar1 = FUN_0150b350(lVar4);
    uVar3 = FUN_0150a730(lVar4,uVar1,param_1[1],0);
    if (((((uVar3 & 1) == 0) || (uVar3 = FUN_0150aec0(lVar4,0), (uVar3 & 1) == 0)) &&
        ((uVar3 = FUN_0150a730(lVar4,uVar1,param_1[1],1), (uVar3 & 1) == 0 ||
         (uVar3 = FUN_0150aec0(lVar4,1), (uVar3 & 1) == 0)))) &&
       ((((uVar3 = FUN_0150a730(lVar4,uVar1,param_1[1],2), (uVar3 & 1) == 0 ||
          (uVar3 = FUN_0150aec0(lVar4,2), (uVar3 & 1) == 0)) &&
         ((uVar3 = FUN_0150a730(lVar4,uVar1,param_1[1],3), (uVar3 & 1) == 0 ||
          (uVar3 = FUN_0150aec0(lVar4,3), (uVar3 & 1) == 0)))) &&
        (((uVar3 = FUN_0150a730(lVar4,uVar1,param_1[1],4), (uVar3 & 1) == 0 ||
          (uVar3 = FUN_0150aec0(lVar4,4), (uVar3 & 1) == 0)) &&
         ((uVar3 = FUN_0150a730(lVar4,uVar1,param_1[1],5), (uVar3 & 1) == 0 ||
          (uVar3 = FUN_0150aec0(lVar4,5), (uVar3 & 1) == 0)))))))) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if (!bVar6) {
      return 1;
    }
  }
  return 0;
}


