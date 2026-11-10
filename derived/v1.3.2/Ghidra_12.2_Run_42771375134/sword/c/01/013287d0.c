/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013287d0; name: FUN_013287d0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_013287d0(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_28;
  
  if (*(char *)(param_1 + 0x99) != '\0') {
    return 1;
  }
  FUN_00c58c00(&local_28,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  lVar7 = local_28;
  FUN_01328670(&local_38,param_1);
  local_40 = *(long *)(*(long *)(*param_2 + 0x68) + 0x58);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  FUN_00c7a130(lVar7,&local_38,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_01328b20(param_1);
  lVar7 = local_28;
  *(undefined1 *)(param_1 + 0x99) = 1;
  FUN_01328670(&local_50,param_1);
  FUN_00c7a1d0(&local_48,lVar7,&local_50);
  if (local_48 == 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  else {
    lVar7 = *(long *)(local_48 + 0x60);
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    else {
      uVar2 = FUN_00a8cbe0(lVar7);
      lVar7 = lVar7 + -0x50;
      if ((uVar2 & 1) == 0) {
        lVar7 = 0;
      }
      *(long *)(param_1 + 0xa0) = lVar7;
      if (local_48 == 0) goto joined_r0x013288f4;
    }
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
joined_r0x013288f4:
  local_48 = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  lVar7 = local_28;
  FUN_01328670(&local_58,param_1);
  FUN_00c7a400(&local_48,lVar7,&local_58);
  if (local_48 == 0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
    puVar8 = *(undefined8 **)(local_48 + 0x60);
    if (puVar8 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar8)(puVar8);
      if (((*PTR_DAT_027150a8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar1 != 0)) {
        uVar6 = FUN_00706e40();
        *(undefined8 *)PTR_DAT_027150b0 = uVar6;
        __cxa_guard_release(PTR_DAT_027150a8);
      }
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)PTR_DAT_027150b0) {
          *(undefined8 **)(param_1 + 0xa8) = puVar8 + -10;
          goto joined_r0x01328a78;
        }
      }
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
joined_r0x01328a78:
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  local_48 = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 == (undefined8 *)0x0)) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)*puVar8)(puVar8);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar6 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar6;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar5 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        if (puVar4 == (undefined8 *)PTR_DAT_02715080) {
          puVar5 = puVar8 + -10;
          goto LAB_01328a00;
        }
        puVar4 = (undefined8 *)*puVar4;
      } while (puVar4 != (undefined8 *)0x0);
      puVar5 = (undefined8 *)0x0;
    }
  }
LAB_01328a00:
  uVar6 = FUN_00ad9f80(puVar5,&local_48);
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return 1;
}


