/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0146a780; name: FUN_0146a780
 */


void FUN_0146a780(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_1 + 0x7b8);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x7c0) = 0;
    *(undefined8 *)(param_1 + 0x7c8) = 0;
    *(undefined8 *)(param_1 + 0x7b0) = 0;
    *(undefined8 *)(param_1 + 0x7b8) = 0;
    (*pcVar4)(param_1 + 2000);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 2000);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    *(undefined8 *)(param_1 + 0x7c0) = param_2[2];
    *(undefined8 *)(param_1 + 0x7c8) = uVar3;
    *(undefined8 *)(param_1 + 0x7b0) = uVar1;
    *(undefined8 *)(param_1 + 0x7b8) = uVar2;
  }
  return;
}


