/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c2e2b0; name: FUN_00c2e2b0
 */


uint FUN_00c2e2b0(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long local_900;
  long local_8f8;
  undefined1 auStack_8f0 [112];
  int local_880 [530];
  long local_38;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar8)(puVar8);
    lVar4 = FUN_00be66c0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        FUN_00c1cec0(&local_8f8,puVar8 + -10);
        goto joined_r0x00c2e370;
      }
    }
  }
  FUN_00c1cec0(&local_8f8,0);
joined_r0x00c2e370:
  if ((local_8f8 == 0) || (puVar8 = *(undefined8 **)(local_8f8 + 0x60), puVar8 == (undefined8 *)0x0)
     ) {
    FUN_00bd9f00(local_880,0);
  }
  else {
    puVar5 = (undefined8 *)(**(code **)*puVar8)(puVar8);
    if (((*PTR_DAT_0271b788 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_0271b788), iVar2 != 0)) {
      uVar7 = FUN_00bd9700();
      *(undefined8 *)PTR_DAT_0271b790 = uVar7;
      __cxa_guard_release(PTR_DAT_0271b788);
    }
    puVar6 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      do {
        if (puVar5 == (undefined8 *)PTR_DAT_0271b790) {
          puVar6 = puVar8 + -10;
          goto LAB_00c2e390;
        }
        puVar5 = (undefined8 *)*puVar5;
      } while (puVar5 != (undefined8 *)0x0);
      puVar6 = (undefined8 *)0x0;
    }
LAB_00c2e390:
    FUN_00bd9f00(local_880,puVar6);
  }
  if (local_8f8 != 0) {
    (**(code **)(*(long *)(local_8f8 + 0x48) + 0x18))();
    local_8f8 = 0;
  }
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar8)(puVar8);
    lVar4 = FUN_00be66c0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        FUN_00c1cec0(&local_900,puVar8 + -10);
        goto joined_r0x00c2e458;
      }
    }
  }
  FUN_00c1cec0(&local_900,0);
joined_r0x00c2e458:
  if ((local_900 == 0) || (puVar8 = *(undefined8 **)(local_900 + 0x60), puVar8 == (undefined8 *)0x0)
     ) {
    FUN_00bdc350(&local_8f8,0);
  }
  else {
    puVar5 = (undefined8 *)(**(code **)*puVar8)(puVar8);
    if (((*PTR_DAT_0271b788 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_0271b788), iVar2 != 0)) {
      uVar7 = FUN_00bd9700();
      *(undefined8 *)PTR_DAT_0271b790 = uVar7;
      __cxa_guard_release(PTR_DAT_0271b788);
    }
    puVar6 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      do {
        if (puVar5 == (undefined8 *)PTR_DAT_0271b790) {
          puVar6 = puVar8 + -10;
          goto LAB_00c2e478;
        }
        puVar5 = (undefined8 *)*puVar5;
      } while (puVar5 != (undefined8 *)0x0);
      puVar6 = (undefined8 *)0x0;
    }
LAB_00c2e478:
    FUN_00bdc350(&local_8f8,puVar6);
  }
  if (local_900 != 0) {
    (**(code **)(*(long *)(local_900 + 0x48) + 0x18))();
    local_900 = 0;
  }
  if (local_880[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if ((local_38 == 0x644) && ((char)local_8f8 != '\0')) {
      uVar1 = FUN_00be1d60(local_880,auStack_8f0,*(undefined8 *)(param_1 + 8));
    }
  }
  return uVar1 & 1;
}


