/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e7e80; name: FUN_012e7e80
 */


void FUN_012e7e80(undefined8 param_1,long param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long local_60 [2];
  undefined1 *local_50;
  long local_48;
  long local_40;
  
  if ((*(long *)(param_2 + 0x68) == 0) ||
     (puVar7 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar7 == (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)*puVar7)(puVar7);
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
          puVar4 = puVar7 + -10;
          goto LAB_012e7ef4;
        }
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_012e7ef4:
  uVar5 = FUN_012d52c0(puVar4,local_60);
  FUN_014bb440(local_60,PTR_DAT_02727ac8 + (param_3 & 0xffffffff) * 0x18);
  plVar1 = local_60;
  if (local_48 != 0) {
    plVar1 = local_60 + 1;
  }
  lVar6 = *plVar1;
  if ((local_48 != 0) && (local_60[0] != 0)) {
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
  }
  local_60[0] = 0;
  local_60[1] = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  FUN_012e0780(param_1,uVar5,lVar6);
  return;
}


