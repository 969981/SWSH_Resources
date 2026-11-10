/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a31260; name: FUN_00a31260
 */


long * FUN_00a31260(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1450,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar4,*param_3,*param_4,*param_5);
  puVar1 = PTR_DAT_027190a8 + 0xe8;
  puVar2 = PTR_DAT_027190a8 + 0x10;
  plVar4[9] = (long)(PTR_DAT_027190a8 + 0xa8);
  plVar4[10] = (long)puVar1;
  puVar1 = PTR_DAT_027176d0;
  plVar4[0xbb] = 0;
  plVar4[0xe1] = 0;
  plVar4[0xe0] = 0;
  plVar4[0xdf] = 0;
  plVar4[0xde] = 0;
  plVar4[0xd1] = 0;
  plVar4[0xd0] = 0;
  plVar4[0xba] = (long)(puVar1 + 0x10);
  plVar4[0xcf] = 0;
  plVar4[0xce] = 0;
  plVar4[0xcd] = 0;
  puVar1 = PTR_DAT_027176d8;
  plVar4[0x113] = 0;
  plVar4[0x112] = 0;
  puVar1 = puVar1 + 0x10;
  plVar4[0xcc] = (long)puVar1;
  plVar4[0x111] = 0;
  plVar4[0x110] = 0;
  plVar4[0x103] = 0;
  plVar4[0x102] = 0;
  plVar4[0x101] = 0;
  plVar4[0x100] = 0;
  plVar4[0xff] = 0;
  plVar4[0xfe] = (long)puVar1;
  plVar4[0x145] = 0;
  plVar4[0x144] = 0;
  plVar4[0x143] = 0;
  plVar4[0x142] = 0;
  plVar4[0x135] = 0;
  plVar4[0x134] = 0;
  plVar4[0x133] = 0;
  plVar4[0x132] = 0;
  plVar4[0x131] = 0;
  plVar4[0x130] = (long)puVar1;
  plVar4[0x177] = 0;
  plVar4[0x176] = 0;
  plVar4[0x175] = 0;
  plVar4[0x174] = 0;
  plVar4[0x167] = 0;
  plVar4[0x166] = 0;
  plVar4[0x165] = 0;
  plVar4[0x164] = 0;
  plVar4[0x163] = 0;
  plVar4[0x162] = (long)puVar1;
  plVar4[0x1a9] = 0;
  plVar4[0x1a8] = 0;
  plVar4[0x1a7] = 0;
  plVar4[0x1a6] = 0;
  plVar4[0x199] = 0;
  plVar4[0x198] = 0;
  plVar4[0x197] = 0;
  plVar4[0x196] = 0;
  plVar4[0x195] = 0;
  plVar4[0x194] = (long)puVar1;
  plVar4[0x1db] = 0;
  plVar4[0x1da] = 0;
  plVar4[0x1d9] = 0;
  plVar4[0x1d8] = 0;
  plVar4[0x1cb] = 0;
  plVar4[0x1ca] = 0;
  plVar4[0x1c9] = 0;
  plVar4[0x1c8] = 0;
  plVar4[0x1c7] = 0;
  plVar4[0x1c6] = (long)puVar1;
  plVar4[0x20d] = 0;
  plVar4[0x20c] = 0;
  plVar4[0x20b] = 0;
  plVar4[0x20a] = 0;
  plVar4[0x1fd] = 0;
  plVar4[0x1fc] = 0;
  plVar4[0x1fb] = 0;
  plVar4[0x1fa] = 0;
  plVar4[0x1f9] = 0;
  plVar4[0x1f8] = (long)puVar1;
  plVar4[0x23f] = 0;
  plVar4[0x23e] = 0;
  plVar4[0x23d] = 0;
  plVar4[0x23c] = 0;
  plVar4[0x22f] = 0;
  plVar4[0x22e] = 0;
  plVar4[0x22d] = 0;
  plVar4[0x22c] = 0;
  plVar4[0x22b] = 0;
  plVar4[0x22a] = (long)puVar1;
  *(undefined4 *)(plVar4 + 0x24c) = 0;
  plVar4[0x24e] = (long)(PTR_DAT_02717538 + 0x10);
  *(undefined4 *)(plVar4 + 0x252) = 10;
  *(undefined4 *)(plVar4 + 0x255) = 10;
  *(undefined4 *)(plVar4 + 600) = 10;
  *(undefined4 *)(plVar4 + 0x25b) = 10;
  *(undefined4 *)(plVar4 + 0x25e) = 10;
  *(undefined4 *)(plVar4 + 0x261) = 10;
  *(undefined4 *)(plVar4 + 0x264) = 10;
  *(undefined4 *)(plVar4 + 0x267) = 10;
  *(undefined4 *)(plVar4 + 0x26a) = 10;
  *(undefined4 *)(plVar4 + 0x26d) = 10;
  *(undefined4 *)(plVar4 + 0x270) = 10;
  *(undefined4 *)(plVar4 + 0x273) = 10;
  *(undefined4 *)(plVar4 + 0x276) = 10;
  *(undefined4 *)(plVar4 + 0x279) = 10;
  *(undefined4 *)(plVar4 + 0x27c) = 10;
  *(undefined4 *)(plVar4 + 0x27f) = 10;
  plVar4[0x251] = 0;
  plVar4[0x250] = 0;
  plVar4[0x24f] = 0;
  plVar4[0x254] = 0;
  plVar4[0x253] = 0;
  plVar4[599] = 0;
  plVar4[0x256] = 0;
  plVar4[0x25a] = 0;
  plVar4[0x259] = 0;
  plVar4[0x25d] = 0;
  plVar4[0x25c] = 0;
  plVar4[0x260] = 0;
  plVar4[0x25f] = 0;
  plVar4[0x263] = 0;
  plVar4[0x262] = 0;
  plVar4[0x266] = 0;
  plVar4[0x265] = 0;
  plVar4[0x269] = 0;
  plVar4[0x268] = 0;
  plVar4[0x26c] = 0;
  plVar4[0x26b] = 0;
  plVar4[0x26f] = 0;
  plVar4[0x26e] = 0;
  plVar4[0x272] = 0;
  plVar4[0x271] = 0;
  plVar4[0x275] = 0;
  plVar4[0x274] = 0;
  plVar4[0x278] = 0;
  plVar4[0x277] = 0;
  plVar4[0x27b] = 0;
  plVar4[0x27a] = 0;
  plVar4[0x27e] = 0;
  plVar4[0x27d] = 0;
  *(undefined4 *)(plVar4 + 0x280) = 0;
  plVar4[0x286] = 0;
  plVar4[0x285] = 0;
  plVar4[0x284] = 0;
  plVar4[0x283] = 0;
  plVar4[0x282] = 0;
  plVar4[0x281] = 0;
  *(undefined4 *)(plVar4 + 0x287) = 0xffffffff;
  *(undefined4 *)((long)plVar4 + 0x143c) = 0xffffffff;
  *(undefined4 *)(plVar4 + 0x288) = 0xffffffff;
  plVar4[0x289] = 0;
  *plVar4 = (long)puVar2;
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x1450;
  plVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


