/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01418ad0; name: FUN_01418ad0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01418ad0(long param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_28;
  
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_01418be0:
    uVar5 = FUN_014193b0();
  }
  else {
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar8 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar8)(puVar8);
      plVar4 = (long *)FUN_01410b60();
      if (plVar3 == (long *)0x0) goto LAB_01418be0;
      do {
        if (plVar3 == plVar4) {
          puVar8 = puVar8 + -10;
          uVar5 = FUN_014193b0();
          goto joined_r0x01418cf4;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
    uVar5 = FUN_014193b0();
  }
  puVar8 = (undefined8 *)0x0;
joined_r0x01418cf4:
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    FUN_0140e5a0(&local_60,puVar8);
    cVar1 = FUN_013298c0(local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    FUN_01623370(&local_28,*(undefined8 *)PTR_DAT_02710848);
    if ((local_28 == 0) || (puVar8 = *(undefined8 **)(local_28 + 0x60), puVar8 == (undefined8 *)0x0)
       ) {
      lVar7 = *(long *)(param_1 + 0x78);
      local_38 = *(long *)(lVar7 + 0x18);
    }
    else {
      plVar3 = (long *)(**(code **)*puVar8)(puVar8);
      if (((*PTR_DAT_02729910 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_02729910), iVar2 != 0)) {
        uVar6 = FUN_0156a3b0();
        *(undefined8 *)PTR_DAT_02729918 = uVar6;
        __cxa_guard_release(PTR_DAT_02729910);
      }
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)PTR_DAT_02729918) {
          puVar8 = puVar8 + -10;
          lVar7 = *(long *)(param_1 + 0x78);
          local_38 = *(long *)(lVar7 + 0x18);
          goto joined_r0x01418d0c;
        }
      }
      lVar7 = *(long *)(param_1 + 0x78);
      local_38 = *(long *)(lVar7 + 0x18);
    }
    puVar8 = (undefined8 *)0x0;
joined_r0x01418d0c:
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
      lVar7 = *(long *)(param_1 + 0x78);
    }
    local_40 = *(long *)(lVar7 + 0x10);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
    }
    FUN_01623840(puVar8,&local_38,&local_40,cVar1 != '\0');
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    local_60 = -0x787d317fc6715e2e;
    local_58 = "Play_UI_Camp_Licence";
    local_50 = 0x14;
    local_48 = 0;
    FUN_012d6d40(&local_60);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    uVar6 = 1;
  }
  return uVar6;
}


