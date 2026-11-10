/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0137e200; name: FUN_0137e200
 */


void FUN_0137e200(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 == (undefined8 *)0x0)) {
    lVar4 = FUN_0137e800(0,&local_40);
  }
  else {
    puVar2 = (undefined8 *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar5 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar5;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      do {
        if (puVar2 == (undefined8 *)PTR_DAT_02715080) {
          puVar3 = puVar6 + -10;
          goto LAB_0137e288;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      puVar3 = (undefined8 *)0x0;
    }
LAB_0137e288:
    lVar4 = FUN_0137e800(puVar3,&local_40);
  }
  if (lVar4 != 0) {
    FUN_0137f9b0(lVar4,*(undefined4 *)(param_1 + 0xb4));
  }
  if (*(int *)(param_1 + 0xb4) == 5) {
    local_40 = 0x9ed7207f4b41d2a3;
    local_38 = "Play_Camp_Cooking_BurnUp";
    local_30 = 0x18;
    local_28 = 0;
    FUN_012d6d40(&local_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


