/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e1ee0; name: FUN_001e1ee0
 */


void FUN_001e1ee0(undefined1 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  code *pcVar13;
  
  if (param_2 != 0) {
    uVar5 = param_2 * 0x10;
    if ((uVar5 < 0x41) && (param_1[0x40] == '\0')) {
      param_1[0x40] = 1;
      uVar5 = *(uint *)(param_1 + 0x50);
      puVar8 = param_1;
      goto joined_r0x001e1f8c;
    }
    if (uVar5 != 0) {
      plVar9 = (long *)FUN_00400d30();
      pcVar13 = *(code **)(*plVar9 + 0x10);
      plVar6 = (long *)FUN_00400d60();
      uVar7 = (**(code **)(*plVar6 + 0x28))();
      pcVar3 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::NpConnector>::getName() [T = physx::NpConnector]"
      ;
      if ((uVar7 & 1) == 0) {
        pcVar3 = "<allocation names disabled>";
      }
      puVar8 = (undefined1 *)
               (*pcVar13)(plVar9,uVar5,pcVar3,
                          "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
      uVar5 = *(uint *)(param_1 + 0x50);
      goto joined_r0x001e1f8c;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x50);
  puVar8 = (undefined1 *)0x0;
joined_r0x001e1f8c:
  if (uVar5 != 0) {
    puVar2 = puVar8 + (ulong)uVar5 * 0x10;
    puVar10 = *(undefined1 **)(param_1 + 0x48);
    puVar12 = puVar8 + 0x10;
    puVar4 = puVar2;
    if (puVar2 <= puVar12) {
      puVar4 = puVar12;
    }
    puVar11 = puVar8;
    if (((uint)(puVar4 + ~(ulong)puVar8) >> 4 & 1) == 0) {
      *puVar8 = *puVar10;
      puVar1 = (undefined8 *)(puVar10 + 8);
      puVar10 = puVar10 + 0x10;
      *(undefined8 *)(puVar8 + 8) = *puVar1;
      puVar11 = puVar12;
    }
    if (&DAT_00000010 <= puVar4 + ~(ulong)puVar8) {
      do {
        *puVar11 = *puVar10;
        *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar10 + 8);
        puVar11[0x10] = puVar10[0x10];
        *(undefined8 *)(puVar11 + 0x18) = *(undefined8 *)(puVar10 + 0x18);
        puVar11 = puVar11 + 0x20;
        puVar10 = puVar10 + 0x20;
      } while (puVar11 < puVar2);
    }
  }
  if (-1 < *(int *)(param_1 + 0x54)) {
    puVar12 = *(undefined1 **)(param_1 + 0x48);
    if (param_1 == puVar12) {
      param_1[0x40] = 0;
    }
    else if (puVar12 != (undefined1 *)0x0) {
      plVar9 = (long *)FUN_00400d30();
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar12);
    }
  }
  *(undefined1 **)(param_1 + 0x48) = puVar8;
  *(int *)(param_1 + 0x54) = param_2;
  return;
}


