/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d7220; name: FUN_006d7220
 */


void FUN_006d7220(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint local_24;
  
  uVar2 = nn::oe::TryPopNotificationMessage(&local_24);
  if ((uVar2 & 1) != 0) {
    switch(local_24) {
    case 4:
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x68);
      for (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x60); puVar3 != puVar1;
          puVar3 = puVar3 + 1) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      break;
    case 0xf:
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x50) + 0x68);
      for (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x50) + 0x60); puVar3 != puVar1;
          puVar3 = puVar3 + 1) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      break;
    case 0x10:
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x58) + 0x68);
      for (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x58) + 0x60); puVar3 != puVar1;
          puVar3 = puVar3 + 1) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      break;
    case 0x1e:
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x68);
      for (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60); puVar3 != puVar1;
          puVar3 = puVar3 + 1) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      break;
    case 0x1f:
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x68);
      for (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60); puVar3 != puVar1;
          puVar3 = puVar3 + 1) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
    }
  }
  return;
}


