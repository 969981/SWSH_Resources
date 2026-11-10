/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e5a10; name: FUN_012e5a10
 */


undefined8 FUN_012e5a10(float param_1,long param_2,uint param_3,uint param_4)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  long local_90 [2];
  undefined1 *local_80;
  long local_78;
  long local_70;
  
  if (param_3 == 0x15) {
    uVar4 = 0;
  }
  else {
    fVar8 = 1.5;
    if (param_1 != DAT_01d4c708) {
      fVar8 = param_1;
    }
    if ((*(long *)(param_2 + 0x68) != 0) &&
       (puVar6 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
      plVar5 = (long *)(**(code **)*puVar6)(puVar6);
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_02715078), iVar3 != 0)) {
        uVar4 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar4;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)PTR_DAT_02715080) {
          puVar6 = puVar6 + -10;
          goto LAB_012e5ab8;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
LAB_012e5ab8:
    uVar4 = FUN_012d52c0(puVar6,local_90);
    puVar2 = PTR_DAT_02727ac8;
    plVar5 = local_90 + 1;
    FUN_014bb440(local_90,PTR_DAT_02727ac8);
    plVar1 = local_90;
    if (local_78 != 0) {
      plVar1 = plVar5;
    }
    lVar7 = *plVar1;
    if ((local_78 != 0) && (local_90[0] != 0)) {
      (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
    }
    local_90[0] = 0;
    local_90[1] = 0xcbf29ce484222645;
    local_80 = &DAT_01d38550;
    local_78 = 0;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_012e06f0(uVar4,lVar7);
    FUN_014bb440(local_90,puVar2 + 0x18);
    plVar1 = local_90;
    if (local_78 != 0) {
      plVar1 = plVar5;
    }
    lVar7 = *plVar1;
    if ((local_78 != 0) && (local_90[0] != 0)) {
      (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
    }
    local_90[0] = 0;
    local_90[1] = 0xcbf29ce484222645;
    local_80 = &DAT_01d38550;
    local_78 = 0;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_012e06f0(uVar4,lVar7);
    FUN_014bb440(local_90,puVar2 + 0x30);
    plVar1 = local_90;
    if (local_78 != 0) {
      plVar1 = plVar5;
    }
    lVar7 = *plVar1;
    if ((local_78 != 0) && (local_90[0] != 0)) {
      (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
    }
    local_90[0] = 0;
    local_90[1] = 0xcbf29ce484222645;
    local_80 = &DAT_01d38550;
    local_78 = 0;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_012e06f0(uVar4,lVar7);
    FUN_014bb440(local_90,puVar2 + 0x48);
    plVar1 = local_90;
    if (local_78 != 0) {
      plVar1 = plVar5;
    }
    lVar7 = *plVar1;
    if ((local_78 != 0) && (local_90[0] != 0)) {
      (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
    }
    local_90[0] = 0;
    local_90[1] = 0xcbf29ce484222645;
    local_80 = &DAT_01d38550;
    local_78 = 0;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_012e06f0(uVar4,lVar7);
    FUN_014bb440(local_90,puVar2 + 0x60);
    plVar1 = local_90;
    if (local_78 != 0) {
      plVar1 = plVar5;
    }
    lVar7 = *plVar1;
    if ((local_78 != 0) && (local_90[0] != 0)) {
      (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
    }
    local_90[0] = 0;
    local_90[1] = 0xcbf29ce484222645;
    local_80 = &DAT_01d38550;
    local_78 = 0;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_012e06f0(uVar4,lVar7);
    FUN_014bb440(local_90,puVar2 + 0x78);
    plVar1 = local_90;
    if (local_78 != 0) {
      plVar1 = plVar5;
    }
    lVar7 = *plVar1;
    if ((local_78 != 0) && (local_90[0] != 0)) {
      (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
    }
    local_90[0] = 0;
    local_90[1] = 0xcbf29ce484222645;
    local_80 = &DAT_01d38550;
    local_78 = 0;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_012e06f0(uVar4,lVar7);
    FUN_014bb440(local_90,puVar2 + (ulong)param_3 * 0x18);
    plVar5 = local_90;
    if (local_78 != 0) {
      plVar5 = local_90 + 1;
    }
    lVar7 = *plVar5;
    if ((local_78 != 0) && (local_90[0] != 0)) {
      (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
    }
    local_90[0] = 0;
    local_90[1] = 0xcbf29ce484222645;
    local_80 = &DAT_01d38550;
    local_78 = 0;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_012e0340(fVar8,uVar4,lVar7);
    if ((param_4 & 1) == 0) {
      FUN_01313df0((ulong)param_3);
      FUN_006cf0a0(local_90);
      FUN_012d6f60(local_90,param_2);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


