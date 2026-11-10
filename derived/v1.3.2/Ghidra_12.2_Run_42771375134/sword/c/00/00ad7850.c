/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad7850; name: FUN_00ad7850
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00ad7850(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined **local_70;
  undefined8 uStack_68;
  int *local_60;
  undefined ***local_50;
  long local_38;
  int local_24;
  
  local_24 = param_3;
  if (*(int *)(param_1 + 0x4d0) == 1) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_38 = *(long *)(param_1 + 0x510);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    FUN_00c7a630(&local_70,lVar2,&local_38);
    if (local_70 == (undefined **)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)local_70[0xc];
      if (puVar6 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)(**(code **)*puVar6)(puVar6);
        if (((*PTR_DAT_02719750 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_02719750), iVar1 != 0)) {
          uVar4 = FUN_00706e40();
          *(undefined8 *)PTR_DAT_02719758 = uVar4;
          __cxa_guard_release(PTR_DAT_02719750);
        }
        for (; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
          if (puVar3 == (undefined8 *)PTR_DAT_02719758) {
            puVar6 = puVar6 + -10;
            goto joined_r0x00ad79a8;
          }
        }
      }
      puVar6 = (undefined8 *)0x0;
joined_r0x00ad79a8:
      if (local_70 != (undefined **)0x0) {
        (**(code **)(local_70[9] + 0x18))();
      }
    }
    local_70 = (undefined **)0x0;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
    if (puVar6 != (undefined8 *)0x0) {
      local_70 = &PTR_LAB_02634288;
      local_60 = &local_24;
      uStack_68 = param_2;
      local_50 = &local_70;
      FUN_00c68760(puVar6,&local_70);
      if (&local_70 == local_50) {
        pcVar5 = (code *)(*local_50)[4];
      }
      else {
        if (local_50 == (undefined ***)0x0) {
          return;
        }
        pcVar5 = (code *)(*local_50)[5];
      }
      (*pcVar5)();
    }
  }
  else if ((*(int *)(param_1 + 0x4d0) == 2) && (lVar2 = FUN_00ad6c60(param_1), lVar2 != 0)) {
    if (param_3 == 2) {
      FUN_0105dc00(lVar2,param_2);
      return;
    }
    if (param_3 == 1) {
      FUN_0105dbf0(lVar2,param_2);
      return;
    }
    if (param_3 == 0) {
      FUN_0105dbe0(lVar2,param_2);
      return;
    }
  }
  return;
}


