/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0139cc40; name: FUN_0139cc40
 */


void FUN_0139cc40(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  param_1 = param_1 + (long)param_2 * 0x80;
  pcVar4 = *(code **)(param_1 + 0x88);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (*pcVar4)(param_1 + 0xa0);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0xa0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[3];
    *(undefined8 *)(param_1 + 0x90) = param_3[2];
    *(undefined8 *)(param_1 + 0x98) = uVar3;
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    *(undefined8 *)(param_1 + 0x88) = uVar2;
  }
  return;
}


