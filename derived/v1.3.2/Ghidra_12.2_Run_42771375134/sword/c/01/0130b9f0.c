/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130b9f0; name: FUN_0130b9f0
 */


void FUN_0130b9f0(long param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long local_60 [2];
  undefined1 *local_50;
  long local_48;
  long local_40;
  
  if (param_2 != 3) {
    if ((*(long *)(param_1 + 0x68) == 0) ||
       (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 == (undefined8 *)0x0)) {
      lVar5 = FUN_012d52c0(0,local_60);
    }
    else {
      puVar3 = (undefined8 *)(**(code **)*puVar8)(puVar8);
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_02715078), iVar2 != 0)) {
        uVar6 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar6;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      puVar4 = (undefined8 *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        do {
          if (puVar3 == (undefined8 *)PTR_DAT_02715080) {
            puVar4 = puVar8 + -10;
            goto LAB_0130ba7c;
          }
          puVar3 = (undefined8 *)*puVar3;
        } while (puVar3 != (undefined8 *)0x0);
        puVar4 = (undefined8 *)0x0;
      }
LAB_0130ba7c:
      lVar5 = FUN_012d52c0(puVar4,local_60);
    }
    if (lVar5 != 0) {
      FUN_014bb440(local_60,PTR_DAT_02727808 + (ulong)param_2 * 0x18);
      plVar1 = local_60;
      if (local_48 != 0) {
        plVar1 = local_60 + 1;
      }
      lVar7 = *plVar1;
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
      FUN_012e06f0(lVar5,lVar7);
    }
  }
  return;
}


