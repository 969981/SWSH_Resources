/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048a4d0; name: FUN_0048a4d0
 */


/* WARNING: Removing unreachable block (ram,0x0048a620) */

long * FUN_0048a4d0(long param_1,long param_2)

{
  long *__src;
  uint uVar1;
  undefined *puVar2;
  void *__dest;
  undefined4 *puVar3;
  void *__src_00;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_02712a90;
  plVar5 = *(long **)(param_1 + 0x88);
  uVar4 = *(uint *)(param_1 + 0x90);
  plVar7 = plVar5;
  if (uVar4 == 0) {
LAB_0048a538:
    if (plVar7 != plVar5 + (ulong)uVar4 * 6) {
      puVar3 = (undefined4 *)FUN_0042c230(param_2);
      goto joined_r0x0048a554;
    }
  }
  else {
    lVar6 = (ulong)uVar4 * 0x30;
    do {
      if (*plVar7 == param_2) goto LAB_0048a538;
      lVar6 = lVar6 + -0x30;
      plVar7 = plVar7 + 6;
    } while (lVar6 != 0);
  }
  uVar8 = *(uint *)(param_1 + 0x94);
  if (uVar8 <= uVar4) {
    uVar8 = uVar8 + 1;
    __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar8 * 0x30);
    if (__dest == (void *)0x0) {
      return (long *)0x0;
    }
    __src_00 = *(void **)(param_1 + 0x88);
    if ((__src_00 != (void *)0x0) && (__src_00 != __dest)) {
      uVar1 = *(uint *)(param_1 + 0x90);
      if (uVar1 != 0) {
        memcpy(__dest,__src_00,0x30);
        if (uVar1 != 1) {
          if (uVar1 == 2) {
            lVar6 = 1;
          }
          else {
            lVar9 = 0;
            lVar6 = 1;
            do {
              memcpy((void *)((long)__dest + lVar9 + 0x30),
                     (void *)(*(long *)(param_1 + 0x88) + lVar9 + 0x30),0x30);
              memcpy((void *)((long)__dest + lVar9 + 0x60),
                     (void *)(*(long *)(param_1 + 0x88) + lVar9 + 0x60),0x30);
              lVar6 = lVar6 + 2;
              lVar9 = lVar9 + 0x60;
            } while ((ulong)uVar1 - (ulong)(~uVar1 & 1) != lVar6);
            if ((~uVar1 & 1) == 0) goto LAB_0048a698;
          }
          memcpy((void *)((long)__dest + lVar6 * 0x30),
                 (void *)(*(long *)(param_1 + 0x88) + lVar6 * 0x30),0x30);
        }
LAB_0048a698:
        __src_00 = *(void **)(param_1 + 0x88);
      }
      FUN_00404870(*(undefined4 *)puVar2,__src_00);
    }
    *(void **)(param_1 + 0x88) = __dest;
    *(uint *)(param_1 + 0x94) = uVar8;
  }
  if (uVar8 <= uVar4) {
    return (long *)0x0;
  }
  uVar4 = *(uint *)(param_1 + 0x90);
  lVar6 = *(long *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x90) = uVar4 + 1;
  plVar7 = (long *)(lVar6 + (ulong)uVar4 * 0x30);
  if (plVar7 == (long *)0x0) {
    return (long *)0x0;
  }
  *plVar7 = param_2;
  plVar7 = (long *)(lVar6 + (ulong)uVar4 * 0x30);
  puVar3 = (undefined4 *)FUN_0042c230(param_2);
joined_r0x0048a554:
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)(plVar7 + 1) = *puVar3;
    *(undefined4 *)((long)plVar7 + 0xc) = puVar3[3];
    *(undefined4 *)(plVar7 + 2) = puVar3[6];
    *(undefined4 *)((long)plVar7 + 0x14) = puVar3[1];
    *(undefined4 *)(plVar7 + 3) = puVar3[4];
    *(undefined4 *)((long)plVar7 + 0x1c) = puVar3[7];
    *(undefined4 *)(plVar7 + 4) = puVar3[2];
    *(undefined4 *)((long)plVar7 + 0x24) = puVar3[5];
    *(undefined4 *)(plVar7 + 5) = puVar3[8];
    return plVar7 + 1;
  }
  plVar7 = *(long **)(param_1 + 0x88);
  uVar4 = *(uint *)(param_1 + 0x90);
  plVar5 = plVar7 + (ulong)uVar4 * 6;
  if (uVar4 != 0) {
    lVar6 = (ulong)uVar4 * 0x30;
    do {
      if (*plVar7 == param_2) goto LAB_0048a72c;
      lVar6 = lVar6 + -0x30;
      plVar7 = plVar7 + 6;
    } while (lVar6 != 0);
    plVar7 = plVar5;
  }
LAB_0048a72c:
  if (plVar5 == plVar7) {
    return (long *)0x0;
  }
  if (plVar7 < plVar5 + -6) {
    do {
      __src = plVar7 + 6;
      memcpy(plVar7,__src,0x30);
      plVar7 = __src;
    } while (__src < plVar5 + -6);
    uVar4 = *(uint *)(param_1 + 0x90);
  }
  *(uint *)(param_1 + 0x90) = uVar4 - 1;
  return (long *)0x0;
}


