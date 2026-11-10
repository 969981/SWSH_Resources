/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01087590; name: FUN_01087590
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01087590(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_30;
  long local_28;
  
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  (**(code **)(**(long **)(param_1 + 0x88) + 0x10))(&local_30);
  local_28 = local_30;
  local_30 = 0;
  FUN_00c7a630(local_60,uVar4,&local_28);
  if (local_60[0] == (undefined **)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)local_60[0][0xc];
    if (puVar5 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)(**(code **)*puVar5)(puVar5);
      if (((*PTR_DAT_02719750 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_02719750), iVar1 != 0)) {
        uVar4 = FUN_00706e40();
        *(undefined8 *)PTR_DAT_02719758 = uVar4;
        __cxa_guard_release(PTR_DAT_02719750);
      }
      if (puVar2 != (undefined8 *)0x0) {
        do {
          if (puVar2 == (undefined8 *)PTR_DAT_02719758) {
            puVar5 = puVar5 + -10;
            goto joined_r0x010876dc;
          }
          puVar2 = (undefined8 *)*puVar2;
        } while (puVar2 != (undefined8 *)0x0);
      }
    }
    puVar5 = (undefined8 *)0x0;
joined_r0x010876dc:
    if (local_60[0] != (undefined **)0x0) {
      (**(code **)(local_60[0][9] + 0x18))();
    }
  }
  local_60[0] = (undefined **)0x0;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (puVar5 != (undefined8 *)0x0) {
    local_60[0] = &PTR_LAB_0266e6b8;
    local_40 = local_60;
    FUN_00c68760(puVar5,local_60);
    if (local_60 == local_40) {
      pcVar3 = (code *)(*local_40)[4];
    }
    else {
      if (local_40 == (undefined ***)0x0) {
        return;
      }
      pcVar3 = (code *)(*local_40)[5];
    }
    (*pcVar3)();
  }
  return;
}


