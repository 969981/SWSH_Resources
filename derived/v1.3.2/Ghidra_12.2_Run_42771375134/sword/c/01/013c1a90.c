/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c1a90; name: FUN_013c1a90
 */


void FUN_013c1a90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long local_28;
  
  if (*(code **)(param_1 + 0x900) != (code *)0x0) {
    (**(code **)(param_1 + 0x900))(param_1 + 0x920);
    pcVar7 = *(code **)(param_1 + 0x908);
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x910) = 0;
      *(undefined8 *)(param_1 + 0x918) = 0;
      *(undefined8 *)(param_1 + 0x900) = 0;
      *(undefined8 *)(param_1 + 0x908) = 0;
      (*pcVar7)(param_1 + 0x920);
    }
    pcVar7 = *(code **)(param_1 + 0x9d8);
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x9e8) = 0;
      *(undefined8 *)(param_1 + 0x9e0) = 0;
      *(undefined8 *)(param_1 + 0x9d8) = 0;
      *(undefined8 *)(param_1 + 0x9d0) = 0;
      (*pcVar7)(param_1 + 0x9f0);
    }
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
      plVar5 = (long *)(**(code **)*puVar8)(puVar8);
      lVar6 = FUN_0132d9a0();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar6) {
          puVar8 = puVar8 + -10;
          goto LAB_013c1b34;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
LAB_013c1b34:
    FUN_01330060(&local_28,puVar8);
    FUN_013c2bd0(local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    pcVar7 = *(code **)(param_1 + 0xd8);
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      (*pcVar7)(param_1 + 0xf0);
    }
    pcVar7 = *(code **)(param_1 + 0x158);
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      (*pcVar7)(param_1 + 0x170);
    }
    puVar4 = PTR_LAB_027290a8;
    puVar3 = PTR_LAB_027290a0;
    puVar2 = PTR_LAB_02729098;
    puVar1 = PTR_LAB_02729090;
    *(long *)(param_1 + 0x170) = param_1;
    *(undefined **)(param_1 + 0x178) = puVar1;
    *(undefined8 *)(param_1 + 0x180) = 0;
    puVar1 = PTR_LAB_027290b0;
    *(undefined **)(param_1 + 0x150) = puVar2;
    *(undefined **)(param_1 + 0x158) = puVar3;
    *(undefined **)(param_1 + 0x160) = puVar4;
    *(undefined **)(param_1 + 0x168) = puVar1;
  }
  return;
}


