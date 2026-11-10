/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cbfd0; name: FUN_003cbfd0
 */


void FUN_003cbfd0(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  uint local_38;
  uint uStack_34;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      while( true ) {
        puVar9 = *(ushort **)(*(long *)(param_1 + 8) + uVar7 * 8);
        uVar1 = puVar9[2];
        puVar9[2] = uVar1 - 1;
        if (uVar1 < 2) break;
        *puVar9 = *puVar9 & 0xfffd;
        uVar7 = uVar7 + 1;
        if (uVar4 <= uVar7) goto LAB_003cc0a8;
      }
      local_38 = *(uint *)(*(long *)(puVar9 + 0xc) + 0x10);
      uVar4 = *(uint *)(*(long *)(puVar9 + 0xc) + 0x14);
      uStack_34 = uVar4;
      if (uVar4 <= local_38) {
        uStack_34 = local_38;
        local_38 = uVar4;
      }
                    /* try { // try from 003cc050 to 003cc05b has its CatchHandler @ 003cc3ac */
      FUN_003d8710(param_1 + 0x1520,&local_38);
      puVar5 = *(undefined8 **)(puVar9 + 0xc);
      if (puVar5 != (undefined8 *)0x0) {
        *(int *)(param_1 + 0xddc) = *(int *)(param_1 + 0xddc) + -1;
        *puVar5 = *(undefined8 *)(param_1 + 0xde8);
        *(undefined8 **)(param_1 + 0xde8) = puVar5;
        puVar9[0xc] = 0;
        puVar9[0xd] = 0;
        puVar9[0xe] = 0;
        puVar9[0xf] = 0;
      }
      *(int *)(param_1 + 0x4fc) = *(int *)(param_1 + 0x4fc) + -1;
      *(undefined8 *)puVar9 = *(undefined8 *)(param_1 + 0x508);
      uVar4 = *(uint *)(param_1 + 0x10);
      *(ushort **)(param_1 + 0x508) = puVar9;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
LAB_003cc0a8:
  plVar6 = *(long **)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (plVar6 != (long *)0x0) {
    if (((-1 < (int)*(uint *)((long)plVar6 + 0xc)) &&
        ((*(uint *)((long)plVar6 + 0xc) & 0x7fffffff) != 0)) && (lVar8 = *plVar6, lVar8 != 0)) {
                    /* try { // try from 003cc0cc to 003cc0df has its CatchHandler @ 003cc380 */
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar8);
    }
                    /* try { // try from 003cc0e0 to 003cc0f3 has its CatchHandler @ 003cc3a8 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,plVar6);
  }
  if (*(uint *)(param_1 + 0x157c) != 0) {
    uVar7 = 0;
    do {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x1570) + uVar7 * 4);
      if (uVar4 != 0xffffffff) {
        do {
          uVar4 = *(uint *)(*(long *)(param_1 + 0x1568) + (ulong)uVar4 * 4);
        } while (uVar4 != 0xffffffff);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != *(uint *)(param_1 + 0x157c));
  }
  lVar8 = *(long *)(param_1 + 0x1558);
  if (lVar8 != 0) {
                    /* try { // try from 003cc134 to 003cc147 has its CatchHandler @ 003cc3a4 */
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar8);
  }
  if (*(uint *)(param_1 + 0x1544) != 0) {
    uVar7 = 0;
    do {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x1538) + uVar7 * 4);
      if (uVar4 != 0xffffffff) {
        do {
          uVar4 = *(uint *)(*(long *)(param_1 + 0x1530) + (ulong)uVar4 * 4);
        } while (uVar4 != 0xffffffff);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != *(uint *)(param_1 + 0x1544));
  }
  lVar8 = *(long *)(param_1 + 0x1520);
  if (lVar8 != 0) {
                    /* try { // try from 003cc188 to 003cc19b has its CatchHandler @ 003cc3a0 */
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar8);
  }
  nn::os::FinalizeMutex(*(MutexType **)(param_1 + 0x1510));
  lVar8 = *(long *)(param_1 + 0x1510);
  if (lVar8 != 0) {
                    /* try { // try from 003cc1ac to 003cc1bf has its CatchHandler @ 003cc39c */
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar8);
  }
  puVar2 = PTR_DAT_02710c20;
  *(undefined8 *)(param_1 + 0x14e0) = 0;
  *(undefined **)(param_1 + 0x14d0) = puVar2 + 0x10;
  if (*(uint *)(param_1 + 0x14bc) != 0) {
    uVar7 = 0;
    do {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x14b0) + uVar7 * 4);
      if (uVar4 != 0xffffffff) {
        do {
          uVar4 = *(uint *)(*(long *)(param_1 + 0x14a8) + (ulong)uVar4 * 4);
        } while (uVar4 != 0xffffffff);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != *(uint *)(param_1 + 0x14bc));
  }
  lVar8 = *(long *)(param_1 + 0x1498);
  if (lVar8 != 0) {
                    /* try { // try from 003cc214 to 003cc227 has its CatchHandler @ 003cc398 */
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar8);
  }
  FUN_003cb6a0(param_1 + 0x1260);
  FUN_003cb780(param_1 + 0x1028);
  FUN_003cb860(param_1 + 0xdf0);
  FUN_003cb940(param_1 + 3000);
  FUN_003cba20(param_1 + 0x980);
  FUN_003cbb00(param_1 + 0x748);
  FUN_003cbbe0(param_1 + 0x510);
  FUN_003cbcc0(param_1 + 0x2d8);
  FUN_003cbda0(param_1 + 0xa0);
  if (*(uint *)(param_1 + 0x84) != 0) {
    uVar7 = 0;
    do {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x78) + uVar7 * 4);
      if (uVar4 != 0xffffffff) {
        do {
          uVar4 = *(uint *)(*(long *)(param_1 + 0x70) + (ulong)uVar4 * 4);
        } while (uVar4 != 0xffffffff);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != *(uint *)(param_1 + 0x84));
  }
  lVar8 = *(long *)(param_1 + 0x60);
  if (lVar8 != 0) {
                    /* try { // try from 003cc2b8 to 003cc2cb has its CatchHandler @ 003cc394 */
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar8);
  }
  lVar8 = *(long *)(param_1 + 0x40);
  if (lVar8 != 0) {
                    /* try { // try from 003cc2d4 to 003cc2e7 has its CatchHandler @ 003cc390 */
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar8);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x3c)) && ((*(uint *)(param_1 + 0x3c) & 0x7fffffff) != 0)) &&
     (lVar8 = *(long *)(param_1 + 0x30), lVar8 != 0)) {
                    /* try { // try from 003cc300 to 003cc313 has its CatchHandler @ 003cc38c */
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar8);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x24)) && ((*(uint *)(param_1 + 0x24) & 0x7fffffff) != 0)) &&
     (lVar8 = *(long *)(param_1 + 0x18), lVar8 != 0)) {
                    /* try { // try from 003cc32c to 003cc33f has its CatchHandler @ 003cc388 */
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar8);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x14)) && ((*(uint *)(param_1 + 0x14) & 0x7fffffff) != 0)) &&
     (lVar8 = *(long *)(param_1 + 8), lVar8 != 0)) {
                    /* try { // try from 003cc358 to 003cc36b has its CatchHandler @ 003cc384 */
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar8);
  }
  return;
}


