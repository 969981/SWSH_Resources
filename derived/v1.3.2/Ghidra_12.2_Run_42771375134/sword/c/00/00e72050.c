/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e72050; name: FUN_00e72050
 */


void FUN_00e72050(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  for (plVar4 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0); plVar4 != plVar1; plVar4 = plVar4 + 1)
  {
    lVar6 = *plVar4;
    uVar3 = FUN_015b5320(lVar6 + 0x50);
    if (((uVar3 & 1) != 0) && (uVar3 = (**(code **)(*(long *)*plVar4 + 0x88))(), (uVar3 & 1) == 0))
    goto LAB_00e720c0;
  }
  lVar6 = 0;
LAB_00e720c0:
  FUN_00c58c00(&local_38,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  local_58 = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  local_60 = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48));
  }
  FUN_01590610(&local_58,&local_60);
  local_50 = CONCAT44(extraout_var,extraout_s0);
  uStack_48 = extraout_var_00;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_68);
  local_70 = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  local_78 = local_68;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN_00e7f690(DAT_01d4bf34,&local_70,&local_78,&local_50);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  lVar6 = *(long *)(param_1 + 0x70);
  plVar4 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x50))((undefined8 *)(lVar6 + 0x50));
  if (((*PTR_DAT_0271ed78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0271ed78), iVar2 != 0))
  {
    uVar5 = FUN_01577390();
    *(undefined8 *)PTR_DAT_0271ed80 = uVar5;
    __cxa_guard_release(PTR_DAT_0271ed78);
  }
  do {
    if (plVar4 == (long *)0x0) {
LAB_00e72264:
      *(undefined1 *)(param_1 + 0x2d0) = 1;
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      return;
    }
    if (plVar4 == (long *)PTR_DAT_0271ed80) {
      local_80 = lVar6;
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48));
      FUN_00e7fce0(&local_80,&local_50,2,0,1,0);
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        local_80 = 0;
      }
      goto LAB_00e72264;
    }
    plVar4 = (long *)*plVar4;
  } while( true );
}


