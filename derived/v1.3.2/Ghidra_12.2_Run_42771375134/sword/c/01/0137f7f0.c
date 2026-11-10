/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0137f7f0; name: FUN_0137f7f0
 */


void FUN_0137f7f0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long local_28;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 == (undefined8 *)0x0)) {
    puVar3 = (undefined8 *)0x0;
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
          goto LAB_0137f854;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      puVar3 = (undefined8 *)0x0;
    }
  }
LAB_0137f854:
  lVar4 = FUN_01381490(puVar3,&local_40);
  local_40 = 0xe6c93cf815400fd6;
  pcStack_38 = "Camp_FirePower";
  local_30 = 0xe;
  local_28 = 0;
  if (*(float *)(lVar4 + 0x7c) <= 0.0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (*(float *)(lVar4 + 0xb0) / *(float *)(lVar4 + 0x7c)) * DAT_01d4c6b8;
  }
  FUN_008962a0(fVar7,*(long *)PTR_DAT_027107a8 + 0x108,&local_40,0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


