/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cbc50; name: FUN_001cbc50
 */


void FUN_001cbc50(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar7 = param_1[0x3f0];
  if ((lVar7 != 0) && (-1 < (int)param_1[0x3f1])) {
                    /* try { // try from 001cbc74 to 001cbc87 has its CatchHandler @ 001cc810 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  lVar7 = param_1[0x3ee];
  param_1[0x3f0] = 0;
  if ((lVar7 != 0) && (-1 < (int)param_1[0x3ef])) {
                    /* try { // try from 001cbc9c to 001cbcaf has its CatchHandler @ 001cc80c */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  param_1[0x3ee] = 0;
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1f6c)) &&
      ((*(uint *)((long)param_1 + 0x1f6c) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x3ec], lVar7 != 0)) {
                    /* try { // try from 001cbccc to 001cbcdf has its CatchHandler @ 001cc7fc */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1f5c)) &&
      ((*(uint *)((long)param_1 + 0x1f5c) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x3ea], lVar7 != 0)) {
                    /* try { // try from 001cbcf8 to 001cbd0b has its CatchHandler @ 001cc7f8 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1f4c)) &&
      ((*(uint *)((long)param_1 + 0x1f4c) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[1000], lVar7 != 0)) {
                    /* try { // try from 001cbd24 to 001cbd37 has its CatchHandler @ 001cc7f4 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1f3c)) &&
      ((*(uint *)((long)param_1 + 0x1f3c) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x3e6], lVar7 != 0)) {
                    /* try { // try from 001cbd50 to 001cbd63 has its CatchHandler @ 001cc7f0 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1f2c)) &&
      ((*(uint *)((long)param_1 + 0x1f2c) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x3e4], lVar7 != 0)) {
                    /* try { // try from 001cbd7c to 001cbd8f has its CatchHandler @ 001cc7ec */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (*(uint *)((long)param_1 + 0x1f0c) != 0) {
    uVar5 = 0;
    do {
      uVar6 = *(uint *)(param_1[0x3e0] + uVar5 * 4);
      if (uVar6 != 0xffffffff) {
        do {
          uVar6 = *(uint *)(param_1[0x3df] + (ulong)uVar6 * 4);
        } while (uVar6 != 0xffffffff);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != *(uint *)((long)param_1 + 0x1f0c));
  }
  lVar7 = param_1[0x3dd];
  if (lVar7 != 0) {
                    /* try { // try from 001cbdd0 to 001cbde3 has its CatchHandler @ 001cc834 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  FUN_001cbb70(param_1 + 0x3d5);
  param_1[0x3d0] = 0;
  puVar2 = PTR_DAT_02710c20;
  param_1[0x3c2] = 0;
  param_1[0x3bb] = 0;
  param_1[0x3b4] = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0x3c9] = 0;
  param_1[0x3c7] = (long)puVar1;
  param_1[0x3ce] = (long)puVar1;
  param_1[0x3c0] = (long)puVar1;
  param_1[0x3b9] = (long)puVar1;
  param_1[0x3b2] = (long)puVar1;
  param_1[0x3ab] = (long)puVar1;
  param_1[0x3ad] = 0;
  param_1[0x3a4] = (long)puVar1;
  param_1[0x3a6] = 0;
  param_1[0x39d] = (long)puVar1;
  param_1[0x39f] = 0;
  FUN_0018fcb0(param_1 + 0x387);
  uVar6 = *(uint *)(param_1 + 0x2cf);
  param_1[0x380] = (long)puVar1;
  param_1[0x382] = 0;
  param_1[0x379] = (long)puVar1;
  param_1[0x37b] = 0;
  param_1[0x372] = (long)puVar1;
  param_1[0x374] = 0;
  param_1[0x36b] = (long)puVar1;
  param_1[0x36d] = 0;
  param_1[0x364] = (long)puVar1;
  param_1[0x366] = 0;
  param_1[0x35d] = (long)puVar1;
  param_1[0x35f] = 0;
  param_1[0x356] = (long)puVar1;
  param_1[0x358] = 0;
  param_1[0x34f] = (long)puVar1;
  param_1[0x351] = 0;
  param_1[0x348] = (long)puVar1;
  param_1[0x34a] = 0;
  param_1[0x341] = (long)puVar1;
  param_1[0x343] = 0;
  param_1[0x33a] = (long)puVar1;
  param_1[0x33c] = 0;
  param_1[0x333] = (long)puVar1;
  param_1[0x335] = 0;
  param_1[0x32c] = (long)puVar1;
  param_1[0x32e] = 0;
  param_1[0x325] = (long)puVar1;
  param_1[0x327] = 0;
  param_1[0x31e] = (long)puVar1;
  param_1[800] = 0;
  param_1[0x317] = (long)puVar1;
  param_1[0x319] = 0;
  param_1[0x310] = (long)puVar1;
  param_1[0x312] = 0;
  param_1[0x309] = (long)puVar1;
  param_1[0x30b] = 0;
  param_1[0x302] = (long)puVar1;
  param_1[0x304] = 0;
  param_1[0x2fb] = (long)puVar1;
  param_1[0x2fd] = 0;
  param_1[0x2f4] = (long)puVar1;
  param_1[0x2f6] = 0;
  param_1[0x2ed] = (long)puVar1;
  param_1[0x2ef] = 0;
  param_1[0x2e6] = (long)puVar1;
  param_1[0x2e8] = 0;
  param_1[0x2df] = (long)puVar1;
  param_1[0x2e1] = 0;
  param_1[0x2d8] = (long)puVar1;
  param_1[0x2da] = 0;
  param_1[0x2d1] = (long)puVar1;
  param_1[0x2d3] = 0;
  if (uVar6 != 0) {
    puVar4 = (undefined8 *)param_1[0x2ce];
    puVar10 = puVar4;
    do {
      puVar9 = puVar10 + 7;
      (**(code **)*puVar10)(puVar10);
      puVar10 = puVar9;
    } while (puVar9 < puVar4 + (ulong)uVar6 * 7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x167c)) &&
      ((*(uint *)((long)param_1 + 0x167c) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x2ce], lVar7 != 0)) {
                    /* try { // try from 001cbf60 to 001cbf73 has its CatchHandler @ 001cc7e8 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  uVar6 = *(uint *)(param_1 + 0x2cd);
  if (uVar6 != 0) {
    puVar4 = (undefined8 *)param_1[0x2cc];
    puVar10 = puVar4;
    do {
      puVar9 = puVar10 + 7;
      (**(code **)*puVar10)(puVar10);
      puVar10 = puVar9;
    } while (puVar9 < puVar4 + (ulong)uVar6 * 7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x166c)) &&
      ((*(uint *)((long)param_1 + 0x166c) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x2cc], lVar7 != 0)) {
                    /* try { // try from 001cbfbc to 001cbfcf has its CatchHandler @ 001cc7e4 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  uVar6 = *(uint *)(param_1 + 0x2cb);
  if (uVar6 != 0) {
    puVar4 = (undefined8 *)param_1[0x2ca];
    puVar10 = puVar4;
    do {
      puVar9 = puVar10 + 7;
      (**(code **)*puVar10)(puVar10);
      puVar10 = puVar9;
    } while (puVar9 < puVar4 + (ulong)uVar6 * 7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x165c)) &&
      ((*(uint *)((long)param_1 + 0x165c) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x2ca], lVar7 != 0)) {
                    /* try { // try from 001cc018 to 001cc02b has its CatchHandler @ 001cc7e0 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  uVar6 = *(uint *)(param_1 + 0x2c9);
  if (uVar6 != 0) {
    puVar4 = (undefined8 *)param_1[0x2c8];
    puVar10 = puVar4;
    do {
      puVar9 = puVar10 + 7;
      (**(code **)*puVar10)(puVar10);
      puVar10 = puVar9;
    } while (puVar9 < puVar4 + (ulong)uVar6 * 7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x164c)) &&
      ((*(uint *)((long)param_1 + 0x164c) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x2c8], lVar7 != 0)) {
                    /* try { // try from 001cc074 to 001cc087 has its CatchHandler @ 001cc7dc */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  uVar6 = *(uint *)(param_1 + 0x2c7);
  if (uVar6 != 0) {
    puVar4 = (undefined8 *)param_1[0x2c6];
    puVar10 = puVar4;
    do {
      puVar9 = puVar10 + 7;
      (**(code **)*puVar10)(puVar10);
      puVar10 = puVar9;
    } while (puVar9 < puVar4 + (ulong)uVar6 * 7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x163c)) &&
      ((*(uint *)((long)param_1 + 0x163c) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x2c6], lVar7 != 0)) {
                    /* try { // try from 001cc0d0 to 001cc0e3 has its CatchHandler @ 001cc7d8 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  uVar6 = *(uint *)(param_1 + 0x2c5);
  if (uVar6 != 0) {
    puVar4 = (undefined8 *)param_1[0x2c4];
    puVar10 = puVar4;
    do {
      puVar9 = puVar10 + 7;
      (**(code **)*puVar10)(puVar10);
      puVar10 = puVar9;
    } while (puVar9 < puVar4 + (ulong)uVar6 * 7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x162c)) &&
      ((*(uint *)((long)param_1 + 0x162c) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x2c4], lVar7 != 0)) {
                    /* try { // try from 001cc12c to 001cc13f has its CatchHandler @ 001cc7d4 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  puVar2 = puVar2 + 0x10;
  param_1[0x2bd] = (long)puVar2;
  param_1[0x2bf] = 0;
  FUN_0018fcb0(param_1 + 0x2a7);
  FUN_0018fcb0(param_1 + 0x291);
  FUN_0018fcb0(param_1 + 0x27c);
  FUN_0018fcb0(param_1 + 0x266);
  param_1[0x25f] = (long)puVar2;
  param_1[600] = (long)puVar2;
  lVar7 = param_1[0x23f];
  param_1[0x261] = 0;
  param_1[0x25a] = 0;
  if ((lVar7 != 0) && (-1 < (int)param_1[0x240])) {
                    /* try { // try from 001cc19c to 001cc1af has its CatchHandler @ 001cc808 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  param_1[0x23f] = 0;
  if (((-1 < (int)*(uint *)((long)param_1 + 0x11f4)) &&
      ((*(uint *)((long)param_1 + 0x11f4) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x23d], lVar7 != 0)) {
                    /* try { // try from 001cc1cc to 001cc1df has its CatchHandler @ 001cc7d0 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x11e4)) &&
      ((*(uint *)((long)param_1 + 0x11e4) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x23b], lVar7 != 0)) {
                    /* try { // try from 001cc1f8 to 001cc20b has its CatchHandler @ 001cc7cc */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x11d4)) &&
      ((*(uint *)((long)param_1 + 0x11d4) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x239], lVar7 != 0)) {
                    /* try { // try from 001cc224 to 001cc237 has its CatchHandler @ 001cc7c8 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x11c4)) &&
      ((*(uint *)((long)param_1 + 0x11c4) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x237], lVar7 != 0)) {
                    /* try { // try from 001cc250 to 001cc263 has its CatchHandler @ 001cc7c4 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x11b4)) &&
      ((*(uint *)((long)param_1 + 0x11b4) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x235], lVar7 != 0)) {
                    /* try { // try from 001cc27c to 001cc28f has its CatchHandler @ 001cc7c0 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  lVar7 = param_1[0x233];
  if ((lVar7 != 0) && (-1 < (int)param_1[0x234])) {
                    /* try { // try from 001cc2a0 to 001cc2b3 has its CatchHandler @ 001cc804 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  lVar7 = param_1[0x231];
  param_1[0x233] = 0;
  if ((lVar7 != 0) && (-1 < (int)param_1[0x232])) {
                    /* try { // try from 001cc2c8 to 001cc2db has its CatchHandler @ 001cc800 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  param_1[0x231] = 0;
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1184)) &&
      ((*(uint *)((long)param_1 + 0x1184) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x22f], lVar7 != 0)) {
                    /* try { // try from 001cc2f8 to 001cc30b has its CatchHandler @ 001cc7bc */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x10fc)) &&
      ((*(uint *)((long)param_1 + 0x10fc) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x21e], lVar7 != 0)) {
                    /* try { // try from 001cc324 to 001cc337 has its CatchHandler @ 001cc7b8 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (*(uint *)((long)param_1 + 0x10d4) != 0) {
    uVar5 = 0;
    do {
      uVar6 = *(uint *)(param_1[0x219] + uVar5 * 4);
      if (uVar6 != 0xffffffff) {
        do {
          uVar6 = *(uint *)(param_1[0x218] + (ulong)uVar6 * 4);
        } while (uVar6 != 0xffffffff);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != *(uint *)((long)param_1 + 0x10d4));
  }
  lVar7 = param_1[0x216];
  if (lVar7 != 0) {
                    /* try { // try from 001cc378 to 001cc38b has its CatchHandler @ 001cc830 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (*(uint *)((long)param_1 + 0x109c) != 0) {
    uVar5 = 0;
    do {
      uVar6 = *(uint *)(param_1[0x212] + uVar5 * 4);
      if (uVar6 != 0xffffffff) {
        do {
          uVar6 = *(uint *)(param_1[0x211] + (ulong)uVar6 * 4);
        } while (uVar6 != 0xffffffff);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != *(uint *)((long)param_1 + 0x109c));
  }
  lVar7 = param_1[0x20f];
  if (lVar7 != 0) {
                    /* try { // try from 001cc3cc to 001cc3df has its CatchHandler @ 001cc82c */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  FUN_001d2020(param_1 + 0x1c2);
  FUN_001d2100(param_1 + 0x17b);
  FUN_001d21e0(param_1 + 0x134);
  if (*(uint *)((long)param_1 + 0x98c) != 0) {
    uVar5 = 0;
    do {
      uVar6 = *(uint *)(param_1[0x130] + uVar5 * 4);
      if (uVar6 != 0xffffffff) {
        do {
          uVar6 = *(uint *)(param_1[0x12f] + (ulong)uVar6 * 4);
        } while (uVar6 != 0xffffffff);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != *(uint *)((long)param_1 + 0x98c));
  }
  lVar7 = param_1[0x12d];
  if (lVar7 != 0) {
                    /* try { // try from 001cc438 to 001cc44b has its CatchHandler @ 001cc828 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x964)) &&
      ((*(uint *)((long)param_1 + 0x964) & 0x7fffffff) != 0)) && (lVar7 = param_1[299], lVar7 != 0))
  {
                    /* try { // try from 001cc464 to 001cc477 has its CatchHandler @ 001cc7b4 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (*(uint *)((long)param_1 + 0x914) != 0) {
    uVar5 = 0;
    do {
      uVar6 = *(uint *)(param_1[0x121] + uVar5 * 4);
      if (uVar6 != 0xffffffff) {
        do {
          uVar6 = *(uint *)(param_1[0x120] + (ulong)uVar6 * 4);
        } while (uVar6 != 0xffffffff);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != *(uint *)((long)param_1 + 0x914));
  }
  lVar7 = param_1[0x11e];
  if (lVar7 != 0) {
                    /* try { // try from 001cc4b8 to 001cc4cb has its CatchHandler @ 001cc824 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x8ec)) &&
      ((*(uint *)((long)param_1 + 0x8ec) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x11c], lVar7 != 0)) {
                    /* try { // try from 001cc4e4 to 001cc4f7 has its CatchHandler @ 001cc7b0 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (*(uint *)((long)param_1 + 0x8cc) != 0) {
    uVar5 = 0;
    do {
      uVar6 = *(uint *)(param_1[0x118] + uVar5 * 4);
      if (uVar6 != 0xffffffff) {
        do {
          uVar6 = *(uint *)(param_1[0x117] + (ulong)uVar6 * 4);
        } while (uVar6 != 0xffffffff);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != *(uint *)((long)param_1 + 0x8cc));
  }
  lVar7 = param_1[0x115];
  if (lVar7 != 0) {
                    /* try { // try from 001cc538 to 001cc54b has its CatchHandler @ 001cc820 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (*(uint *)((long)param_1 + 0x88c) != 0) {
    uVar5 = 0;
    do {
      uVar6 = *(uint *)(param_1[0x110] + uVar5 * 4);
      if (uVar6 != 0xffffffff) {
        do {
          uVar6 = *(uint *)(param_1[0x10f] + (ulong)uVar6 * 4);
        } while (uVar6 != 0xffffffff);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != *(uint *)((long)param_1 + 0x88c));
  }
  lVar7 = param_1[0x10d];
  if (lVar7 != 0) {
                    /* try { // try from 001cc58c to 001cc59f has its CatchHandler @ 001cc81c */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x854)) &&
      ((*(uint *)((long)param_1 + 0x854) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x109], lVar7 != 0)) {
                    /* try { // try from 001cc5b8 to 001cc5cb has its CatchHandler @ 001cc7ac */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x844)) &&
      ((*(uint *)((long)param_1 + 0x844) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x107], lVar7 != 0)) {
                    /* try { // try from 001cc5e4 to 001cc5f7 has its CatchHandler @ 001cc7a8 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x834)) &&
      ((*(uint *)((long)param_1 + 0x834) & 0x7fffffff) != 0)) &&
     (lVar7 = param_1[0x105], lVar7 != 0)) {
                    /* try { // try from 001cc610 to 001cc623 has its CatchHandler @ 001cc7a4 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (*(uint *)((long)param_1 + 0x7ec) != 0) {
    uVar5 = 0;
    do {
      uVar6 = *(uint *)(param_1[0xfc] + uVar5 * 4);
      if (uVar6 != 0xffffffff) {
        do {
          uVar6 = *(uint *)(param_1[0xfb] + (ulong)uVar6 * 4);
        } while (uVar6 != 0xffffffff);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != *(uint *)((long)param_1 + 0x7ec));
  }
  lVar7 = param_1[0xf9];
  if (lVar7 != 0) {
                    /* try { // try from 001cc664 to 001cc677 has its CatchHandler @ 001cc818 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x7b4)) &&
      ((*(uint *)((long)param_1 + 0x7b4) & 0x7fffffff) != 0)) && (lVar7 = param_1[0xf5], lVar7 != 0)
     ) {
                    /* try { // try from 001cc690 to 001cc6a3 has its CatchHandler @ 001cc7a0 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  FUN_001d22c0(param_1 + 0x9d);
  FUN_001d23a0(param_1 + 0x56);
  FUN_001d2480(param_1 + 0xf);
  if (((-1 < (int)*(uint *)((long)param_1 + 100)) &&
      ((*(uint *)((long)param_1 + 100) & 0x7fffffff) != 0)) && (lVar7 = param_1[0xb], lVar7 != 0)) {
                    /* try { // try from 001cc6d4 to 001cc73f has its CatchHandler @ 001cc838 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x54)) &&
      ((*(uint *)((long)param_1 + 0x54) & 0x7fffffff) != 0)) && (lVar7 = param_1[9], lVar7 != 0)) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x44)) &&
      ((*(uint *)((long)param_1 + 0x44) & 0x7fffffff) != 0)) && (lVar7 = param_1[7], lVar7 != 0)) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x2c)) &&
      ((*(uint *)((long)param_1 + 0x2c) & 0x7fffffff) != 0)) && (lVar7 = param_1[4], lVar7 != 0)) {
                    /* try { // try from 001cc758 to 001cc76b has its CatchHandler @ 001cc79c */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  lVar7 = *param_1;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + -8);
                    /* try { // try from 001cc778 to 001cc78b has its CatchHandler @ 001cc814 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7 - lVar8);
  }
  return;
}


