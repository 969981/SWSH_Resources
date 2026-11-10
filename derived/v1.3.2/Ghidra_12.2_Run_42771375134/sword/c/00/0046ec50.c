/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046ec50; name: FUN_0046ec50
 */


void FUN_0046ec50(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_02712a90;
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x20) != 0) {
    puVar4 = puVar3 + (ulong)*(uint *)(param_1 + 0x20) * 6;
    do {
      puVar2 = (undefined8 *)puVar3[3];
      if (*(uint *)(puVar3 + 4) != 0) {
        lVar5 = (ulong)*(uint *)(puVar3 + 4) * 0x30;
        plVar6 = puVar2 + 3;
        do {
          if (*plVar6 != 0) {
            *(undefined4 *)(plVar6 + 1) = 0;
            FUN_00404870(*(undefined4 *)puVar1);
            *plVar6 = 0;
            *(undefined4 *)((long)plVar6 + 0xc) = 0;
          }
          lVar5 = lVar5 + -0x30;
          plVar6 = plVar6 + 6;
        } while (lVar5 != 0);
        puVar2 = (undefined8 *)puVar3[3];
      }
      if (puVar2 != (undefined8 *)0x0) {
        if (*(uint *)(puVar3 + 4) != 0) {
          lVar5 = (ulong)*(uint *)(puVar3 + 4) * 0x30;
          do {
            (**(code **)*puVar2)(puVar2);
            lVar5 = lVar5 + -0x30;
            puVar2 = puVar2 + 6;
          } while (lVar5 != 0);
          puVar2 = (undefined8 *)puVar3[3];
        }
        *(undefined4 *)(puVar3 + 4) = 0;
        FUN_00404870(*(undefined4 *)puVar1,puVar2);
        puVar3[3] = 0;
        *(undefined4 *)((long)puVar3 + 0x24) = 0;
      }
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar4);
    puVar3 = *(undefined8 **)(param_1 + 0x18);
  }
  if (puVar3 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x20) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 0x20) * 0x30;
      do {
        (**(code **)*puVar3)(puVar3);
        lVar5 = lVar5 + -0x30;
        puVar3 = puVar3 + 6;
      } while (lVar5 != 0);
      puVar3 = *(undefined8 **)(param_1 + 0x18);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar3);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}


