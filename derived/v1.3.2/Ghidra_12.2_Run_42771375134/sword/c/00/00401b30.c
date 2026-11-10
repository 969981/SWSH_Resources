/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00401b30; name: FUN_00401b30
 */


uint * FUN_00401b30(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar9 = (int)param_2 + 0xf;
  uVar9 = uVar9 | uVar9 >> 1;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = *(uint *)(PTR_DAT_02710cb8 + (ulong)((uVar9 | uVar9 >> 0x10) * 0x7c4acdd >> 0x1b) * 4);
  uVar7 = uVar9;
  if (uVar9 < 9) {
    uVar7 = 8;
  }
  if (0x10 < uVar7) {
    if (param_2 + 0x10 == 0) {
      puVar8 = (uint *)0x0;
    }
    else {
      plVar6 = (long *)FUN_00400d30();
      puVar8 = (uint *)(**(code **)(*plVar6 + 0x10))
                                 (plVar6,param_2 + 0x10,"NonTrackedAlloc",param_3,param_4);
    }
    goto LAB_00401ca0;
  }
  lVar3 = FUN_00400880();
  FUN_003ff570(*(undefined8 *)(lVar3 + 0x1c8));
                    /* try { // try from 00401ba8 to 00401bab has its CatchHandler @ 00401cc0 */
  lVar4 = FUN_00400880();
  lVar4 = *(long *)(lVar4 + 0x1b8);
                    /* try { // try from 00401bb0 to 00401bb3 has its CatchHandler @ 00401cc8 */
  lVar5 = FUN_00400880();
  lVar4 = lVar4 + (ulong)uVar7 * 8;
  puVar10 = (undefined8 *)(lVar4 + -0x40);
  puVar1 = (undefined8 *)(lVar4 + -0x28);
  puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x1b8) + (ulong)*(uint *)(lVar5 + 0x1c0) * 8);
  if (puVar2 <= puVar1) {
    puVar1 = puVar2;
  }
  if (puVar10 < puVar1) {
    do {
      puVar8 = (uint *)*puVar10;
      if (puVar8 != (uint *)0x0) {
        *puVar10 = *(undefined8 *)puVar8;
                    /* try { // try from 00401c84 to 00401c87 has its CatchHandler @ 00401cc8 */
        lVar4 = FUN_00400880();
        uVar9 = (int)((ulong)((long)puVar10 - *(long *)(lVar4 + 0x1b8)) >> 3) + 8;
        goto LAB_00401c98;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 < puVar1);
    if (uVar7 < 0x1f) goto LAB_00401c3c;
    puVar8 = (uint *)0x0;
  }
  else {
LAB_00401c3c:
                    /* try { // try from 00401c3c to 00401c6b has its CatchHandler @ 00401cc4 */
    plVar6 = (long *)FUN_00400d30();
    puVar8 = (uint *)(**(code **)(*plVar6 + 0x10))
                               (plVar6,(long)(2 << (ulong)(uVar7 & 0x1f)),"NonTrackedAlloc",param_3,
                                param_4);
  }
  uVar9 = uVar7;
LAB_00401c98:
                    /* try { // try from 00401c9c to 00401c9f has its CatchHandler @ 00401cbc */
  FUN_003ff5a0(*(undefined8 *)(lVar3 + 0x1c8));
LAB_00401ca0:
  *puVar8 = uVar9;
  return puVar8 + 4;
}


