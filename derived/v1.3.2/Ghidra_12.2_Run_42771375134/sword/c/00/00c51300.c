/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c51300; name: FUN_00c51300
 */


void FUN_00c51300(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  param_1[0x20] = 0;
  param_1[0x20] = *(undefined1 *)(param_2 + 4);
  param_1[0x28] = 0;
  if (*(char *)(param_2 + 6) != '\0') {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 8);
    param_1[0x28] = 1;
  }
  param_1[0x38] = 0;
  if (*(char *)(param_2 + 10) != '\0') {
    uVar2 = *(undefined8 *)((long)param_2 + 0x32);
    uVar3 = *(undefined8 *)((long)param_2 + 0x3a);
    uVar4 = *(undefined8 *)((long)param_2 + 0x42);
    *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)((long)param_2 + 0x2a);
    *(undefined8 *)(param_1 + 0x52) = uVar4;
    *(undefined8 *)(param_1 + 0x4a) = uVar3;
    *(undefined8 *)(param_1 + 0x42) = uVar2;
    param_1[0x38] = 1;
  }
  param_1[0x5c] = 0;
  if (*(char *)(param_2 + 0x13) != '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0x16);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    param_1[0x5c] = 1;
  }
  param_1[0x70] = 0;
  if (*(char *)(param_2 + 0x18) != '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0x19);
    uVar3 = *(undefined8 *)(param_2 + 0x1b);
    *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x1d);
    *(undefined8 *)(param_1 + 0x7c) = uVar3;
    *(undefined8 *)(param_1 + 0x74) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x21);
    uVar3 = *(undefined8 *)(param_2 + 0x23);
    uVar4 = *(undefined8 *)(param_2 + 0x25);
    *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x1f);
    *(undefined8 *)(param_1 + 0xa4) = uVar4;
    *(undefined8 *)(param_1 + 0x9c) = uVar3;
    *(undefined8 *)(param_1 + 0x94) = uVar2;
    param_1[0x70] = 1;
  }
  param_1[0xac] = 0;
  if (*(char *)(param_2 + 0x27) != '\0') {
    param_1[0xb0] = *(undefined1 *)(param_2 + 0x28);
    param_1[0xb4] = 0;
    if (*(char *)(param_2 + 0x29) != '\0') {
      uVar2 = *(undefined8 *)(param_2 + 0x2c);
      uVar3 = *(undefined8 *)(param_2 + 0x2e);
      uVar1 = param_2[0x30];
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0x2a);
      *(undefined4 *)(param_1 + 0xd0) = uVar1;
      *(undefined8 *)(param_1 + 0xc0) = uVar2;
      *(undefined8 *)(param_1 + 200) = uVar3;
      param_1[0xb4] = 1;
    }
    *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)(param_2 + 0x31);
    uVar2 = *(undefined8 *)(param_2 + 0x35);
    uVar3 = *(undefined8 *)(param_2 + 0x37);
    uVar4 = *(undefined8 *)((long)param_2 + 0xe1);
    *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_2 + 0x33);
    *(undefined8 *)(param_1 + 0xf1) = uVar4;
    *(undefined8 *)(param_1 + 0xec) = uVar3;
    *(undefined8 *)(param_1 + 0xe4) = uVar2;
    param_1[0xac] = 1;
  }
  param_1[0x100] = 0;
  if (*(char *)(param_2 + 0x3c) != '\0') {
    memcpy(param_1 + 0x110,param_2 + 0x40,0xb0);
    param_1[0x100] = 1;
  }
  param_1[0x1c0] = 0;
  if (*(char *)(param_2 + 0x6c) != '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0x6d);
    *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(param_2 + 0x6f);
    *(undefined8 *)(param_1 + 0x1c4) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x73);
    uVar3 = *(undefined8 *)(param_2 + 0x75);
    uVar4 = *(undefined8 *)(param_2 + 0x71);
    *(undefined8 *)(param_1 + 0x1ec) = *(undefined8 *)(param_2 + 0x77);
    *(undefined8 *)(param_1 + 0x1e4) = uVar3;
    *(undefined8 *)(param_1 + 0x1dc) = uVar2;
    *(undefined8 *)(param_1 + 0x1d4) = uVar4;
    uVar2 = *(undefined8 *)(param_2 + 0x79);
    uVar4 = *(undefined8 *)(param_2 + 0x7d);
    uVar3 = *(undefined8 *)(param_2 + 0x7b);
    *(undefined4 *)(param_1 + 0x20c) = param_2[0x7f];
    *(undefined8 *)(param_1 + 0x204) = uVar4;
    *(undefined8 *)(param_1 + 500) = uVar2;
    *(undefined8 *)(param_1 + 0x1fc) = uVar3;
    param_1[0x1c0] = 1;
  }
  param_1[0x210] = 0;
  if (*(char *)(param_2 + 0x80) != '\0') {
    *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x82);
    uVar2 = *(undefined8 *)(param_2 + 0x86);
    uVar3 = *(undefined8 *)(param_2 + 0x88);
    uVar4 = *(undefined8 *)(param_2 + 0x8a);
    *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x84);
    *(undefined8 *)(param_1 + 0x238) = uVar4;
    *(undefined8 *)(param_1 + 0x230) = uVar3;
    *(undefined8 *)(param_1 + 0x228) = uVar2;
    param_1[0x210] = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x8e);
  uVar1 = param_2[0x94];
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_2 + 0x92);
  *(undefined8 *)(param_1 + 0x248) = uVar2;
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x8c);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x260) = uVar1;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x250) = uVar2;
  return;
}


