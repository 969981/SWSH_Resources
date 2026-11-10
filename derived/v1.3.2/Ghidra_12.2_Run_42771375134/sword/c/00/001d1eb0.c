/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d1eb0; name: FUN_001d1eb0
 */


undefined1 * FUN_001d1eb0(long *param_1,undefined1 *param_2)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  code *pcVar15;
  
  iVar2 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    iVar2 = 1;
  }
  if (iVar2 == 0) {
    puVar6 = (undefined1 *)0x0;
    uVar8 = *(uint *)(param_1 + 1);
    puVar9 = (undefined1 *)(ulong)uVar8;
    puVar7 = puVar9;
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    pcVar15 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::PxFlags<physx::PxClientBehaviorFlag::Enum, unsigned char> >::getName() [T = physx::PxFlags<physx::PxClientBehaviorFlag::Enum, unsigned char>]"
    ;
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    puVar6 = (undefined1 *)
             (*pcVar15)(plVar3,iVar2,pcVar1,
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar8 = *(uint *)(param_1 + 1);
    puVar9 = (undefined1 *)(ulong)uVar8;
    puVar7 = puVar6 + (long)puVar9;
  }
  if (uVar8 != 0) {
    puVar10 = (undefined1 *)*param_1;
    puVar13 = puVar6;
    if (((ulong)puVar9 & 3) != 0) {
      lVar14 = -((ulong)puVar9 & 3);
      puVar11 = puVar10;
      puVar12 = puVar6;
      do {
        puVar10 = puVar11 + 1;
        lVar14 = lVar14 + 1;
        puVar13 = puVar12 + 1;
        *puVar12 = *puVar11;
        puVar11 = puVar10;
        puVar12 = puVar13;
      } while (lVar14 != 0);
    }
    if ((undefined1 *)0x2 < puVar9 + -1) {
      do {
        *puVar13 = *puVar10;
        puVar13[1] = puVar10[1];
        puVar13[2] = puVar10[2];
        puVar13[3] = puVar10[3];
        puVar13 = puVar13 + 4;
        puVar10 = puVar10 + 4;
      } while (puVar13 != puVar7);
    }
  }
  uVar8 = (uint)puVar9;
  *puVar7 = *param_2;
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (lVar14 = *param_1, lVar14 != 0)) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar14);
    uVar8 = *(uint *)(param_1 + 1);
    puVar7 = puVar6 + uVar8;
  }
  *param_1 = (long)puVar6;
  *(uint *)(param_1 + 1) = uVar8 + 1;
  *(int *)((long)param_1 + 0xc) = iVar2;
  return puVar7;
}


