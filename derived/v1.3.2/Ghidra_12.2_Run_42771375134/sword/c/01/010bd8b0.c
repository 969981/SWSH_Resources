/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bd8b0; name: FUN_010bd8b0
 */


char * FUN_010bd8b0(char *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)*param_2;
  if (*param_1 == '\0') {
    if (puVar7 != (undefined4 *)0x0) {
      FUN_00c51300(param_1,puVar7);
    }
    return param_1;
  }
  if (puVar7 == (undefined4 *)0x0) {
    if (param_1[0x210] != '\0') {
      param_1[0x210] = '\0';
    }
    if (param_1[0x1c0] != '\0') {
      param_1[0x1c0] = '\0';
    }
    if (param_1[0x100] != '\0') {
      param_1[0x100] = '\0';
    }
    if (param_1[0xac] != '\0') {
      if (param_1[0xb4] != '\0') {
        param_1[0xb4] = '\0';
      }
      param_1[0xac] = '\0';
    }
    if (param_1[0x70] != '\0') {
      param_1[0x70] = '\0';
    }
    if (param_1[0x5c] != '\0') {
      param_1[0x5c] = '\0';
    }
    if (param_1[0x38] != '\0') {
      param_1[0x38] = '\0';
    }
    if (param_1[0x28] != '\0') {
      param_1[0x28] = '\0';
    }
    if (param_1[0x20] != '\0') {
      param_1[0x20] = '\0';
    }
    *param_1 = '\0';
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x10) = *puVar7;
  FUN_00c515a0(param_1 + 0x20,puVar7 + 4);
  if (param_1[0x100] == '\0') {
    if (*(char *)(puVar7 + 0x3c) != '\0') {
      memcpy(param_1 + 0x110,puVar7 + 0x40,0xb0);
      param_1[0x100] = '\x01';
    }
    cVar2 = param_1[0x1c0];
    cVar3 = *(char *)(puVar7 + 0x6c);
  }
  else if (*(char *)(puVar7 + 0x3c) == '\0') {
    param_1[0x100] = '\0';
    cVar2 = param_1[0x1c0];
    cVar3 = *(char *)(puVar7 + 0x6c);
  }
  else {
    memcpy(param_1 + 0x110,puVar7 + 0x40,0xa1);
    cVar2 = param_1[0x1c0];
    cVar3 = *(char *)(puVar7 + 0x6c);
  }
  if (cVar2 == '\0') {
    if (cVar3 != '\0') {
      uVar4 = *(undefined8 *)(puVar7 + 0x6d);
      *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(puVar7 + 0x6f);
      *(undefined8 *)(param_1 + 0x1c4) = uVar4;
      uVar4 = *(undefined8 *)(puVar7 + 0x73);
      uVar5 = *(undefined8 *)(puVar7 + 0x75);
      uVar6 = *(undefined8 *)(puVar7 + 0x71);
      *(undefined8 *)(param_1 + 0x1ec) = *(undefined8 *)(puVar7 + 0x77);
      *(undefined8 *)(param_1 + 0x1e4) = uVar5;
      *(undefined8 *)(param_1 + 0x1dc) = uVar4;
      *(undefined8 *)(param_1 + 0x1d4) = uVar6;
      uVar4 = *(undefined8 *)(puVar7 + 0x79);
      uVar6 = *(undefined8 *)(puVar7 + 0x7d);
      uVar5 = *(undefined8 *)(puVar7 + 0x7b);
      *(undefined4 *)(param_1 + 0x20c) = puVar7[0x7f];
      *(undefined8 *)(param_1 + 0x204) = uVar6;
      *(undefined8 *)(param_1 + 500) = uVar4;
      *(undefined8 *)(param_1 + 0x1fc) = uVar5;
      param_1[0x1c0] = '\x01';
    }
    cVar2 = param_1[0x210];
    cVar3 = *(char *)(puVar7 + 0x80);
  }
  else if (cVar3 == '\0') {
    param_1[0x1c0] = '\0';
    cVar2 = param_1[0x210];
    cVar3 = *(char *)(puVar7 + 0x80);
  }
  else {
    uVar4 = *(undefined8 *)(puVar7 + 0x6d);
    *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(puVar7 + 0x6f);
    *(undefined8 *)(param_1 + 0x1c4) = uVar4;
    uVar4 = *(undefined8 *)(puVar7 + 0x73);
    uVar5 = *(undefined8 *)(puVar7 + 0x75);
    uVar6 = *(undefined8 *)(puVar7 + 0x71);
    *(undefined8 *)(param_1 + 0x1ec) = *(undefined8 *)(puVar7 + 0x77);
    *(undefined8 *)(param_1 + 0x1e4) = uVar5;
    *(undefined8 *)(param_1 + 0x1dc) = uVar4;
    *(undefined8 *)(param_1 + 0x1d4) = uVar6;
    uVar4 = *(undefined8 *)(puVar7 + 0x79);
    uVar5 = *(undefined8 *)(puVar7 + 0x7b);
    uVar6 = *(undefined8 *)(puVar7 + 0x7d);
    *(undefined4 *)(param_1 + 0x20c) = puVar7[0x7f];
    *(undefined8 *)(param_1 + 0x1fc) = uVar5;
    *(undefined8 *)(param_1 + 0x204) = uVar6;
    *(undefined8 *)(param_1 + 500) = uVar4;
    cVar2 = param_1[0x210];
    cVar3 = *(char *)(puVar7 + 0x80);
  }
  if (cVar2 == '\0') {
    if (cVar3 != '\0') {
      *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(puVar7 + 0x82);
      uVar4 = *(undefined8 *)(puVar7 + 0x86);
      uVar5 = *(undefined8 *)(puVar7 + 0x88);
      uVar6 = *(undefined8 *)(puVar7 + 0x8a);
      *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(puVar7 + 0x84);
      *(undefined8 *)(param_1 + 0x238) = uVar6;
      *(undefined8 *)(param_1 + 0x230) = uVar5;
      *(undefined8 *)(param_1 + 0x228) = uVar4;
      param_1[0x210] = '\x01';
    }
  }
  else if (cVar3 == '\0') {
    param_1[0x210] = '\0';
  }
  else {
    *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(puVar7 + 0x82);
    uVar4 = *(undefined8 *)(puVar7 + 0x84);
    uVar5 = *(undefined8 *)(puVar7 + 0x86);
    uVar6 = *(undefined8 *)(puVar7 + 0x88);
    *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(puVar7 + 0x8a);
    *(undefined8 *)(param_1 + 0x230) = uVar6;
    *(undefined8 *)(param_1 + 0x228) = uVar5;
    *(undefined8 *)(param_1 + 0x220) = uVar4;
  }
  uVar4 = *(undefined8 *)(puVar7 + 0x8e);
  uVar1 = puVar7[0x94];
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(puVar7 + 0x92);
  *(undefined8 *)(param_1 + 0x248) = uVar4;
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(puVar7 + 0x8c);
  uVar4 = *(undefined8 *)(puVar7 + 0x90);
  *(undefined4 *)(param_1 + 0x260) = uVar1;
  *(undefined8 *)(param_1 + 0x250) = uVar4;
  return param_1;
}


