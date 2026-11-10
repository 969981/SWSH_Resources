/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00788d40; name: FUN_00788d40
 */


void FUN_00788d40(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar6;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  pcVar5 = *(code **)(param_1 + 0x78);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    (*pcVar5)(param_1 + 0x90);
  }
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 0x90);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    *(undefined8 *)(param_1 + 0x70) = uVar4;
    *(undefined8 *)(param_1 + 0x78) = uVar1;
  }
  pcVar5 = *(code **)(param_1 + 0xf8);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    (*pcVar5)(param_1 + 0x110);
  }
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x110);
    uVar4 = *(undefined8 *)(param_2 + 0x90);
    uVar1 = *(undefined8 *)(param_2 + 0x98);
    uVar2 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0x108) = uVar2;
    *(undefined8 *)(param_1 + 0xf0) = uVar4;
    *(undefined8 *)(param_1 + 0xf8) = uVar1;
  }
  uVar4 = FUN_007894a0(*(undefined8 *)(param_1 + 0x68));
  FUN_019ad340(*(undefined8 *)(param_1 + 0x58),uVar4);
  return;
}


