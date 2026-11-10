/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141db50; name: FUN_0141db50
 */


undefined8 * FUN_0141db50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar3 = param_2[1];
  param_1[3] = param_2[3];
  param_1[1] = uVar3;
  uVar3 = param_2[2];
  *param_1 = *param_2;
  pcVar4 = (code *)param_1[5];
  param_1[2] = uVar3;
  if (pcVar4 != (code *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    (*pcVar4)(param_1 + 8);
  }
  if ((code *)param_2[6] != (code *)0x0) {
    (*(code *)param_2[6])(param_2 + 8,param_1 + 8);
    uVar3 = param_2[4];
    uVar1 = param_2[5];
    uVar2 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar2;
    param_1[4] = uVar3;
    param_1[5] = uVar1;
  }
  pcVar4 = (code *)param_1[0x15];
  if (pcVar4 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar4)(param_1 + 0x18);
  }
  if ((code *)param_2[0x16] != (code *)0x0) {
    (*(code *)param_2[0x16])(param_2 + 0x18,param_1 + 0x18);
    uVar3 = param_2[0x14];
    uVar1 = param_2[0x15];
    uVar2 = param_2[0x17];
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = uVar2;
    param_1[0x14] = uVar3;
    param_1[0x15] = uVar1;
  }
  pcVar4 = (code *)param_1[0x25];
  if (pcVar4 != (code *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    (*pcVar4)(param_1 + 0x28);
  }
  if ((code *)param_2[0x26] != (code *)0x0) {
    (*(code *)param_2[0x26])(param_2 + 0x28,param_1 + 0x28);
    uVar3 = param_2[0x24];
    uVar1 = param_2[0x25];
    uVar2 = param_2[0x27];
    param_1[0x26] = param_2[0x26];
    param_1[0x27] = uVar2;
    param_1[0x24] = uVar3;
    param_1[0x25] = uVar1;
  }
  pcVar4 = (code *)param_1[0x35];
  if (pcVar4 != (code *)0x0) {
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    (*pcVar4)(param_1 + 0x38);
  }
  if ((code *)param_2[0x36] != (code *)0x0) {
    (*(code *)param_2[0x36])(param_2 + 0x38,param_1 + 0x38);
    uVar3 = param_2[0x34];
    uVar1 = param_2[0x35];
    uVar2 = param_2[0x37];
    param_1[0x36] = param_2[0x36];
    param_1[0x37] = uVar2;
    param_1[0x34] = uVar3;
    param_1[0x35] = uVar1;
  }
  pcVar4 = (code *)param_1[0x45];
  if (pcVar4 != (code *)0x0) {
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    (*pcVar4)(param_1 + 0x48);
  }
  if ((code *)param_2[0x46] != (code *)0x0) {
    (*(code *)param_2[0x46])(param_2 + 0x48,param_1 + 0x48);
    uVar3 = param_2[0x44];
    uVar1 = param_2[0x45];
    uVar2 = param_2[0x47];
    param_1[0x46] = param_2[0x46];
    param_1[0x47] = uVar2;
    param_1[0x44] = uVar3;
    param_1[0x45] = uVar1;
  }
  param_1[0x54] = param_2[0x54];
  pcVar4 = (code *)param_1[0x57];
  if (pcVar4 != (code *)0x0) {
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    (*pcVar4)(param_1 + 0x5a);
  }
  if ((code *)param_2[0x58] != (code *)0x0) {
    (*(code *)param_2[0x58])(param_2 + 0x5a,param_1 + 0x5a);
    uVar3 = param_2[0x56];
    uVar1 = param_2[0x57];
    uVar2 = param_2[0x59];
    param_1[0x58] = param_2[0x58];
    param_1[0x59] = uVar2;
    param_1[0x56] = uVar3;
    param_1[0x57] = uVar1;
  }
  *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)(param_2 + 0x66);
  return param_1;
}


