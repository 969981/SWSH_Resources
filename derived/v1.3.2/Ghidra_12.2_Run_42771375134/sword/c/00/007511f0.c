/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007511f0; name: FUN_007511f0
 */


undefined8 * FUN_007511f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  *param_1 = *param_2;
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  uVar4 = param_2[1];
  param_2[1] = 0;
  param_1[1] = uVar4;
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  uVar4 = param_2[3];
  param_2[3] = 0;
  param_1[3] = uVar4;
  pcVar5 = (code *)param_1[5];
  if (pcVar5 != (code *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    (*pcVar5)(param_1 + 8);
  }
  if ((code *)param_2[7] != (code *)0x0) {
    (*(code *)param_2[7])(param_2 + 8,param_1 + 8);
    uVar4 = param_2[4];
    uVar1 = param_2[5];
    uVar2 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar2;
    param_1[4] = uVar4;
    param_1[5] = uVar1;
    pcVar5 = (code *)param_2[5];
    if (pcVar5 != (code *)0x0) {
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      (*pcVar5)(param_2 + 8);
    }
  }
  pcVar5 = (code *)param_1[0x15];
  if (pcVar5 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar5)(param_1 + 0x18);
  }
  if ((code *)param_2[0x17] != (code *)0x0) {
    (*(code *)param_2[0x17])(param_2 + 0x18,param_1 + 0x18);
    uVar4 = param_2[0x14];
    uVar1 = param_2[0x15];
    uVar2 = param_2[0x17];
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = uVar2;
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar1;
    pcVar5 = (code *)param_2[0x15];
    if (pcVar5 != (code *)0x0) {
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      (*pcVar5)(param_2 + 0x18);
    }
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  pcVar5 = (code *)param_1[0x27];
  if (pcVar5 != (code *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    (*pcVar5)(param_1 + 0x2a);
  }
  if ((code *)param_2[0x29] != (code *)0x0) {
    (*(code *)param_2[0x29])(param_2 + 0x2a,param_1 + 0x2a);
    uVar4 = param_2[0x26];
    uVar1 = param_2[0x27];
    uVar2 = param_2[0x29];
    param_1[0x28] = param_2[0x28];
    param_1[0x29] = uVar2;
    param_1[0x26] = uVar4;
    param_1[0x27] = uVar1;
    pcVar5 = (code *)param_2[0x27];
    if (pcVar5 != (code *)0x0) {
      param_2[0x28] = 0;
      param_2[0x29] = 0;
      param_2[0x26] = 0;
      param_2[0x27] = 0;
      (*pcVar5)(param_2 + 0x2a);
    }
  }
  uVar3 = *(undefined1 *)(param_2 + 0x38);
  param_1[0x37] = param_2[0x37];
  uVar4 = param_2[0x36];
  *(undefined1 *)(param_1 + 0x38) = uVar3;
  param_1[0x36] = uVar4;
  return param_1;
}


