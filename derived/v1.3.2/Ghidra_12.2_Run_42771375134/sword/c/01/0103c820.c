/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103c820; name: FUN_0103c820
 */


void FUN_0103c820(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_30 [16];
  
  *(undefined8 *)(param_1 + 0x58) = param_2;
  lVar1 = *(long *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = FUN_0103d530(auStack_30,*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  *(long *)(param_1 + 0x60) = lVar1;
  FUN_0103c0d0(lVar1);
  FUN_012b4040(auStack_30);
  FUN_012b4070(param_1 + 0x68,auStack_30);
  *(undefined4 *)(param_1 + 0x198) = 1;
  return;
}


