/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c1de0; name: FUN_003c1de0
 */


void FUN_003c1de0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *local_70;
  
  uVar8 = (ulong)*(uint *)(param_1 + 0x2ac);
  if (*(uint *)(param_1 + 0x2ac) != 0) {
    plVar9 = *(long **)(param_1 + 0x280);
    do {
      lVar7 = *plVar9;
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfb;
      if (*(long *)(lVar7 + 0x28) != 0) {
        FUN_003c4420(lVar7);
      }
      FUN_003c3ae0(lVar7);
      plVar9 = plVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    uVar1 = *(uint *)(param_1 + 0x29c);
    if ((uVar1 != 0) && (*(int *)(param_1 + 0x2ac) != 0)) {
      uVar8 = 0;
      do {
        uVar6 = *(uint *)((long)*(void **)(param_1 + 0x290) + uVar8 * 4);
        if (uVar6 != 0xffffffff) {
          do {
            uVar6 = *(uint *)(*(long *)(param_1 + 0x288) + (ulong)uVar6 * 4);
          } while (uVar6 != 0xffffffff);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar1);
                    /* WARNING: Subroutine does not return */
      memset(*(void **)(param_1 + 0x290),-1,(ulong)(uVar1 << 2));
    }
  }
  uVar1 = *(uint *)(param_1 + 0x274);
  if (uVar1 == 0) {
    return;
  }
  puVar2 = (undefined8 *)FUN_003c3120(param_2,0x210,1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
  }
  lVar7 = *(long *)(param_1 + 0x248);
  uVar8 = 0;
  puVar11 = puVar2;
  do {
    lVar10 = *(long *)(lVar7 + uVar8 * 8);
    *(byte *)(lVar10 + 0x88) = *(byte *)(lVar10 + 0x88) & 0xfe;
    lVar5 = *(long *)(lVar10 + 0x78);
    if (((lVar5 != 0) && (*(long *)(lVar5 + 200) == 0)) &&
       (iVar12 = *(int *)(lVar5 + 0x34), iVar12 != 0)) {
      plVar9 = *(long **)(lVar5 + 0x28);
      do {
        while( true ) {
          if (*(char *)(*plVar9 + 0x24) == '\x04') break;
LAB_003c204c:
          iVar12 = iVar12 + -1;
          plVar9 = plVar9 + 1;
          if (iVar12 == 0) goto LAB_003c2054;
        }
        lVar5 = *(long *)(*plVar9 + 0x28);
        if (((lVar5 == lVar10) || ((*(byte *)(lVar5 + 0x88) & 1) != 0)) ||
           (puVar11 == (undefined8 *)0x0)) goto LAB_003c204c;
        uVar6 = *(uint *)(puVar11 + 1);
        if (0x3f < uVar6) {
                    /* try { // try from 003c2020 to 003c202f has its CatchHandler @ 003c24d0 */
          puVar3 = (undefined8 *)FUN_003c3120(param_2,0x210,1);
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar3[2] = lVar5;
            *(undefined4 *)(puVar3 + 1) = 1;
            *puVar11 = puVar3;
            puVar11 = puVar3;
          }
          goto LAB_003c204c;
        }
        puVar11[(ulong)uVar6 + 2] = lVar5;
        *(uint *)(puVar11 + 1) = uVar6 + 1;
        iVar12 = iVar12 + -1;
        plVar9 = plVar9 + 1;
      } while (iVar12 != 0);
    }
LAB_003c2054:
    lVar5 = *(long *)(lVar10 + 0x80);
    if (((lVar5 != 0) && (*(long *)(lVar5 + 200) == 0)) &&
       (iVar12 = *(int *)(lVar5 + 0x34), iVar12 != 0)) {
      plVar9 = *(long **)(lVar5 + 0x28);
      do {
        while( true ) {
          if (*(char *)(*plVar9 + 0x24) == '\x04') break;
LAB_003c20ec:
          iVar12 = iVar12 + -1;
          plVar9 = plVar9 + 1;
          if (iVar12 == 0) goto LAB_003c20f4;
        }
        lVar5 = *(long *)(*plVar9 + 0x28);
        if (((lVar5 == lVar10) || ((*(byte *)(lVar5 + 0x88) & 1) != 0)) ||
           (puVar11 == (undefined8 *)0x0)) goto LAB_003c20ec;
        uVar6 = *(uint *)(puVar11 + 1);
        if (0x3f < uVar6) {
                    /* try { // try from 003c20c0 to 003c20cf has its CatchHandler @ 003c24c4 */
          puVar3 = (undefined8 *)FUN_003c3120(param_2,0x210,1);
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar3[2] = lVar5;
            *(undefined4 *)(puVar3 + 1) = 1;
            *puVar11 = puVar3;
            puVar11 = puVar3;
          }
          goto LAB_003c20ec;
        }
        puVar11[(ulong)uVar6 + 2] = lVar5;
        *(uint *)(puVar11 + 1) = uVar6 + 1;
        iVar12 = iVar12 + -1;
        plVar9 = plVar9 + 1;
      } while (iVar12 != 0);
    }
LAB_003c20f4:
    lVar5 = *(long *)(lVar10 + 0x78);
    if (lVar5 == 0) {
      lVar5 = *(long *)(lVar10 + 0x80);
      uVar4 = 0;
      if (lVar5 == 0) goto LAB_003c1f98;
    }
    else {
LAB_003c1f98:
      uVar4 = *(undefined8 *)(lVar10 + 0x80);
    }
                    /* try { // try from 003c2108 to 003c2113 has its CatchHandler @ 003c24e8 */
    FUN_003c1ae0(param_1,lVar5,uVar4,lVar10);
    uVar8 = uVar8 + 1;
  } while (uVar8 < uVar1);
  if (puVar2 != (undefined8 *)0x0) {
    if (*(int *)(puVar2 + 1) == 0) {
      local_70 = (undefined8 *)*puVar2;
      if (local_70 == (undefined8 *)0x0) goto LAB_003c2318;
    }
    else {
      local_70 = puVar2;
    }
    plVar9 = local_70 + 2;
    uVar8 = 1;
LAB_003c2164:
    lVar10 = *plVar9;
    *(byte *)(lVar10 + 0x88) = *(byte *)(lVar10 + 0x88) & 0xfe;
    lVar5 = *(long *)(lVar10 + 0x78);
    if (((lVar5 != 0) && (*(long *)(lVar5 + 200) == 0)) &&
       (iVar12 = *(int *)(lVar5 + 0x34), iVar12 != 0)) {
      plVar9 = *(long **)(lVar5 + 0x28);
      do {
        while( true ) {
          if (*(char *)(*plVar9 + 0x24) == '\x04') break;
LAB_003c220c:
          iVar12 = iVar12 + -1;
          plVar9 = plVar9 + 1;
          if (iVar12 == 0) goto LAB_003c2214;
        }
        lVar5 = *(long *)(*plVar9 + 0x28);
        if (((lVar5 == lVar10) || ((*(byte *)(lVar5 + 0x88) & 1) != 0)) ||
           (puVar11 == (undefined8 *)0x0)) goto LAB_003c220c;
        uVar6 = *(uint *)(puVar11 + 1);
        if (0x3f < uVar6) {
                    /* try { // try from 003c21e0 to 003c21ef has its CatchHandler @ 003c24a8 */
          puVar3 = (undefined8 *)FUN_003c3120(param_2,0x210,1);
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar3[2] = lVar5;
            *(undefined4 *)(puVar3 + 1) = 1;
            *puVar11 = puVar3;
            puVar11 = puVar3;
          }
          goto LAB_003c220c;
        }
        puVar11[(ulong)uVar6 + 2] = lVar5;
        *(uint *)(puVar11 + 1) = uVar6 + 1;
        iVar12 = iVar12 + -1;
        plVar9 = plVar9 + 1;
      } while (iVar12 != 0);
    }
