/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120e870; name: FUN_0120e870
 */


undefined1  [16] FUN_0120e870(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  int local_50 [4];
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(long *)PTR_DAT_02716710 == 0) {
    return ZEXT816(0);
  }
  plVar1 = (long *)FUN_01962a40();
  if (plVar1 == (long *)0x0) {
    return ZEXT816(0);
  }
  lVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  uVar3 = 0;
  uVar4 = 0;
  if ((param_2 != 0) && (lVar2 != 0)) {
    FUN_018c4570(local_50,lVar2,&local_40);
    uVar3 = 0;
    if (local_50[0] == 0) {
      uVar3 = local_40;
    }
    uVar4 = 0;
    if (local_50[0] == 0) {
      uVar4 = uStack_38;
    }
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}


