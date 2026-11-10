/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e1290; name: FUN_001e1290
 */


void FUN_001e1290(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 local_50 [8];
  undefined8 local_48;
  
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 == 0) {
    lVar9 = FUN_001b9960(*(undefined8 *)PTR_DAT_02711048);
    *(long *)(param_1 + 8) = lVar9;
    uVar4 = *(uint *)(lVar9 + 0x54);
  }
  else {
    uVar4 = *(uint *)(lVar9 + 0x54);
  }
  if (((int)uVar4 < 0) && (*(uint *)(lVar9 + 0x50) == (uVar4 & 0x7fffffff))) {
    lVar9 = FUN_001b9960(*(undefined8 *)PTR_DAT_02711048);
    puVar10 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x48);
    FUN_001e2240(lVar9,*(undefined4 *)(*(long *)(param_1 + 8) + 0x50));
    if (*(uint *)(lVar9 + 0x50) != 0) {
      puVar7 = *(undefined1 **)(lVar9 + 0x48);
      puVar2 = puVar7 + (ulong)*(uint *)(lVar9 + 0x50) * 0x10;
      puVar1 = puVar7 + 0x10;
      puVar3 = puVar2;
      if (puVar2 <= puVar1) {
        puVar3 = puVar1;
      }
      puVar8 = puVar7;
      if (((uint)(puVar3 + ~(ulong)puVar7) >> 4 & 1) == 0) {
        *puVar7 = *puVar10;
        *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(puVar10 + 8);
        puVar10 = puVar10 + 0x10;
        puVar8 = puVar1;
      }
      if (&DAT_0000000f < puVar3 + ~(ulong)puVar7) {
        do {
          *puVar8 = *puVar10;
          *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar10 + 8);
          puVar8[0x10] = puVar10[0x10];
          *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)(puVar10 + 0x18);
          puVar8 = puVar8 + 0x20;
          puVar10 = puVar10 + 0x20;
        } while (puVar8 < puVar2);
      }
    }
    lVar6 = *(long *)(param_1 + 8);
    if ((-1 < (int)*(uint *)(lVar6 + 0x54)) && ((*(uint *)(lVar6 + 0x54) & 0x7fffffff) != 0)) {
      lVar11 = *(long *)(lVar6 + 0x48);
      if (lVar6 == lVar11) {
        *(undefined1 *)(lVar6 + 0x40) = 0;
      }
      else if (lVar11 != 0) {
                    /* try { // try from 001e1394 to 001e13a7 has its CatchHandler @ 001e1430 */
        plVar5 = (long *)FUN_00400d30();
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar11);
      }
    }
    *(long *)(param_1 + 8) = lVar9;
  }
  uVar4 = *(uint *)(lVar9 + 0x50);
  if (uVar4 < (*(uint *)(lVar9 + 0x54) & 0x7fffffff)) {
    puVar10 = (undefined1 *)(*(long *)(lVar9 + 0x48) + (ulong)uVar4 * 0x10);
    *puVar10 = param_2;
    *(undefined8 *)(puVar10 + 8) = param_3;
    *(uint *)(lVar9 + 0x50) = uVar4 + 1;
  }
  else {
    local_50[0] = param_2;
    local_48 = param_3;
    FUN_001e2070(lVar9,local_50);
  }
  return;
}


