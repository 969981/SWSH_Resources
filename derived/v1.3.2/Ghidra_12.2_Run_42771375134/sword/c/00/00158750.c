/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00158750; name: FUN_00158750
 */


void FUN_00158750(ulong *param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
  uVar2 = *(uint *)(param_2 + 1);
  if (uVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *(uint *)(param_1 + 1) = uVar2;
  *(uint *)((long)param_1 + 0xc) = uVar2;
  plVar3 = (long *)FUN_00400d30();
  puVar4 = (undefined8 *)
           (**(code **)(*plVar3 + 0x10))
                     (plVar3,(ulong)uVar2 << 3,"NonTrackedAlloc",
                      "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
  puVar1 = puVar4 + (uint)param_1[1];
  *param_1 = (ulong)puVar4;
  if (puVar4 < puVar1) {
    puVar6 = (undefined8 *)*param_2;
    uVar8 = (ulong)(uint)param_1[1] * 8 - 1;
    uVar2 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
    if ((uVar2 & 3) != 0) {
      lVar9 = -((ulong)uVar2 & 3);
      puVar5 = puVar4;
      puVar7 = puVar6;
      do {
        puVar6 = puVar7 + 1;
        lVar9 = lVar9 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = *puVar7;
        puVar5 = puVar4;
        puVar7 = puVar6;
      } while (lVar9 != 0);
    }
    if (0x17 < uVar8) {
      do {
        *puVar4 = *puVar6;
        puVar4[1] = puVar6[1];
        puVar4[2] = puVar6[2];
        puVar4[3] = puVar6[3];
        puVar4 = puVar4 + 4;
        puVar6 = puVar6 + 4;
      } while (puVar4 < puVar1);
    }
  }
  return;
}


