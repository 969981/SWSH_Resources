/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e69e0; name: FUN_012e69e0
 */


void FUN_012e69e0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long local_60;
  long local_58;
  undefined1 *local_50;
  long local_48;
  long local_40;
  
  FUN_014bb440(&local_60,PTR_DAT_02727ac8 + 0x150);
  plVar5 = &local_60;
  if (local_48 != 0) {
    plVar5 = &local_58;
  }
  lVar7 = *plVar5;
  if ((local_48 != 0) && (local_60 != 0)) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  local_60 = 0;
  local_58 = -0x340d631b7bddd9bb;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 == (undefined8 *)0x0)) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)*puVar8)(puVar8);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar4 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar4;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      do {
        if (puVar2 == (undefined8 *)PTR_DAT_02715080) {
          puVar3 = puVar8 + -10;
          goto LAB_012e6acc;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      puVar3 = (undefined8 *)0x0;
    }
  }
LAB_012e6acc:
  uVar4 = FUN_012d52c0(puVar3,&local_60);
  FUN_012e0340(0,uVar4,lVar7);
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar5 = (long *)(**(code **)*puVar8)(puVar8);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar4 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar4;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)PTR_DAT_02715080) {
        puVar8 = puVar8 + -10;
        goto LAB_012e6b34;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_012e6b34:
  FUN_00c754c0(puVar8,&local_60);
  FUN_0069c550(0);
  if (*(int *)(param_1 + 0x500) == 2) {
    lVar7 = *(long *)(param_1 + 0x838);
    *(undefined8 *)(param_1 + 0x838) = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    *(undefined4 *)(param_1 + 0x844) = 0;
  }
  *(undefined4 *)(param_1 + 0x500) = 5;
  if ((((*(long *)(param_1 + 0x4f8) != 0) && (uVar6 = FUN_0130e360(), (uVar6 & 1) != 0)) &&
      (*(uint *)(param_1 + 0x500) < 5)) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0x500) & 0x1f) & 0x1aU) != 0)) {
    *(undefined4 *)(param_1 + 0x844) = 0x41f00000;
  }
  local_60 = 0x16debc0f88d5c007;
  local_58 = 0;
  FUN_0130fad0(param_1,&local_60,0);
  return;
}


