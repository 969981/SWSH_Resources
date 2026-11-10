/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc07b0; name: FUN_00fc07b0
 */


void FUN_00fc07b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_2 + 6) != '\0') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 6) = 1;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 10) != '\0') {
    uVar3 = *(undefined8 *)((long)param_2 + 0x32);
    uVar4 = *(undefined8 *)((long)param_2 + 0x3a);
    uVar5 = *(undefined8 *)((long)param_2 + 0x42);
    *(undefined8 *)((long)param_1 + 0x2a) = *(undefined8 *)((long)param_2 + 0x2a);
    *(undefined8 *)((long)param_1 + 0x42) = uVar5;
    *(undefined8 *)((long)param_1 + 0x3a) = uVar4;
    *(undefined8 *)((long)param_1 + 0x32) = uVar3;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined1 *)(param_1 + 0x13) = 0;
  if (*(char *)(param_2 + 0x13) != '\0') {
    uVar3 = *(undefined8 *)(param_2 + 0x16);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x16) = uVar3;
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(char *)(param_2 + 0x18) != '\0') {
    uVar3 = *(undefined8 *)(param_2 + 0x19);
    uVar4 = *(undefined8 *)(param_2 + 0x1b);
    *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x1d);
    *(undefined8 *)(param_1 + 0x1b) = uVar4;
    *(undefined8 *)(param_1 + 0x19) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x21);
    uVar4 = *(undefined8 *)(param_2 + 0x23);
    uVar5 = *(undefined8 *)(param_2 + 0x25);
    *(undefined8 *)(param_1 + 0x1f) = *(undefined8 *)(param_2 + 0x1f);
    *(undefined8 *)(param_1 + 0x25) = uVar5;
    *(undefined8 *)(param_1 + 0x23) = uVar4;
    *(undefined8 *)(param_1 + 0x21) = uVar3;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined1 *)(param_1 + 0x27) = 0;
  if (*(char *)(param_2 + 0x27) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(char *)(param_2 + 0x29) != '\0') {
      uVar3 = *(undefined8 *)(param_2 + 0x2c);
      uVar4 = *(undefined8 *)(param_2 + 0x2e);
      uVar1 = param_2[0x30];
      *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
      param_1[0x30] = uVar1;
      *(undefined8 *)(param_1 + 0x2c) = uVar3;
      *(undefined8 *)(param_1 + 0x2e) = uVar4;
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
    *(undefined8 *)(param_1 + 0x31) = *(undefined8 *)(param_2 + 0x31);
    uVar3 = *(undefined8 *)(param_2 + 0x35);
    uVar4 = *(undefined8 *)(param_2 + 0x37);
    uVar5 = *(undefined8 *)((long)param_2 + 0xe1);
    *(undefined8 *)(param_1 + 0x33) = *(undefined8 *)(param_2 + 0x33);
    *(undefined8 *)((long)param_1 + 0xe1) = uVar5;
    *(undefined8 *)(param_1 + 0x37) = uVar4;
    *(undefined8 *)(param_1 + 0x35) = uVar3;
    *(undefined1 *)(param_1 + 0x27) = 1;
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
  if (*(char *)(param_2 + 0x3c) != '\0') {
    memcpy(param_1 + 0x40,param_2 + 0x40,0xb0);
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  *(undefined1 *)(param_1 + 0x6c) = 0;
  if (*(char *)(param_2 + 0x6c) != '\0') {
    uVar3 = *(undefined8 *)(param_2 + 0x6d);
    *(undefined8 *)(param_1 + 0x6f) = *(undefined8 *)(param_2 + 0x6f);
    *(undefined8 *)(param_1 + 0x6d) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x73);
    uVar4 = *(undefined8 *)(param_2 + 0x75);
    uVar5 = *(undefined8 *)(param_2 + 0x71);
    *(undefined8 *)(param_1 + 0x77) = *(undefined8 *)(param_2 + 0x77);
    *(undefined8 *)(param_1 + 0x75) = uVar4;
    *(undefined8 *)(param_1 + 0x73) = uVar3;
    *(undefined8 *)(param_1 + 0x71) = uVar5;
    uVar3 = *(undefined8 *)(param_2 + 0x79);
    uVar5 = *(undefined8 *)(param_2 + 0x7d);
    uVar4 = *(undefined8 *)(param_2 + 0x7b);
    param_1[0x7f] = param_2[0x7f];
    *(undefined8 *)(param_1 + 0x7d) = uVar5;
    *(undefined8 *)(param_1 + 0x79) = uVar3;
    *(undefined8 *)(param_1 + 0x7b) = uVar4;
    *(undefined1 *)(param_1 + 0x6c) = 1;
  }
  *(undefined1 *)(param_1 + 0x80) = 0;
  if (*(char *)(param_2 + 0x80) != '\0') {
    *(undefined8 *)(param_1 + 0x82) = *(undefined8 *)(param_2 + 0x82);
    uVar3 = *(undefined8 *)(param_2 + 0x86);
    uVar4 = *(undefined8 *)(param_2 + 0x88);
    uVar5 = *(undefined8 *)(param_2 + 0x8a);
    *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
    *(undefined8 *)(param_1 + 0x8a) = uVar5;
    *(undefined8 *)(param_1 + 0x88) = uVar4;
    *(undefined8 *)(param_1 + 0x86) = uVar3;
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x8c);
  uVar3 = *(undefined8 *)(param_2 + 0x8e);
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  uVar5 = *(undefined8 *)(param_2 + 0x92);
  param_1[0x94] = param_2[0x94];
  *(undefined8 *)(param_1 + 0x92) = uVar5;
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  *(undefined8 *)(param_1 + 0x8e) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x9e);
  *(undefined8 *)(param_1 + 0x9a) = *(undefined8 *)(param_2 + 0x9a);
  *(undefined8 *)(param_1 + 0x9e) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x9c);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x9c) = uVar3;
  lVar2 = *(long *)(param_2 + 0xa0);
  *(long *)(param_1 + 0xa0) = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_2 + 0xa2);
  *(long *)(param_1 + 0xa2) = lVar2;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fc0a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  return;
}


