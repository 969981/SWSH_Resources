/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001aac20; name: FUN_001aac20
 */


void FUN_001aac20(ulong *param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  code *pcVar10;
  
  if (param_2 != 0) {
    plVar3 = (long *)FUN_00400d30();
    pcVar10 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::W2STransformTemp>::getName() [T = physx::Pt::W2STransformTemp]"
    ;
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar6 = (*pcVar10)(plVar3,(ulong)param_2 * 0x38 + 0x17,pcVar1,
                       "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    if (lVar6 != 0) {
      puVar9 = (undefined4 *)(lVar6 + 0x17U & 0xfffffffffffffff0);
      *(long *)(puVar9 + -2) = (long)puVar9 - lVar6;
      uVar2 = (uint)param_1[1];
      goto joined_r0x001aacc4;
    }
  }
  puVar9 = (undefined4 *)0x0;
  uVar2 = (uint)param_1[1];
joined_r0x001aacc4:
  if (uVar2 != 0) {
    puVar7 = (undefined4 *)*param_1;
    puVar8 = puVar9;
    do {
      *puVar8 = *puVar7;
      puVar8[1] = puVar7[1];
      puVar8[2] = puVar7[2];
      puVar8[3] = puVar7[3];
      puVar8[4] = puVar7[4];
      puVar8[5] = puVar7[5];
      puVar8[6] = puVar7[6];
      puVar8[7] = puVar7[7];
      puVar8[8] = puVar7[8];
      puVar8[9] = puVar7[9];
      puVar8[10] = puVar7[10];
      puVar8[0xb] = puVar7[0xb];
      puVar8[0xc] = puVar7[0xc];
      puVar8[0xd] = puVar7[0xd];
      puVar8 = puVar8 + 0xe;
      puVar7 = puVar7 + 0xe;
    } while (puVar8 < puVar9 + (ulong)uVar2 * 0xe);
  }
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar5 = *param_1, uVar5 != 0)) {
    lVar6 = *(long *)(uVar5 - 8);
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar5 - lVar6);
  }
  *param_1 = (ulong)puVar9;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return;
}


