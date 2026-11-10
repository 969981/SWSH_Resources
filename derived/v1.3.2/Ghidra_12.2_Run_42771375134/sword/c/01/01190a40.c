/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01190a40; name: FUN_01190a40
 */


void FUN_01190a40(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if (*(char *)(param_1 + 0x248) != '\0') {
    return;
  }
  pcVar4 = *(code **)(param_1 + 600);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    (*pcVar4)(param_1 + 0x270);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x270);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    *(undefined8 *)(param_1 + 0x260) = param_2[2];
    *(undefined8 *)(param_1 + 0x268) = uVar3;
    *(undefined8 *)(param_1 + 0x250) = uVar1;
    *(undefined8 *)(param_1 + 600) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined1 *)(param_1 + 0x248) = 1;
  return;
}


