/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00480a30; name: FUN_00480a30
 */


undefined8 FUN_00480a30(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 == (undefined8 *)0x0) {
    return 2;
  }
  plVar7 = (long *)*puVar2;
  uVar5 = *(uint *)(puVar2 + 1);
  uVar6 = (ulong)uVar5;
  plVar1 = plVar7 + uVar6;
  plVar4 = plVar7;
  if (uVar5 != 0) {
    lVar8 = uVar6 << 3;
    plVar3 = plVar7;
    do {
      plVar4 = plVar3;
      if (*plVar3 == param_2) break;
      lVar8 = lVar8 + -8;
      plVar3 = plVar3 + 1;
      plVar4 = plVar1;
    } while (lVar8 != 0);
  }
  if (plVar1 == plVar4) {
    return 2;
  }
  if (plVar4 < plVar1 + -1) {
    uVar6 = (long)plVar7 + ~(ulong)plVar4 + uVar6 * 8 + -8;
    uVar5 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
    if ((uVar5 & 3) != 0) {
      lVar8 = -((ulong)uVar5 & 3);
      plVar7 = plVar4;
      do {
        plVar4 = plVar7 + 1;
        *plVar7 = *plVar4;
        lVar8 = lVar8 + 1;
        plVar7 = plVar4;
      } while (lVar8 != 0);
    }
    if (0x17 < uVar6) {
      do {
        *plVar4 = plVar4[1];
        plVar4[1] = plVar4[2];
        plVar4[2] = plVar4[3];
        plVar7 = plVar4 + 4;
        plVar4[3] = *plVar7;
        plVar4 = plVar7;
      } while (plVar7 < plVar1 + -1);
    }
    uVar5 = *(uint *)(puVar2 + 1);
  }
  *(uint *)(puVar2 + 1) = uVar5 - 1;
  (**(code **)(*param_1 + 0x180))(param_1,0);
  return 1;
}


