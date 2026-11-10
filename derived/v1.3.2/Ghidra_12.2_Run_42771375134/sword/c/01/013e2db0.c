/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e2db0; name: FUN_013e2db0
 */


void FUN_013e2db0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  long local_60;
  long local_58;
  long local_48;
  
  lVar4 = *(long *)(param_2 + 0x60);
  plVar1 = (long *)(*(code *)**(undefined8 **)(lVar4 + 0x50))((undefined8 *)(lVar4 + 0x50));
  lVar2 = FUN_0132d9a0();
  do {
    local_78 = param_3;
    uStack_70 = param_4;
    if (plVar1 == (long *)0x0) {
      lVar4 = 0;
      local_68 = param_5[1];
      if (local_68 != 0) {
LAB_013e2e24:
        (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
      }
LAB_013e2e30:
      local_60 = param_5[2];
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
      }
      local_58 = *param_5;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      }
      lVar2 = *(long *)(lVar4 + 0x370);
      if (lVar2 == 0) {
        FUN_0133c6b0(param_1,0,param_5[5],&local_78);
      }
      else {
        plVar1 = (long *)(lVar2 + 0x48);
        (**(code **)(*plVar1 + 0x10))(plVar1);
        FUN_0133c6b0(param_1,lVar2,param_5[5],&local_78);
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
      uVar3 = FUN_013e1c30(param_2);
      local_48 = *param_1;
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
      }
      FUN_012cbb60(uVar3,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      }
      return;
    }
    if (plVar1 == (long *)lVar2) {
      local_68 = param_5[1];
      if (local_68 == 0) goto LAB_013e2e30;
      goto LAB_013e2e24;
    }
    plVar1 = (long *)*plVar1;
  } while( true );
}


