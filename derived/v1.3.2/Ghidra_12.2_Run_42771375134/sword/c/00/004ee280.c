/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ee280; name: FUN_004ee280
 */


long * FUN_004ee280(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  for (puVar1 = (undefined8 *)*param_1; puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[0x100]) {
    if (puVar1[0x102] != 0) goto LAB_004ee4e4;
  }
  puVar1 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02713640,0x818);
  if (puVar1 == (undefined8 *)0x0) {
    return (long *)0x0;
  }
  puVar1[0xc] = puVar1 + 8;
  puVar1[8] = puVar1 + 4;
  puVar1[0x10] = puVar1 + 0xc;
  puVar1[0x14] = puVar1 + 0x10;
  puVar1[0x18] = puVar1 + 0x14;
  puVar1[0x1c] = puVar1 + 0x18;
  puVar1[0x20] = puVar1 + 0x1c;
  puVar1[0x24] = puVar1 + 0x20;
  puVar1[0x28] = puVar1 + 0x24;
  puVar1[0x2c] = puVar1 + 0x28;
  puVar1[0x30] = puVar1 + 0x2c;
  puVar1[0x34] = puVar1 + 0x30;
  puVar1[0x38] = puVar1 + 0x34;
  puVar1[0x3c] = puVar1 + 0x38;
  puVar1[0x40] = puVar1 + 0x3c;
  puVar1[0x44] = puVar1 + 0x40;
  puVar1[0x48] = puVar1 + 0x44;
  puVar1[0x4c] = puVar1 + 0x48;
  puVar1[0x50] = puVar1 + 0x4c;
  puVar1[0x54] = puVar1 + 0x50;
  puVar1[0x58] = puVar1 + 0x54;
  puVar1[0x5c] = puVar1 + 0x58;
  puVar1[0x60] = puVar1 + 0x5c;
  puVar1[100] = puVar1 + 0x60;
  puVar1[0x68] = puVar1 + 100;
  puVar1[0x6c] = puVar1 + 0x68;
  puVar1[0x70] = puVar1 + 0x6c;
  puVar1[0x74] = puVar1 + 0x70;
  puVar1[0x78] = puVar1 + 0x74;
  puVar1[0x7c] = puVar1 + 0x78;
  puVar1[0x80] = puVar1 + 0x7c;
  puVar1[0x84] = puVar1 + 0x80;
  puVar1[0x88] = puVar1 + 0x84;
  puVar1[0x8c] = puVar1 + 0x88;
  puVar1[0x90] = puVar1 + 0x8c;
  puVar1[0x94] = puVar1 + 0x90;
  puVar1[0x98] = puVar1 + 0x94;
  puVar1[0x9c] = puVar1 + 0x98;
  puVar1[0xa0] = puVar1 + 0x9c;
  puVar1[0xa4] = puVar1 + 0xa0;
  puVar1[0xa8] = puVar1 + 0xa4;
  puVar1[0xac] = puVar1 + 0xa8;
  puVar1[0xb0] = puVar1 + 0xac;
  puVar1[0xb4] = puVar1 + 0xb0;
  puVar1[0xb8] = puVar1 + 0xb4;
  puVar1[0xbc] = puVar1 + 0xb8;
  puVar1[0xc0] = puVar1 + 0xbc;
  puVar1[0xc4] = puVar1 + 0xc0;
  puVar1[200] = puVar1 + 0xc4;
  puVar1[0xcc] = puVar1 + 200;
  puVar1[0xd0] = puVar1 + 0xcc;
  puVar1[0xd4] = puVar1 + 0xd0;
  puVar1[0xd8] = puVar1 + 0xd4;
  puVar1[0xdc] = puVar1 + 0xd8;
  puVar1[0xe0] = puVar1 + 0xdc;
  puVar1[0xe4] = puVar1 + 0xe0;
  puVar1[0xe8] = puVar1 + 0xe4;
  puVar1[0xec] = puVar1 + 0xe8;
  puVar1[0xf0] = puVar1 + 0xec;
  puVar1[0xf4] = puVar1 + 0xf0;
  puVar1[0xf8] = puVar1 + 0xf4;
  puVar1[0x100] = 0;
  *(undefined4 *)(puVar1 + 0x101) = 0;
  puVar1[0x102] = 0;
  *puVar1 = 0;
  puVar1[4] = puVar1;
  puVar1[0xfc] = puVar1 + 0xf8;
  puVar1[0x102] = puVar1 + 0xfc;
  *(undefined4 *)(puVar1 + 0x101) = 0x40;
  if (*param_1 == 0) {
    *param_1 = (long)puVar1;
    puVar1[0x100] = 0;
    plVar2 = (long *)puVar1[0x102];
  }
  else {
    puVar1[0x100] = *param_1;
    *param_1 = (long)puVar1;
LAB_004ee4e4:
    plVar2 = (long *)puVar1[0x102];
  }
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  if (*plVar2 == 0) {
    puVar1[0x102] = 0;
  }
  else {
    puVar1[0x102] = *plVar2;
  }
  *(int *)(puVar1 + 0x101) = *(int *)(puVar1 + 0x101) + -1;
  return plVar2;
}