LAB_003c2214:
    lVar5 = *(long *)(lVar10 + 0x80);
    if (((lVar5 != 0) && (*(long *)(lVar5 + 200) == 0)) &&
       (iVar12 = *(int *)(lVar5 + 0x34), iVar12 != 0)) {
      plVar9 = *(long **)(lVar5 + 0x28);
      do {
        while( true ) {
          if (*(char *)(*plVar9 + 0x24) == '\x04') break;
LAB_003c22ac:
          iVar12 = iVar12 + -1;
          plVar9 = plVar9 + 1;
          if (iVar12 == 0) goto LAB_003c22b4;
        }
        lVar5 = *(long *)(*plVar9 + 0x28);
        if (((lVar5 == lVar10) || ((*(byte *)(lVar5 + 0x88) & 1) != 0)) ||
           (puVar11 == (undefined8 *)0x0)) goto LAB_003c22ac;
        uVar6 = *(uint *)(puVar11 + 1);
        if (0x3f < uVar6) {
                    /* try { // try from 003c2280 to 003c228f has its CatchHandler @ 003c249c */
          puVar3 = (undefined8 *)FUN_003c3120(param_2,0x210,1);
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar3[2] = lVar5;
            *(undefined4 *)(puVar3 + 1) = 1;
            *puVar11 = puVar3;
            puVar11 = puVar3;
          }
          goto LAB_003c22ac;
        }
        puVar11[(ulong)uVar6 + 2] = lVar5;
        *(uint *)(puVar11 + 1) = uVar6 + 1;
        iVar12 = iVar12 + -1;
        plVar9 = plVar9 + 1;
      } while (iVar12 != 0);
    }
