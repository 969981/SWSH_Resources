/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f3e80; name: FUN_006f3e80
 */


void FUN_006f3e80(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0x80);
  puVar4 = (undefined8 *)*puVar1;
  while (puVar1 != puVar4) {
    puVar2 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar2;
  }
  puVar2 = (undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 **)(param_1 + 0x80) = puVar1;
  *(undefined8 **)(param_1 + 0x88) = puVar1;
  puVar4 = (undefined8 *)*puVar2;
  while (puVar2 != puVar4) {
    puVar3 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar3;
  }
  puVar3 = (undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 **)(param_1 + 0x98) = puVar2;
  *(undefined8 **)(param_1 + 0xa0) = puVar2;
  puVar4 = (undefined8 *)*puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    do {
      while (puVar5 = (undefined8 *)puVar4[1], puVar5 != (undefined8 *)0x0) {
        puVar4[1] = puVar5[2];
        puVar5[2] = puVar4;
        puVar4 = puVar5;
        if (puVar5 == (undefined8 *)0x0) goto LAB_006f3f2c;
      }
      puVar5 = (undefined8 *)puVar4[2];
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4 = puVar5;
    } while (puVar5 != (undefined8 *)0x0);
LAB_006f3f2c:
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 **)(param_1 + 0xb8) = puVar3;
    *(undefined8 **)(param_1 + 0xc0) = puVar3;
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x98);
  while (puVar2 != puVar4) {
    puVar3 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar3;
  }
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x80);
  while (puVar1 != puVar4) {
    puVar2 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar2;
  }
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_006f4f80(param_1 + 0x18);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 4));
  return;
}


