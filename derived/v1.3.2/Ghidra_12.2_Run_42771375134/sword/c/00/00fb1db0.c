/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb1db0; name: FUN_00fb1db0
 */


void FUN_00fb1db0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_1 + 0xd8);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar4)(param_1 + 0xf0);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0xf0);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    *(undefined8 *)(param_1 + 0xe0) = param_2[2];
    *(undefined8 *)(param_1 + 0xe8) = uVar3;
    *(undefined8 *)(param_1 + 0xd0) = uVar1;
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
  }
  pcVar4 = *(code **)(param_1 + 0x158);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    (*pcVar4)(param_1 + 0x170);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x170);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[3];
    *(undefined8 *)(param_1 + 0x160) = param_3[2];
    *(undefined8 *)(param_1 + 0x168) = uVar3;
    *(undefined8 *)(param_1 + 0x150) = uVar1;
    *(undefined8 *)(param_1 + 0x158) = uVar2;
  }
  return;
}


