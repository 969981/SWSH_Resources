/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcb370; name: FUN_00bcb370
 */


undefined8 FUN_00bcb370(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_64 [28];
  long local_48;
  
  FUN_011ffb60(&local_48,*(undefined8 *)PTR_DAT_02718f20);
  if ((local_48 == 0) ||
     (auVar6 = FUN_0120e870(*(undefined8 *)PTR_DAT_027185f8,*(undefined8 *)(local_48 + 0x28)),
     auVar6._0_8_ == 0 && auVar6._8_8_ == 0)) {
    uVar3 = 0;
  }
  else {
    FUN_01524ba0(*(undefined8 *)(local_48 + 8),auStack_64);
    FUN_0077d520(*(undefined8 *)(param_1 + 0x638),auStack_64);
    lVar4 = *(long *)(param_1 + 0x2b0);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(lVar4 + 0x2e0);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x638);
    uVar1 = FUN_01524bf0(*(undefined8 *)(local_48 + 8));
    uVar2 = FUN_01524c00(*(undefined8 *)(local_48 + 8));
    FUN_014c9110(lVar5,param_2,uVar3,uVar1,uVar2);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    uVar3 = 1;
  }
  return uVar3;
}


