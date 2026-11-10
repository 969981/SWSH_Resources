/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01053390; name: FUN_01053390
 */


void FUN_01053390(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x148);
  *(undefined8 *)(lVar2 + 0x250) = *param_3;
  *(undefined8 *)(lVar2 + 600) = param_3[1];
  *(undefined8 *)(lVar2 + 0x260) = param_3[2];
  lVar3 = param_3[3];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar2 + 0x268);
  *(long *)(lVar2 + 0x268) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(param_2 + 0x148);
  *(undefined8 *)(lVar3 + 0x270) = *param_4;
  *(undefined8 *)(lVar3 + 0x278) = param_4[1];
  *(undefined8 *)(lVar3 + 0x280) = param_4[2];
  lVar2 = param_4[3];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar3 + 0x288);
  *(long *)(lVar3 + 0x288) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined4 *)(*(long *)(param_2 + 0x148) + 0x290) = param_1;
  return;
}


