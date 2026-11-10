/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013871e0; name: FUN_013871e0
 */


void FUN_013871e0(long param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 == (undefined8 *)0x0)) {
    lVar5 = FUN_01387780(0,&local_50);
  }
  else {
    puVar3 = (undefined8 *)(**(code **)*puVar8)(puVar8);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715078), iVar2 != 0)) {
      uVar7 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar7;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar4 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      do {
        if (puVar3 == (undefined8 *)PTR_DAT_02715080) {
          puVar4 = puVar8 + -10;
          goto LAB_01387264;
        }
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      puVar4 = (undefined8 *)0x0;
    }
LAB_01387264:
    lVar5 = FUN_01387780(puVar4,&local_50);
  }
  if (lVar5 != 0) {
    FUN_013880a0();
    FUN_012dc480(param_1,0);
    if (*(code **)(param_1 + 0x240) != (code *)0x0) {
      (**(code **)(param_1 + 0x240))(param_1 + 0x260);
    }
    local_50 = 0xa568e78105989ab0;
    local_48 = "Play_Camp_Cooking_TrueLove_Throw";
    local_40 = 0x20;
    local_38 = 0;
    FUN_012d6d40(&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    uVar6 = FUN_01383c10(param_1);
    if ((uVar6 & 1) != 0) {
      lVar5 = *(long *)PTR_DAT_02710840 + 0x390;
      uVar1 = FUN_010247a0(lVar5,&DAT_0216c5b8);
      FUN_01023c30(lVar5,uVar1,0);
      uVar1 = FUN_010247a0(lVar5,&DAT_0216c5c0);
      if ((param_2 & 1) == 0) {
        uVar7 = 1;
      }
      else {
        uVar7 = 2;
      }
      FUN_01023770(lVar5,uVar1,uVar7);
    }
  }
  return;
}


