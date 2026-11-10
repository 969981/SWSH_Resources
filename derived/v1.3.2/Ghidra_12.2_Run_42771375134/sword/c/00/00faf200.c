/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00faf200; name: FUN_00faf200
 */


void FUN_00faf200(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x48) = *param_2;
  *(undefined8 *)(param_1 + 0x50) = param_2[1];
  *(undefined8 *)(param_1 + 0x58) = param_2[2];
  lVar4 = param_2[3];
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = lVar4;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  uVar1 = param_2[5];
  uVar2 = *(undefined4 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x68) = param_2[4];
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x80) = 1;
  return;
}


