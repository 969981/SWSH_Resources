/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f5760; name: FUN_011f5760
 */


void FUN_011f5760(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_3;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  param_1[0x94] = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (param_2[0x120] != '\0') {
    *(undefined8 *)(param_1 + 0x82) = *(undefined8 *)(param_2 + 0x128);
    uVar2 = *(undefined8 *)(param_2 + 0x138);
    uVar1 = *(undefined8 *)(param_2 + 0x140);
    uVar3 = *(undefined8 *)(param_2 + 0x148);
    *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x130);
    *(undefined8 *)(param_1 + 0x8a) = uVar3;
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    *(undefined8 *)(param_1 + 0x86) = uVar2;
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  if (param_2[0xc0] != '\0') {
    uVar1 = *(undefined8 *)(param_2 + 0xc4);
    *(undefined8 *)(param_1 + 0x6f) = *(undefined8 *)(param_2 + 0xcc);
    *(undefined8 *)(param_1 + 0x6d) = uVar1;
    uVar3 = *(undefined8 *)(param_2 + 0xe4);
    uVar1 = *(undefined8 *)(param_2 + 0xd4);
    uVar2 = *(undefined8 *)(param_2 + 0xdc);
    *(undefined8 *)(param_1 + 0x77) = *(undefined8 *)(param_2 + 0xec);
    *(undefined8 *)(param_1 + 0x75) = uVar3;
    *(undefined8 *)(param_1 + 0x73) = uVar2;
    *(undefined8 *)(param_1 + 0x71) = uVar1;
    uVar3 = *(undefined8 *)(param_2 + 0x104);
    uVar1 = *(undefined8 *)(param_2 + 0xf4);
    uVar2 = *(undefined8 *)(param_2 + 0xfc);
    param_1[0x7f] = *(undefined4 *)(param_2 + 0x10c);
    *(undefined8 *)(param_1 + 0x7d) = uVar3;
    *(undefined8 *)(param_1 + 0x79) = uVar1;
    *(undefined8 *)(param_1 + 0x7b) = uVar2;
    *(undefined1 *)(param_1 + 0x6c) = 1;
  }
  if (*param_2 != '\0') {
    memcpy(param_1 + 0x40,param_2 + 0x10,0xb0);
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  FUN_01225e20(param_1);
  return;
}


