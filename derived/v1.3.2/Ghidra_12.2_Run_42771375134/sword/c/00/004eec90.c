/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004eec90; name: FUN_004eec90
 */


long * FUN_004eec90(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  for (puVar1 = (undefined8 *)*param_1; puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[0x500]) {
    if (puVar1[0x502] != 0) goto LAB_004eef8c;
  }
  puVar1 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02713640,0x2818);
  if (puVar1 == (undefined8 *)0x0) {
    return (long *)0x0;
  }
  puVar1[0x3c] = puVar1 + 0x28;
  puVar1[0x28] = puVar1 + 0x14;
  puVar1[0x50] = puVar1 + 0x3c;
  puVar1[100] = puVar1 + 0x50;
  puVar1[0x78] = puVar1 + 100;
  puVar1[0x8c] = puVar1 + 0x78;
  puVar1[0xa0] = puVar1 + 0x8c;
  puVar1[0xb4] = puVar1 + 0xa0;
  puVar1[200] = puVar1 + 0xb4;
  puVar1[0xdc] = puVar1 + 200;
  puVar1[0xf0] = puVar1 + 0xdc;
  puVar1[0x104] = puVar1 + 0xf0;
  puVar1[0x118] = puVar1 + 0x104;
  puVar1[300] = puVar1 + 0x118;
  puVar1[0x140] = puVar1 + 300;
  puVar1[0x154] = puVar1 + 0x140;
  puVar1[0x168] = puVar1 + 0x154;
  puVar1[0x17c] = puVar1 + 0x168;
  puVar1[400] = puVar1 + 0x17c;
  puVar1[0x1a4] = puVar1 + 400;
  puVar1[0x1b8] = puVar1 + 0x1a4;
  puVar1[0x1cc] = puVar1 + 0x1b8;
  puVar1[0x1e0] = puVar1 + 0x1cc;
  puVar1[500] = puVar1 + 0x1e0;
  puVar1[0x208] = puVar1 + 500;
  puVar1[0x21c] = puVar1 + 0x208;
  puVar1[0x230] = puVar1 + 0x21c;
  puVar1[0x244] = puVar1 + 0x230;
  puVar1[600] = puVar1 + 0x244;
  puVar1[0x26c] = puVar1 + 600;
  puVar1[0x280] = puVar1 + 0x26c;
  puVar1[0x294] = puVar1 + 0x280;
  puVar1[0x2a8] = puVar1 + 0x294;
  puVar1[700] = puVar1 + 0x2a8;
  puVar1[0x2d0] = puVar1 + 700;
  puVar1[0x2e4] = puVar1 + 0x2d0;
  puVar1[0x2f8] = puVar1 + 0x2e4;
  puVar1[0x30c] = puVar1 + 0x2f8;
  puVar1[800] = puVar1 + 0x30c;
  puVar1[0x334] = puVar1 + 800;
  puVar1[0x348] = puVar1 + 0x334;
  puVar1[0x35c] = puVar1 + 0x348;
  puVar1[0x370] = puVar1 + 0x35c;
  puVar1[900] = puVar1 + 0x370;
  puVar1[0x398] = puVar1 + 900;
  puVar1[0x3ac] = puVar1 + 0x398;
  puVar1[0x3c0] = puVar1 + 0x3ac;
  puVar1[0x3d4] = puVar1 + 0x3c0;
  puVar1[1000] = puVar1 + 0x3d4;
  puVar1[0x3fc] = puVar1 + 1000;
  puVar1[0x410] = puVar1 + 0x3fc;
  puVar1[0x424] = puVar1 + 0x410;
  puVar1[0x438] = puVar1 + 0x424;
  puVar1[0x44c] = puVar1 + 0x438;
  puVar1[0x460] = puVar1 + 0x44c;
  puVar1[0x474] = puVar1 + 0x460;
  puVar1[0x488] = puVar1 + 0x474;
  puVar1[0x49c] = puVar1 + 0x488;
  puVar1[0x4b0] = puVar1 + 0x49c;
  puVar1[0x4c4] = puVar1 + 0x4b0;
  puVar1[0x4d8] = puVar1 + 0x4c4;
  puVar1[0x500] = 0;
  *(undefined4 *)(puVar1 + 0x501) = 0;
  puVar1[0x502] = 0;
  *puVar1 = 0;
  puVar1[0x14] = puVar1;
  puVar1[0x4ec] = puVar1 + 0x4d8;
  puVar1[0x502] = puVar1 + 0x4ec;
  *(undefined4 *)(puVar1 + 0x501) = 0x40;
  if (*param_1 == 0) {
    *param_1 = (long)puVar1;
    puVar1[0x500] = 0;
    plVar2 = (long *)puVar1[0x502];
  }
  else {
    puVar1[0x500] = *param_1;
    *param_1 = (long)puVar1;
LAB_004eef8c:
    plVar2 = (long *)puVar1[0x502];
  }
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  if (*plVar2 == 0) {
    puVar1[0x502] = 0;
  }
  else {
    puVar1[0x502] = *plVar2;
  }
  *(int *)(puVar1 + 0x501) = *(int *)(puVar1 + 0x501) + -1;
  return plVar2;
}


