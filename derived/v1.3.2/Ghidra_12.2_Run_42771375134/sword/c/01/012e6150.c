/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e6150; name: FUN_012e6150
 */


void FUN_012e6150(long param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long local_68;
  long local_60;
  long local_58;
  undefined1 *local_50;
  long local_48;
  long local_40;
  
  *(undefined1 *)(param_1 + 0x850) = 1;
  FUN_014bb440(&local_60,PTR_DAT_02727ac8 + 0x198);
  plVar6 = &local_60;
  if (local_48 != 0) {
    plVar6 = &local_58;
  }
  lVar7 = *plVar6;
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
          goto LAB_012e6248;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      puVar3 = (undefined8 *)0x0;
    }
  }
LAB_012e6248:
  uVar4 = FUN_012d52c0(puVar3,&local_60);
  FUN_012e0340(0,uVar4,lVar7);
  uVar5 = FUN_012b7040(*(undefined8 *)(param_1 + 0x710),0x1b);
  if ((uVar5 & 1) == 0) {
    FUN_0131e480(param_1 + 0x450,0xc);
  }
  *(undefined4 *)(param_1 + 0x508) = 3;
  local_68 = *param_2;
  if (local_68 == 0) {
    FUN_012e5e70(param_1,&local_68);
  }
  else {
    plVar6 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_012e5e70(param_1,&local_68);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    local_68 = 0;
  }
  FUN_0131c9c0(param_1 + 0x370);
  return;
}


