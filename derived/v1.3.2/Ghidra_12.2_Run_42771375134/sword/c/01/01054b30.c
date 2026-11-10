/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01054b30; name: FUN_01054b30
 */


void FUN_01054b30(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x940;
  (**(code **)(**(long **)(param_1 + 0x210) + 0x70))(*(long **)(param_1 + 0x210),0,0);
  (**(code **)(**(long **)(param_1 + 0x230) + 0x70))(*(long **)(param_1 + 0x230),0,0);
  lVar2 = *(long *)(param_1 + 0x210);
  if (*(long *)(lVar2 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  lVar2 = *(long *)(param_1 + 0x230);
  if (*(long *)(lVar2 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  FUN_007472f0(*(undefined8 *)(param_1 + 0x210),lVar1,lVar1);
  FUN_007472f0(*(undefined8 *)(param_1 + 0x230),lVar1,lVar1);
  (**(code **)(**(long **)(param_1 + 0x218) + 0x70))(*(long **)(param_1 + 0x218),0,0);
  (**(code **)(**(long **)(param_1 + 0x238) + 0x70))(*(long **)(param_1 + 0x238),0,0);
  lVar2 = *(long *)(param_1 + 0x218);
  if (*(long *)(lVar2 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  lVar2 = *(long *)(param_1 + 0x238);
  if (*(long *)(lVar2 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  FUN_007472f0(*(undefined8 *)(param_1 + 0x218),lVar1,lVar1);
  FUN_007472f0(*(undefined8 *)(param_1 + 0x238),lVar1,lVar1);
  (**(code **)(**(long **)(param_1 + 0x220) + 0x70))(*(long **)(param_1 + 0x220),0,0);
  (**(code **)(**(long **)(param_1 + 0x240) + 0x70))(*(long **)(param_1 + 0x240),0,0);
  lVar2 = *(long *)(param_1 + 0x220);
  if (*(long *)(lVar2 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  lVar2 = *(long *)(param_1 + 0x240);
  if (*(long *)(lVar2 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  FUN_007472f0(*(undefined8 *)(param_1 + 0x220),lVar1,lVar1);
  FUN_007472f0(*(undefined8 *)(param_1 + 0x240),lVar1,lVar1);
  (**(code **)(**(long **)(param_1 + 0x228) + 0x70))(*(long **)(param_1 + 0x228),0,0);
  (**(code **)(**(long **)(param_1 + 0x248) + 0x70))(*(long **)(param_1 + 0x248),0,0);
  lVar2 = *(long *)(param_1 + 0x228);
  if (*(long *)(lVar2 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  lVar2 = *(long *)(param_1 + 0x248);
  if (*(long *)(lVar2 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  FUN_007472f0(*(undefined8 *)(param_1 + 0x228),lVar1,lVar1);
  FUN_007472f0(*(undefined8 *)(param_1 + 0x248),lVar1,lVar1);
  return;
}


