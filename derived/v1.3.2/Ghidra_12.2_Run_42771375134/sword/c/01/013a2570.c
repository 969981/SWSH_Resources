/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a2570; name: FUN_013a2570
 */


void FUN_013a2570(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_1 + 0x9e8);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x9f0) = 0;
    *(undefined8 *)(param_1 + 0x9f8) = 0;
    *(undefined8 *)(param_1 + 0x9e0) = 0;
    *(undefined8 *)(param_1 + 0x9e8) = 0;
    (*pcVar4)(param_1 + 0xa00);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0xa00);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    *(undefined8 *)(param_1 + 0x9f0) = param_2[2];
    *(undefined8 *)(param_1 + 0x9f8) = uVar3;
    *(undefined8 *)(param_1 + 0x9e0) = uVar1;
    *(undefined8 *)(param_1 + 0x9e8) = uVar2;
  }
  pcVar4 = *(code **)(param_1 + 0xa68);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xa70) = 0;
    *(undefined8 *)(param_1 + 0xa78) = 0;
    *(undefined8 *)(param_1 + 0xa60) = 0;
    *(undefined8 *)(param_1 + 0xa68) = 0;
    (*pcVar4)(param_1 + 0xa80);
  }
  if ((code *)param_2[0x12] != (code *)0x0) {
    (*(code *)param_2[0x12])(param_2 + 0x14,param_1 + 0xa80);
    uVar1 = param_2[0x10];
    uVar2 = param_2[0x11];
    uVar3 = param_2[0x13];
    *(undefined8 *)(param_1 + 0xa70) = param_2[0x12];
    *(undefined8 *)(param_1 + 0xa78) = uVar3;
    *(undefined8 *)(param_1 + 0xa60) = uVar1;
    *(undefined8 *)(param_1 + 0xa68) = uVar2;
  }
  return;
}


