/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0156d030; name: FUN_0156d030
 */


void FUN_0156d030(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + 0x58) = param_2;
  lVar3 = *param_3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x90);
  *(long *)(param_1 + 0x90) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    lVar3 = *(long *)(param_1 + 0x90);
  }
  uVar2 = FUN_015a97e0(lVar3);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  lVar3 = *param_4;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0xa0);
  *(long *)(param_1 + 0xa0) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  FUN_015a7d70(param_1);
  FUN_0159dae0(param_1);
  FUN_0159e280(param_1);
  FUN_0159e700(param_1);
  FUN_0159f080(param_1);
  FUN_0159f6a0(param_1);
  FUN_0159fe50(param_1);
  FUN_015786c0(param_1);
  FUN_0159ab50(param_1);
  FUN_0156de90(param_1);
  FUN_0156eb40(param_1);
  FUN_01570560(param_1);
  FUN_0156fd90(param_1);
  return;
}


