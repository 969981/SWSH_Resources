/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b2bf0; name: FUN_012b2bf0
 */


void FUN_012b2bf0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  iVar1 = FUN_014bf840();
  if (iVar1 != *(int *)(param_1 + 0x280)) {
    lVar2 = FUN_009e3950(auStack_50,*(undefined8 *)(param_1 + 8));
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x278) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x278) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x278) = 0;
    }
    *(long *)(param_1 + 0x278) = lVar2;
    FUN_006cf0a0(auStack_50,&DAT_0268f148);
    FUN_014bc450(lVar2,auStack_50,iVar1,0);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x278) + 0x60);
    if (lVar2 == 0) {
      FUN_0077eb10(0,&DAT_0268f160,*(undefined8 *)(param_1 + 0x290));
    }
    else {
      plVar4 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0077eb10(lVar2,&DAT_0268f160,*(undefined8 *)(param_1 + 0x290));
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    FUN_014c62d0(*(undefined8 *)(param_1 + 0x288),*(undefined8 *)(param_1 + 0x298),
                 *(undefined8 *)(param_1 + 0x290));
    uVar3 = FUN_00786930(*(undefined8 *)(param_1 + 600),"T_save_00");
    FUN_014bf3c0(uVar3,*(undefined8 *)(param_1 + 0x298),iVar1,0);
    *(int *)(param_1 + 0x280) = iVar1;
  }
  return;
}


