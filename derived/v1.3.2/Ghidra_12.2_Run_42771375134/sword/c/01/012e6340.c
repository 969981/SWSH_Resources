/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e6340; name: FUN_012e6340
 */


void FUN_012e6340(long param_1,long *param_2)

{
  char **ppcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long local_68;
  char *local_60;
  char *local_58;
  undefined1 *local_50;
  long local_48;
  long local_40;
  
  *(undefined1 *)(param_1 + 0x850) = 1;
  FUN_014bb440(&local_60,PTR_DAT_02727ac8 + 0x198);
  ppcVar1 = &local_60;
  if (local_48 != 0) {
    ppcVar1 = &local_58;
  }
  pcVar8 = *ppcVar1;
  if ((local_48 != 0) && (local_60 != (char *)0x0)) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  local_60 = (char *)0x0;
  local_58 = (char *)0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 == (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)*puVar9)(puVar9);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715078), iVar2 != 0)) {
      uVar5 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar5;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar4 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      do {
        if (puVar3 == (undefined8 *)PTR_DAT_02715080) {
          puVar4 = puVar9 + -10;
          goto LAB_012e6438;
        }
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_012e6438:
  uVar5 = FUN_012d52c0(puVar4,&local_60);
  FUN_012e0340(0,uVar5,pcVar8);
  uVar6 = FUN_012b7040(*(undefined8 *)(param_1 + 0x710),0x1e);
  if ((uVar6 & 1) == 0) {
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0)) {
      plVar7 = (long *)(**(code **)*puVar9)(puVar9);
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_02715078), iVar2 != 0)) {
        uVar5 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar5;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)PTR_DAT_02715080) {
          puVar9 = puVar9 + -10;
          goto LAB_012e64b0;
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
LAB_012e64b0:
    FUN_00c754c0(puVar9,&local_60);
    FUN_0069c550(0x3f000000);
    FUN_0131e480(param_1 + 0x450,0xc);
  }
  *(undefined4 *)(param_1 + 0x508) = 5;
  local_68 = *param_2;
  if (local_68 == 0) {
    FUN_012e5e70(param_1,&local_68);
  }
  else {
    plVar7 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_012e5e70(param_1,&local_68);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    local_68 = 0;
  }
  FUN_0131c9f0(param_1 + 0x370);
  local_60 = (char *)0x28b101e60452d163;
  local_58 = "@Play_Camp_Sleep";
  local_50 = (undefined1 *)0x10;
  local_48 = 0;
  FUN_012d6f60(&local_60,param_1);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


