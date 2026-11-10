/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cf73d0; name: FUN_00cf73d0
 */


void FUN_00cf73d0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_1 + 0x5f8);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x600) = 0;
    *(undefined8 *)(param_1 + 0x608) = 0;
    *(undefined8 *)(param_1 + 0x5f0) = 0;
    *(undefined8 *)(param_1 + 0x5f8) = 0;
    (*pcVar4)(param_1 + 0x610);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x610);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    *(undefined8 *)(param_1 + 0x600) = param_2[2];
    *(undefined8 *)(param_1 + 0x608) = uVar3;
    *(undefined8 *)(param_1 + 0x5f0) = uVar1;
    *(undefined8 *)(param_1 + 0x5f8) = uVar2;
  }
  return;
}


