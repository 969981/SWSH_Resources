/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e2070; name: FUN_001e2070
 */


undefined1 * FUN_001e2070(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  code *pcVar14;
  
  iVar4 = *(uint *)(param_1 + 0x54) << 1;
  if ((*(uint *)(param_1 + 0x54) & 0x7fffffff) == 0) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    uVar5 = iVar4 * 0x10;
    if (uVar5 < 0x41 && param_1[0x40] == '\0') {
      param_1[0x40] = 1;
      uVar5 = *(uint *)(param_1 + 0x50);
      uVar8 = (ulong)uVar5;
      puVar10 = param_1 + uVar8 * 0x10;
      puVar9 = param_1;
      goto joined_r0x001e212c;
    }
    if (uVar5 != 0) {
      plVar6 = (long *)FUN_00400d30();
      pcVar14 = *(code **)(*plVar6 + 0x10);
      plVar7 = (long *)FUN_00400d60();
      uVar8 = (**(code **)(*plVar7 + 0x28))();
      pcVar2 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::NpConnector>::getName() [T = physx::NpConnector]"
      ;
      if ((uVar8 & 1) == 0) {
        pcVar2 = "<allocation names disabled>";
      }
      puVar9 = (undefined1 *)
               (*pcVar14)(plVar6,uVar5,pcVar2,
                          "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
      uVar5 = *(uint *)(param_1 + 0x50);
      uVar8 = (ulong)uVar5;
      puVar10 = puVar9 + uVar8 * 0x10;
      goto joined_r0x001e212c;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x50);
  uVar8 = (ulong)uVar5;
  puVar10 = (undefined1 *)(uVar8 << 4);
  puVar9 = (undefined1 *)0x0;
joined_r0x001e212c:
  if (uVar5 != 0) {
    puVar11 = *(undefined1 **)(param_1 + 0x48);
    puVar13 = puVar9 + 0x10;
    puVar3 = puVar10;
    if (puVar10 <= puVar13) {
      puVar3 = puVar13;
    }
    puVar12 = puVar9;
    if (((uint)(puVar3 + ~(ulong)puVar9) >> 4 & 1) == 0) {
      *puVar9 = *puVar11;
      puVar1 = (undefined8 *)(puVar11 + 8);
      puVar11 = puVar11 + 0x10;
      *(undefined8 *)(puVar9 + 8) = *puVar1;
      puVar12 = puVar13;
    }
    if (&DAT_00000010 <= puVar3 + ~(ulong)puVar9) {
      do {
        *puVar12 = *puVar11;
        *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar11 + 8);
        puVar12[0x10] = puVar11[0x10];
        *(undefined8 *)(puVar12 + 0x18) = *(undefined8 *)(puVar11 + 0x18);
        puVar12 = puVar12 + 0x20;
        puVar11 = puVar11 + 0x20;
      } while (puVar12 < puVar10);
    }
  }
  *puVar10 = *param_2;
  *(undefined8 *)(puVar9 + uVar8 * 0x10 + 8) = *(undefined8 *)(param_2 + 8);
  if (-1 < *(int *)(param_1 + 0x54)) {
    puVar13 = *(undefined1 **)(param_1 + 0x48);
    if (param_1 == puVar13) {
      param_1[0x40] = 0;
    }
    else if (puVar13 != (undefined1 *)0x0) {
      plVar6 = (long *)FUN_00400d30();
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar13);
      uVar8 = (ulong)*(uint *)(param_1 + 0x50);
      puVar10 = puVar9 + uVar8 * 0x10;
    }
  }
  *(undefined1 **)(param_1 + 0x48) = puVar9;
  *(int *)(param_1 + 0x50) = (int)uVar8 + 1;
  *(int *)(param_1 + 0x54) = iVar4;
  return puVar10;
}


