/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01193d40; name: FUN_01193d40
 */


void FUN_01193d40(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if (*(char *)(param_1 + 0x218) != '\0') {
    return;
  }
  pcVar4 = *(code **)(param_1 + 0x228);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    (*pcVar4)(param_1 + 0x240);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x240);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    *(undefined8 *)(param_1 + 0x230) = param_2[2];
    *(undefined8 *)(param_1 + 0x238) = uVar3;
    *(undefined8 *)(param_1 + 0x220) = uVar1;
    *(undefined8 *)(param_1 + 0x228) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined1 *)(param_1 + 0x218) = 1;
  return;
}


