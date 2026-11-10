/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046e730; name: FUN_0046e730
 */


void FUN_0046e730(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_02712a90;
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x20) != 0) {
    puVar4 = puVar2 + (ulong)*(uint *)(param_1 + 0x20) * 6;
    do {
      puVar3 = (undefined8 *)puVar2[3];
      if (*(uint *)(puVar2 + 4) != 0) {
        lVar5 = (ulong)*(uint *)(puVar2 + 4) * 0x30;
        do {
          FUN_0046ec50(puVar3);
          puVar3 = puVar3 + 6;
          lVar5 = lVar5 + -0x30;
        } while (lVar5 != 0);
        puVar3 = (undefined8 *)puVar2[3];
      }
      if (puVar3 != (undefined8 *)0x0) {
        if (*(uint *)(puVar2 + 4) != 0) {
          lVar5 = (ulong)*(uint *)(puVar2 + 4) * 0x30;
          do {
            (**(code **)*puVar3)(puVar3);
            lVar5 = lVar5 + -0x30;
            puVar3 = puVar3 + 6;
          } while (lVar5 != 0);
          puVar3 = (undefined8 *)puVar2[3];
        }
        *(undefined4 *)(puVar2 + 4) = 0;
        FUN_00404870(*(undefined4 *)puVar1,puVar3);
        puVar2[3] = 0;
        *(undefined4 *)((long)puVar2 + 0x24) = 0;
      }
      puVar2 = puVar2 + 6;
    } while (puVar2 != puVar4);
    puVar2 = *(undefined8 **)(param_1 + 0x18);
  }
  if (puVar2 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x20) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 0x20) * 0x30;
      do {
        (**(code **)*puVar2)(puVar2);
        lVar5 = lVar5 + -0x30;
        puVar2 = puVar2 + 6;
      } while (lVar5 != 0);
      puVar2 = *(undefined8 **)(param_1 + 0x18);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}


