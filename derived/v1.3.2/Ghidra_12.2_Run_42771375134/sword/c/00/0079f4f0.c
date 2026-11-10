/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079f4f0; name: FUN_0079f4f0
 */


void FUN_0079f4f0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x48) != 0) {
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x40);
    iVar2 = (**(code **)(*(long *)*puVar6 + 0x10))();
    if (iVar2 == 1) {
      lVar5 = *(long *)(param_1 + 0x20);
      puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x40) + *(long *)(lVar5 + 0x48) * 0x20);
      puVar4 = puVar6 + 4;
      if (puVar4 != puVar1) {
        do {
          uVar3 = puVar6[4];
          puVar4 = (undefined8 *)*puVar6;
          puVar6[4] = 0;
          *puVar6 = uVar3;
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4);
            (**(code **)(*(long *)puVar6[1] + 0x18))((long *)puVar6[1],puVar4,puVar6[2],puVar6[3]);
          }
          puVar6[2] = puVar6[6];
          puVar6[3] = puVar6[7];
          puVar6[1] = puVar6[5];
          puVar6 = puVar6 + 4;
        } while (puVar1 + -4 != puVar6);
        puVar4 = (undefined8 *)(*(long *)(lVar5 + 0x40) + *(long *)(lVar5 + 0x48) * 0x20);
      }
      puVar6 = (undefined8 *)puVar4[-4];
      puVar4[-4] = 0;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6);
        (**(code **)(*(long *)puVar4[-3] + 0x18))((long *)puVar4[-3],puVar6,puVar4[-2],puVar4[-1]);
      }
      *(long *)(lVar5 + 0x48) = *(long *)(lVar5 + 0x48) + -1;
    }
  }
  return;
}


