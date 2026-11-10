/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00202520; name: FUN_00202520
 */


void FUN_00202520(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  code *pcVar12;
  
  if (param_2 == 0) {
    puVar6 = (undefined1 *)0x0;
    uVar2 = *(uint *)(param_1 + 1);
    puVar10 = (undefined1 *)*param_1;
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    pcVar12 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = "static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]";
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    puVar6 = (undefined1 *)
             (*pcVar12)(plVar3,param_2,pcVar1,
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar2 = *(uint *)(param_1 + 1);
    puVar10 = (undefined1 *)*param_1;
  }
  if (uVar2 != 0) {
    uVar5 = (ulong)uVar2;
    puVar8 = puVar6;
    if ((uVar2 & 3) != 0) {
      lVar9 = -(uVar5 & 3);
      puVar7 = puVar6;
      puVar11 = puVar10;
      do {
        puVar10 = puVar11 + 1;
        lVar9 = lVar9 + 1;
        puVar8 = puVar7 + 1;
        *puVar7 = *puVar11;
        puVar7 = puVar8;
        puVar11 = puVar10;
      } while (lVar9 != 0);
    }
    if (2 < uVar5 - 1) {
      do {
        *puVar8 = *puVar10;
        puVar8[1] = puVar10[1];
        puVar8[2] = puVar10[2];
        puVar8[3] = puVar10[3];
        puVar8 = puVar8 + 4;
        puVar10 = puVar10 + 4;
      } while (puVar8 != puVar6 + uVar5);
    }
    puVar10 = (undefined1 *)*param_1;
  }
  if ((puVar10 != (undefined1 *)0x0) && (-1 < *(int *)((long)param_1 + 0xc))) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,puVar10);
  }
  *param_1 = puVar6;
  *(int *)((long)param_1 + 0xc) = param_2;
  return;
}


