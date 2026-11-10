/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00145b30; name: FUN_00145b30
 */


long * FUN_00145b30(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  void *__src;
  undefined8 *puVar11;
  undefined8 *puVar10;
  
  uVar4 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar4 = 1;
  }
  if (uVar4 == 0) {
    plVar5 = (long *)0x0;
    uVar3 = *(uint *)(param_1 + 1);
  }
  else {
    plVar5 = (long *)FUN_00400d30();
    plVar5 = (long *)(**(code **)(*plVar5 + 0x10))
                               (plVar5,(ulong)uVar4 * 0x50,"NonTrackedAlloc",
                                "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar3 = *(uint *)(param_1 + 1);
  }
  if (uVar3 == 0) {
    uVar8 = 0;
  }
  else {
    __src = (void *)(*param_1 + 0x28);
    puVar1 = PTR_DAT_02710dd8 + 0x10;
    puVar2 = PTR_DAT_02710dd0 + 0x10;
    plVar7 = plVar5;
    do {
      *plVar7 = (long)puVar1;
      plVar7[2] = *(long *)((long)__src + -0x18);
      plVar7[1] = *(long *)((long)__src + -0x20);
      plVar7[3] = *(long *)((long)__src + -0x10);
      *(undefined4 *)(plVar7 + 4) = *(undefined4 *)((long)__src + -8);
      *plVar7 = (long)puVar2;
      memcpy(plVar7 + 5,__src,0x24);
      plVar7 = plVar7 + 10;
      __src = (void *)((long)__src + 0x50);
    } while (plVar7 < plVar5 + (ulong)uVar3 * 10);
    uVar8 = (ulong)*(uint *)(param_1 + 1);
  }
  plVar7 = plVar5 + uVar8 * 10;
  *plVar7 = (long)(PTR_DAT_02710dd8 + 0x10);
  plVar7[2] = *(long *)(param_2 + 0x10);
  plVar7[1] = *(long *)(param_2 + 8);
  plVar7[3] = *(long *)(param_2 + 0x18);
  *(undefined4 *)(plVar7 + 4) = *(undefined4 *)(param_2 + 0x20);
  *plVar7 = (long)(PTR_DAT_02710dd0 + 0x10);
  memcpy(plVar7 + 5,(void *)(param_2 + 0x28),0x24);
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    puVar6 = (undefined8 *)*param_1;
    puVar10 = puVar6;
    do {
      puVar11 = puVar10 + 10;
      (**(code **)*puVar10)(puVar10);
      puVar10 = puVar11;
    } while (puVar11 < puVar6 + (ulong)uVar3 * 10);
  }
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (lVar9 = *param_1, lVar9 != 0)) {
    plVar7 = (long *)FUN_00400d30();
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar9);
  }
  uVar3 = *(uint *)(param_1 + 1);
  *param_1 = (long)plVar5;
  *(uint *)(param_1 + 1) = uVar3 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar4;
  return plVar5 + (ulong)uVar3 * 10;
}


