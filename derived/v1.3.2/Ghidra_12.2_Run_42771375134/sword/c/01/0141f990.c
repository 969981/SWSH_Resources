/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141f990; name: FUN_0141f990
 */


undefined8 * FUN_0141f990(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  pcVar4 = (code *)param_1[1];
  if (pcVar4 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar4)(param_1 + 4);
  }
  if ((code *)param_2[3] != (code *)0x0) {
    (*(code *)param_2[3])(param_2 + 4,param_1 + 4);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar3;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    pcVar4 = (code *)param_2[1];
    if (pcVar4 != (code *)0x0) {
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar4)(param_2 + 4);
    }
  }
  pcVar4 = (code *)param_1[0x11];
  if (pcVar4 != (code *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (*pcVar4)(param_1 + 0x14);
  }
  if ((code *)param_2[0x13] != (code *)0x0) {
    (*(code *)param_2[0x13])(param_2 + 0x14,param_1 + 0x14);
    uVar1 = param_2[0x10];
    uVar2 = param_2[0x11];
    uVar3 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar3;
    param_1[0x10] = uVar1;
    param_1[0x11] = uVar2;
    pcVar4 = (code *)param_2[0x11];
    if (pcVar4 != (code *)0x0) {
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      (*pcVar4)(param_2 + 0x14);
    }
  }
  pcVar4 = (code *)param_1[0x21];
  if (pcVar4 != (code *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    (*pcVar4)(param_1 + 0x24);
  }
  if ((code *)param_2[0x23] != (code *)0x0) {
    (*(code *)param_2[0x23])(param_2 + 0x24,param_1 + 0x24);
    uVar1 = param_2[0x20];
    uVar2 = param_2[0x21];
    uVar3 = param_2[0x23];
    param_1[0x22] = param_2[0x22];
    param_1[0x23] = uVar3;
    param_1[0x20] = uVar1;
    param_1[0x21] = uVar2;
    pcVar4 = (code *)param_2[0x21];
    if (pcVar4 != (code *)0x0) {
      param_2[0x22] = 0;
      param_2[0x23] = 0;
      param_2[0x20] = 0;
      param_2[0x21] = 0;
      (*pcVar4)(param_2 + 0x24);
    }
  }
  pcVar4 = (code *)param_1[0x31];
  if (pcVar4 != (code *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    (*pcVar4)(param_1 + 0x34);
  }
  if ((code *)param_2[0x33] != (code *)0x0) {
    (*(code *)param_2[0x33])(param_2 + 0x34,param_1 + 0x34);
    uVar1 = param_2[0x30];
    uVar2 = param_2[0x31];
    uVar3 = param_2[0x33];
    param_1[0x32] = param_2[0x32];
    param_1[0x33] = uVar3;
    param_1[0x30] = uVar1;
    param_1[0x31] = uVar2;
    pcVar4 = (code *)param_2[0x31];
    if (pcVar4 != (code *)0x0) {
      param_2[0x32] = 0;
      param_2[0x33] = 0;
      param_2[0x30] = 0;
      param_2[0x31] = 0;
      (*pcVar4)(param_2 + 0x34);
    }
  }
  return param_1;
}


