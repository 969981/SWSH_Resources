/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df5460; name: FUN_00df5460
 */


void FUN_00df5460(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  long local_78;
  long local_70;
  long local_68;
  long *local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  long local_28;
  
  FUN_00df30e0();
  if (*(long *)(param_1 + 0x110) != -0x340d631b7bddd9bb) {
    plVar4 = *(long **)(param_1 + 0x70);
    (**(code **)(*plVar4 + 0x10))(&local_28,plVar4);
    FUN_00c58c00(&local_38,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
    local_58 = local_38;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    local_60 = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(plVar4[9] + 0x10))(plVar4 + 9);
    }
    FUN_0158f700(&local_58,param_1 + 0x110,&local_60);
    local_50 = CONCAT44(extraout_var,extraout_s0);
    uStack_48 = extraout_var_00;
    if (local_60 != (long *)0x0) {
      (**(code **)(local_60[9] + 0x18))();
      local_60 = (long *)0x0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    local_68 = local_38;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    local_70 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00e7f690(DAT_01d4bf34,&local_68,&local_70,&local_50);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    lVar3 = *(long *)(param_1 + 0x70);
    plVar4 = (long *)(*(code *)**(undefined8 **)(lVar3 + 0x50))((undefined8 *)(lVar3 + 0x50));
    if (((*PTR_DAT_0271ed78 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0271ed78), iVar1 != 0)) {
      uVar2 = FUN_01577390();
      *(undefined8 *)PTR_DAT_0271ed80 = uVar2;
      __cxa_guard_release(PTR_DAT_0271ed78);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_0271ed80) {
        local_78 = lVar3;
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))((long *)(lVar3 + 0x48));
        FUN_00e7fce0(&local_78,&local_50,2,0,1,0);
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        break;
      }
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


