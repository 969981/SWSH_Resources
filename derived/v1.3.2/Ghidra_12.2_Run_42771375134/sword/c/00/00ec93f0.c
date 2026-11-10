/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec93f0; name: FUN_00ec93f0
 */


undefined8 FUN_00ec93f0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long local_38;
  
  puVar1 = PTR_DAT_02710798;
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  iVar2 = FUN_01539170(lVar4);
  if ((iVar2 == 0) || (iVar2 = FUN_015391d0(lVar4), iVar2 != 0)) {
    uVar5 = 0;
  }
  else {
    iVar2 = FUN_015391b0(lVar4);
    lVar6 = *(long *)(*(long *)puVar1 + 0x1d8);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    uVar3 = FUN_01521090(lVar6,iVar2);
    FUN_015391f0(lVar4);
    FUN_015ca100(&local_38,0x7664902f29cfbdeb,(long)iVar2,uVar3,0,0);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    uVar5 = 1;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return uVar5;
}


