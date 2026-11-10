/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01466e00; name: FUN_01466e00
 */


void FUN_01466e00(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_1 + 0x6f8);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x700) = 0;
    *(undefined8 *)(param_1 + 0x708) = 0;
    *(undefined8 *)(param_1 + 0x6f0) = 0;
    *(undefined8 *)(param_1 + 0x6f8) = 0;
    (*pcVar4)(param_1 + 0x710);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x710);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    *(undefined8 *)(param_1 + 0x700) = param_2[2];
    *(undefined8 *)(param_1 + 0x708) = uVar3;
    *(undefined8 *)(param_1 + 0x6f0) = uVar1;
    *(undefined8 *)(param_1 + 0x6f8) = uVar2;
  }
  return;
}


