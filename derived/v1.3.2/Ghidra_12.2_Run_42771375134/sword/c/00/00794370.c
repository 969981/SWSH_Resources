/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00794370; name: FUN_00794370
 */


void FUN_00794370(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 0x108);
  *(long *)(param_1 + 0x108) = lVar6;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  pcVar5 = *(code **)(param_1 + 0x118);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    (*pcVar5)(param_1 + 0x130);
  }
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 0x130);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x128) = uVar3;
    *(undefined8 *)(param_1 + 0x110) = uVar1;
    *(undefined8 *)(param_1 + 0x118) = uVar2;
  }
  pcVar5 = *(code **)(param_1 + 0x198);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    (*pcVar5)(param_1 + 0x1b0);
  }
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x1b0);
    uVar1 = *(undefined8 *)(param_2 + 0x90);
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0x1a8) = uVar3;
    *(undefined8 *)(param_1 + 400) = uVar1;
    *(undefined8 *)(param_1 + 0x198) = uVar2;
  }
  return;
}


