/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bce410; name: FUN_00bce410
 */


uint FUN_00bce410(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  lVar2 = FUN_00bccb30();
  if ((lVar2 == 0) || (uVar1 = FUN_008787f0(), (uVar1 & 0xffff) == 0)) {
    uVar1 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar4 == 0) {
      FUN_01520760(0,uVar1,1,1);
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_01520760(lVar4,uVar1,1,1);
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    uVar3 = FUN_00878810(lVar2,0);
    uVar1 = FUN_00bce510(uVar3,lVar2,0);
    FUN_00bce610(param_1,param_2,param_3,param_4);
    uVar1 = uVar1 & 1;
  }
  return uVar1;
}


