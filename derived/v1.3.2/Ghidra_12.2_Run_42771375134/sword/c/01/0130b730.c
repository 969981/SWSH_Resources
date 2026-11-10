/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130b730; name: FUN_0130b730
 */


undefined8 FUN_0130b730(float param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  long local_80;
  long local_78;
  undefined1 *local_70;
  long local_68;
  long local_60;
  
  if (param_3 == 3) {
    return 0;
  }
  fVar8 = 1.5;
  if (param_1 != DAT_01d4c708) {
    fVar8 = param_1;
  }
  if ((*(long *)(param_2 + 0x68) != 0) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715078), iVar2 != 0)) {
      uVar5 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar5;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_02715080) {
        lVar4 = FUN_012d52c0(puVar6 + -10,&local_80);
        puVar1 = PTR_DAT_02727808;
        goto joined_r0x0130b9a8;
      }
    }
  }
  lVar4 = FUN_012d52c0(0,&local_80);
  puVar1 = PTR_DAT_02727808;
joined_r0x0130b9a8:
  PTR_DAT_02727808 = puVar1;
  if (lVar4 != 0) {
    FUN_014bb440(&local_80,puVar1);
    plVar3 = &local_80;
    if (local_68 != 0) {
      plVar3 = &local_78;
    }
    lVar7 = *plVar3;
    if ((local_68 != 0) && (local_80 != 0)) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    }
    local_80 = 0;
    local_78 = -0x340d631b7bddd9bb;
    local_70 = &DAT_01d38550;
    local_68 = 0;
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    FUN_012e06f0(lVar4,lVar7);
    FUN_014bb440(&local_80,puVar1 + 0x18);
    plVar3 = &local_80;
    if (local_68 != 0) {
      plVar3 = &local_78;
    }
    lVar7 = *plVar3;
    if ((local_68 != 0) && (local_80 != 0)) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    }
    local_80 = 0;
    local_78 = -0x340d631b7bddd9bb;
    local_70 = &DAT_01d38550;
    local_68 = 0;
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    FUN_012e06f0(lVar4,lVar7);
    FUN_014bb440(&local_80,puVar1 + (ulong)param_3 * 0x18);
    plVar3 = &local_80;
    if (local_68 != 0) {
      plVar3 = &local_78;
    }
    lVar7 = *plVar3;
    if ((local_68 != 0) && (local_80 != 0)) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    }
    local_80 = 0;
    local_78 = -0x340d631b7bddd9bb;
    local_70 = &DAT_01d38550;
    local_68 = 0;
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    FUN_012e0340(fVar8,lVar4,lVar7);
  }
  FUN_01313e10((ulong)param_3);
  FUN_006cf0a0(&local_80);
  FUN_012d6d40(&local_80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return 1;
}


