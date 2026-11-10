/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007dd970; name: FUN_007dd970
 */


void FUN_007dd970(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (*(long *)(param_1 + 0xf8) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0xf0);
    uVar3 = (**(code **)(*(long *)*puVar6 + 0x40))();
    if ((uVar3 & 1) == 0) {
      iVar2 = (**(code **)(*(long *)*puVar6 + 0x10))();
    }
    else {
      iVar2 = (**(code **)(*(long *)*puVar6 + 0x18))();
    }
    if (iVar2 == 1) {
      puVar5 = (undefined8 *)*puVar6;
      *puVar6 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        (**(code **)(*(long *)puVar6[1] + 0x18))((long *)puVar6[1],puVar5,puVar6[2],puVar6[3]);
      }
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0xf0) + *(long *)(param_1 + 0xf8) * 0x20);
      puVar5 = puVar6 + 4;
      if (puVar5 != puVar1) {
        do {
          uVar4 = puVar6[4];
          puVar5 = (undefined8 *)*puVar6;
          puVar6[4] = 0;
          *puVar6 = uVar4;
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5);
            (**(code **)(*(long *)puVar6[1] + 0x18))((long *)puVar6[1],puVar5,puVar6[2],puVar6[3]);
          }
          puVar6[2] = puVar6[6];
          puVar6[3] = puVar6[7];
          puVar6[1] = puVar6[5];
          puVar6 = puVar6 + 4;
        } while (puVar1 + -4 != puVar6);
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0xf0) + *(long *)(param_1 + 0xf8) * 0x20);
      }
      puVar6 = (undefined8 *)puVar5[-4];
      puVar5[-4] = 0;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6);
        (**(code **)(*(long *)puVar5[-3] + 0x18))((long *)puVar5[-3],puVar6,puVar5[-2],puVar5[-1]);
      }
      *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + -1;
      return;
    }
  }
  return;
}


