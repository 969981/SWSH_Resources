/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00549260; name: FUN_00549260
 */


/* WARNING: Removing unreachable block (ram,0x00549414) */

long FUN_00549260(long param_1,uint param_2,ulong param_3)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  char *pcVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  long lVar10;
  
  if (*(char *)(param_1 + 0x5c) != '\0') {
    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      return 0;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: ",0x319)
    ;
    pcVar4 = "IGPUBuffer::Map(): Buffer is already mapped.\n";
LAB_005492d8:
    FUN_00517ae0(pcVar4);
    return 0;
  }
  *(undefined1 *)(param_1 + 0x5d) = 0;
  if ((param_2 >> 2 & 1) == 0) {
    uVar7 = *(uint *)(param_1 + 0x58);
  }
  else {
    if ((*(byte *)(param_1 + 0x25) >> 1 & 1) == 0) {
      if (*(int *)PTR_DAT_02713970 == 0) {
        return 0;
      }
      if (*(int *)PTR_DAT_02713980 == 0) {
        return 0;
      }
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: ",
                   0x32e);
      pcVar4 = 
      "IGPUBuffer::Map(): GPUUSAGE_DYNAMIC must be set at initialize for Map() with GPUMAPA_FLAG_DISCARD.\n"
      ;
      goto LAB_005492d8;
    }
    uVar7 = *(int *)(param_1 + 0x58) + 1;
    *(uint *)(param_1 + 0x58) = uVar7;
    if (*(uint *)(param_1 + 0x48) <= uVar7) {
      uVar7 = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x5d) = 0x101;
      bVar3 = true;
      lVar8 = *(long *)(param_1 + 0x50);
      uVar2 = *(uint *)(param_1 + 0xc);
      lVar10 = *(long *)(param_1 + 0x18);
      goto joined_r0x005493a0;
    }
  }
  bVar3 = false;
  lVar8 = *(long *)(param_1 + 0x50);
  uVar2 = *(uint *)(param_1 + 0xc);
  lVar10 = *(long *)(param_1 + 0x18);
joined_r0x005493a0:
  if (lVar10 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(lVar10 + 0x30);
  }
  if (param_2 - 1 < 6) {
    uVar9 = *(undefined4 *)(&DAT_01d6b5d0 + (long)(int)(param_2 - 1) * 4);
  }
  else {
    uVar9 = 0;
  }
  uVar1 = 5;
  if (bVar3) {
    uVar1 = uVar9;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  if (((uVar2 | 1) == 9) &&
     (uVar6 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(lVar8 + (ulong)uVar7 * 8)),
     (uVar6 & 1) != 0)) {
    lVar8 = 0;
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar8 = *(long *)(param_1 + 0x80) + (param_3 & 0xffffffff);
    }
    if (lVar8 != 0) {
      *(undefined1 *)(param_1 + 0x5c) = 1;
    }
  }
  else {
    lVar8 = 0;
  }
  return lVar8;
}