LAB_003c22b4:
    lVar5 = *(long *)(lVar10 + 0x78);
    if (lVar5 == 0) {
      lVar5 = *(long *)(lVar10 + 0x80);
      uVar4 = 0;
      if (lVar5 == 0) goto LAB_003c2310;
    }
    else {
LAB_003c2310:
      uVar4 = *(undefined8 *)(lVar10 + 0x80);
    }
                    /* try { // try from 003c22c8 to 003c22d3 has its CatchHandler @ 003c24b8 */
    FUN_003c1ae0(param_1,lVar5,uVar4,lVar10);
    if (local_70 != (undefined8 *)0x0) {
      if ((uint)uVar8 < *(uint *)(local_70 + 1)) {
        plVar9 = local_70 + uVar8 + 2;
        uVar8 = (ulong)((uint)uVar8 + 1);
      }
      else {
        local_70 = (undefined8 *)*local_70;
        if (local_70 == (undefined8 *)0x0) goto LAB_003c2318;
        plVar9 = local_70 + 2;
        uVar8 = 1;
      }
      goto LAB_003c2164;
    }
  }
LAB_003c2318:
  uVar8 = 0;
  do {
    lVar10 = *(long *)(lVar7 + uVar8 * 8);
    lVar5 = *(long *)(lVar10 + 0x78);
    if (lVar5 == 0) {
      lVar5 = *(long *)(lVar10 + 0x80);
    }
                    /* try { // try from 003c2334 to 003c2343 has its CatchHandler @ 003c24dc */
    lVar5 = FUN_003c1610(*(undefined8 *)(lVar5 + 200));
    if (*(long *)(lVar5 + 0x28) == 0) {
      FUN_003c3ae0();
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < uVar1);
  uVar1 = *(uint *)(param_1 + 0x264);
  if ((uVar1 == 0) || (*(int *)(param_1 + 0x274) == 0)) {
    while (puVar2 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar2;
                    /* try { // try from 003c2464 to 003c246b has its CatchHandler @ 003c24b4 */
      FUN_00111d30(param_2);
    }
    return;
  }
  uVar8 = 0;
  do {
    uVar6 = *(uint *)((long)*(void **)(param_1 + 600) + uVar8 * 4);
    if (uVar6 != 0xffffffff) {
      do {
        uVar6 = *(uint *)(*(long *)(param_1 + 0x250) + (ulong)uVar6 * 4);
      } while (uVar6 != 0xffffffff);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != uVar1);
                    /* try { // try from 003c2394 to 003c239f has its CatchHandler @ 003c2490 */
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(param_1 + 600),-1,(ulong)(uVar1 << 2));
}


