/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01107f10; name: FUN_01107f10
 */


void FUN_01107f10(undefined1 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long local_28;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    local_28 = 0;
    FUN_010ee5c0(0,4);
  }
  else {
    FUN_010edb50(&local_28);
    FUN_010ee5c0(local_28,4);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  pcVar4 = *(code **)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 8) = param_2;
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    (*pcVar4)(param_1 + 0x50);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x50);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[3];
    *(undefined8 *)(param_1 + 0x40) = param_3[2];
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    *(undefined8 *)(param_1 + 0x38) = uVar2;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 1;
  return;
}


