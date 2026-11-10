/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141d090; name: FUN_0141d090
 */


undefined8 * FUN_0141d090(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar2;
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  uVar2 = param_2[2];
  param_2[2] = 0;
  param_1[2] = uVar2;
  uVar2 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[4] = uVar4;
  uVar2 = param_2[7];
  uVar4 = param_2[8];
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[8] = uVar4;
  uVar4 = param_2[0xd];
  uVar2 = param_2[0xc];
  uVar1 = *(undefined4 *)(param_2 + 0xe);
  param_1[0xb] = param_2[0xb];
  pcVar3 = (code *)param_1[0x11];
  *(undefined4 *)(param_1 + 0xe) = uVar1;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar4;
  if (pcVar3 != (code *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (*pcVar3)(param_1 + 0x14);
  }
  if ((code *)param_2[0x13] != (code *)0x0) {
    (*(code *)param_2[0x13])(param_2 + 0x14,param_1 + 0x14);
    uVar2 = param_2[0x10];
    uVar4 = param_2[0x11];
    uVar5 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar5;
    param_1[0x10] = uVar2;
    param_1[0x11] = uVar4;
    pcVar3 = (code *)param_2[0x11];
    if (pcVar3 != (code *)0x0) {
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      (*pcVar3)(param_2 + 0x14);
    }
  }
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  pcVar3 = (code *)param_1[0x25];
  if (pcVar3 != (code *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    (*pcVar3)(param_1 + 0x28);
  }
  if ((code *)param_2[0x27] != (code *)0x0) {
    (*(code *)param_2[0x27])(param_2 + 0x28,param_1 + 0x28);
    uVar2 = param_2[0x24];
    uVar4 = param_2[0x25];
    uVar5 = param_2[0x27];
    param_1[0x26] = param_2[0x26];
    param_1[0x27] = uVar5;
    param_1[0x24] = uVar2;
    param_1[0x25] = uVar4;
    pcVar3 = (code *)param_2[0x25];
    if (pcVar3 != (code *)0x0) {
      param_2[0x26] = 0;
      param_2[0x27] = 0;
      param_2[0x24] = 0;
      param_2[0x25] = 0;
      (*pcVar3)(param_2 + 0x28);
    }
  }
  pcVar3 = (code *)param_1[0x35];
  if (pcVar3 != (code *)0x0) {
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    (*pcVar3)(param_1 + 0x38);
  }
  if ((code *)param_2[0x37] != (code *)0x0) {
    (*(code *)param_2[0x37])(param_2 + 0x38,param_1 + 0x38);
    uVar2 = param_2[0x34];
    uVar4 = param_2[0x35];
    uVar5 = param_2[0x37];
    param_1[0x36] = param_2[0x36];
    param_1[0x37] = uVar5;
    param_1[0x34] = uVar2;
    param_1[0x35] = uVar4;
    pcVar3 = (code *)param_2[0x35];
    if (pcVar3 != (code *)0x0) {
      param_2[0x36] = 0;
      param_2[0x37] = 0;
      param_2[0x34] = 0;
      param_2[0x35] = 0;
      (*pcVar3)(param_2 + 0x38);
    }
  }
  pcVar3 = (code *)param_1[0x45];
  if (pcVar3 != (code *)0x0) {
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    (*pcVar3)(param_1 + 0x48);
  }
  if ((code *)param_2[0x47] != (code *)0x0) {
    (*(code *)param_2[0x47])(param_2 + 0x48,param_1 + 0x48);
    uVar2 = param_2[0x44];
    uVar4 = param_2[0x45];
    uVar5 = param_2[0x47];
    param_1[0x46] = param_2[0x46];
    param_1[0x47] = uVar5;
    param_1[0x44] = uVar2;
    param_1[0x45] = uVar4;
    pcVar3 = (code *)param_2[0x45];
    if (pcVar3 != (code *)0x0) {
      param_2[0x46] = 0;
      param_2[0x47] = 0;
      param_2[0x44] = 0;
      param_2[0x45] = 0;
      (*pcVar3)(param_2 + 0x48);
    }
  }
  pcVar3 = (code *)param_1[0x55];
  if (pcVar3 != (code *)0x0) {
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    (*pcVar3)(param_1 + 0x58);
  }
  if ((code *)param_2[0x57] != (code *)0x0) {
    (*(code *)param_2[0x57])(param_2 + 0x58,param_1 + 0x58);
    uVar2 = param_2[0x54];
    uVar4 = param_2[0x55];
    uVar5 = param_2[0x57];
    param_1[0x56] = param_2[0x56];
    param_1[0x57] = uVar5;
    param_1[0x54] = uVar2;
    param_1[0x55] = uVar4;
    pcVar3 = (code *)param_2[0x55];
    if (pcVar3 != (code *)0x0) {
      param_2[0x56] = 0;
      param_2[0x57] = 0;
      param_2[0x54] = 0;
      param_2[0x55] = 0;
      (*pcVar3)(param_2 + 0x58);
    }
  }
  pcVar3 = (code *)param_1[0x65];
  if (pcVar3 != (code *)0x0) {
    param_1[0x66] = 0;
    param_1[0x67] = 0;
    param_1[100] = 0;
    param_1[0x65] = 0;
    (*pcVar3)(param_1 + 0x68);
  }
  if ((code *)param_2[0x67] != (code *)0x0) {
    (*(code *)param_2[0x67])(param_2 + 0x68,param_1 + 0x68);
    uVar2 = param_2[100];
    uVar4 = param_2[0x65];
    uVar5 = param_2[0x67];
    param_1[0x66] = param_2[0x66];
    param_1[0x67] = uVar5;
    param_1[100] = uVar2;
    param_1[0x65] = uVar4;
    pcVar3 = (code *)param_2[0x65];
    if (pcVar3 != (code *)0x0) {
      param_2[0x66] = 0;
      param_2[0x67] = 0;
      param_2[100] = 0;
      param_2[0x65] = 0;
      (*pcVar3)(param_2 + 0x68);
    }
  }
  pcVar3 = (code *)param_1[0x75];
  if (pcVar3 != (code *)0x0) {
    param_1[0x76] = 0;
    param_1[0x77] = 0;
    param_1[0x74] = 0;
    param_1[0x75] = 0;
    (*pcVar3)(param_1 + 0x78);
  }
  if ((code *)param_2[0x77] != (code *)0x0) {
    (*(code *)param_2[0x77])(param_2 + 0x78,param_1 + 0x78);
    uVar2 = param_2[0x74];
    uVar4 = param_2[0x75];
    uVar5 = param_2[0x77];
    param_1[0x76] = param_2[0x76];
    param_1[0x77] = uVar5;
    param_1[0x74] = uVar2;
    param_1[0x75] = uVar4;
    pcVar3 = (code *)param_2[0x75];
    if (pcVar3 != (code *)0x0) {
      param_2[0x76] = 0;
      param_2[0x77] = 0;
      param_2[0x74] = 0;
      param_2[0x75] = 0;
      (*pcVar3)(param_2 + 0x78);
    }
  }
  uVar2 = param_2[0x85];
  param_1[0x87] = param_2[0x87];
  param_1[0x85] = uVar2;
  uVar2 = param_2[0x84];
  param_1[0x86] = param_2[0x86];
  param_1[0x84] = uVar2;
  uVar2 = *(undefined8 *)((long)param_2 + 0x455);
  param_1[0x89] = param_2[0x89];
  uVar4 = param_2[0x88];
  uVar5 = param_2[0x8a];
  *(undefined8 *)((long)param_1 + 0x455) = uVar2;
  param_1[0x8a] = uVar5;
  param_1[0x88] = uVar4;
  if (param_1[0x8c] != 0) {
    (**(code **)(*(long *)(param_1[0x8c] + 0x48) + 0x18))();
    param_1[0x8c] = 0;
  }
  uVar2 = param_2[0x8c];
  param_2[0x8c] = 0;
  param_1[0x8c] = uVar2;
  pcVar3 = (code *)param_1[0x8f];
  if (pcVar3 != (code *)0x0) {
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    param_1[0x8e] = 0;
    param_1[0x8f] = 0;
    (*pcVar3)(param_1 + 0x92);
  }
  if ((code *)param_2[0x91] != (code *)0x0) {
    (*(code *)param_2[0x91])(param_2 + 0x92,param_1 + 0x92);
    uVar2 = param_2[0x8e];
    uVar4 = param_2[0x8f];
    uVar5 = param_2[0x91];
    param_1[0x90] = param_2[0x90];
    param_1[0x91] = uVar5;
    param_1[0x8e] = uVar2;
    param_1[0x8f] = uVar4;
    pcVar3 = (code *)param_2[0x8f];
    if (pcVar3 != (code *)0x0) {
      param_2[0x90] = 0;
      param_2[0x91] = 0;
      param_2[0x8e] = 0;
      param_2[0x8f] = 0;
      (*pcVar3)(param_2 + 0x92);
    }
  }
  *(undefined1 *)(param_1 + 0x9e) = *(undefined1 *)(param_2 + 0x9e);
  return param_1;
}


