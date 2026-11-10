/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f66e0; name: FUN_002f66e0
 */


void FUN_002f66e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  code *pcVar12;
  
  uVar3 = *(uint *)(param_2 + 1);
  if (uVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *(uint *)(param_1 + 1) = uVar3;
    *(uint *)((long)param_1 + 0xc) = uVar3;
    plVar4 = (long *)FUN_00400d30();
    pcVar12 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar2 = 
    "static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar2 = "<allocation names disabled>";
    }
    puVar7 = (undefined4 *)
             (*pcVar12)(plVar4,(ulong)uVar3 << 2,pcVar2,
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    puVar1 = puVar7 + *(uint *)(param_1 + 1);
    *param_1 = puVar7;
    if (puVar7 < puVar1) {
      puVar9 = (undefined4 *)*param_2;
      uVar6 = (ulong)*(uint *)(param_1 + 1) * 4 - 1;
      uVar3 = ((uint)(uVar6 >> 2) & 0x3fffffff) + 1;
      if ((uVar3 & 3) != 0) {
        lVar11 = -((ulong)uVar3 & 3);
        puVar8 = puVar7;
        puVar10 = puVar9;
        do {
          puVar9 = puVar10 + 1;
          lVar11 = lVar11 + 1;
          puVar7 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar7;
          puVar10 = puVar9;
        } while (lVar11 != 0);
      }
      if (0xb < uVar6) {
        do {
          *puVar7 = *puVar9;
          puVar7[1] = puVar9[1];
          puVar7[2] = puVar9[2];
          puVar7[3] = puVar9[3];
          puVar7 = puVar7 + 4;
          puVar9 = puVar9 + 4;
        } while (puVar7 < puVar1);
      }
    }
  }
  return;
}


