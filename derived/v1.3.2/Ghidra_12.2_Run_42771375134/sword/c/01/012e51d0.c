/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e51d0; name: FUN_012e51d0
 */


void FUN_012e51d0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  
  *(undefined8 *)(param_1 + 0x768) = param_2[1];
  *(undefined8 *)(param_1 + 0x760) = *param_2;
  puVar4 = (undefined8 *)FUN_012dcaa0();
  uVar1 = puVar4[1];
  *(undefined8 *)(param_1 + 0x770) = *puVar4;
  pcVar5 = *(code **)(param_1 + 0x798);
  *(undefined8 *)(param_1 + 0x778) = uVar1;
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x7a0) = 0;
    *(undefined8 *)(param_1 + 0x7a8) = 0;
    *(undefined8 *)(param_1 + 0x790) = 0;
    *(undefined8 *)(param_1 + 0x798) = 0;
    (*pcVar5)(param_1 + 0x7b0);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x7b0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[3];
    *(undefined8 *)(param_1 + 0x7a0) = param_3[2];
    *(undefined8 *)(param_1 + 0x7a8) = uVar3;
    *(undefined8 *)(param_1 + 0x790) = uVar1;
    *(undefined8 *)(param_1 + 0x798) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x784) = 0;
  return;
}


