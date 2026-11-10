/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005496b0; name: FUN_005496b0
 */


long * FUN_005496b0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   uint param_5,uint param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  plVar3 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0xb8,
                                "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp",0x5da,0);
  FUN_005463e0(plVar3,param_1);
  *(undefined8 *)((long)plVar3 + 0x44) = 0;
  plVar3[10] = 0;
  plVar3[0xc] = 3;
  *(undefined4 *)(plVar3 + 0xb) = 0;
  *(undefined2 *)((long)plVar3 + 0x5d) = 0;
  *(undefined4 *)(plVar3 + 0xd) = 0xffffffff;
  plVar3[0xe] = 0;
  *(undefined1 *)(plVar3 + 0xf) = 0;
  *(undefined1 *)(plVar3 + 4) = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  *plVar3 = (long)(PTR_DAT_02713bb8 + 0x10);
  *(undefined4 *)(plVar3 + 0x16) = param_4;
  plVar3[0x14] = 0;
  plVar3[0x15] = (long)(plVar3 + 10);
  *(undefined8 *)((long)plVar3 + 0xc) = 0x700000009;
  uVar1 = param_6;
  if ((param_5 & 0x800) != 0) {
    uVar1 = param_6 & 0xfffffcff;
  }
  *(uint *)((long)plVar3 + 0x24) = param_5;
  *(uint *)(plVar3 + 5) = uVar1;
  iVar2 = FUN_00548d10(plVar3,param_2,param_3,param_7);
  if (iVar2 < 0) {
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: ",
                   0x5e0);
      uVar4 = FUN_00546e10(param_4,0);
      uVar5 = FUN_00546ea0(iVar2);
      FUN_00517ae0("IGPUIndexBuffer::CreateIndexBufferpGPUIndexBuffer->BuildIndexBuffer(Size: %d, nBuffers: %d, %s, Usage: 0x%x, Flag:0x%x) failed (0x%x: %s).\n"
                   ,param_2,param_3,uVar4,param_5,param_6,iVar2,uVar5);
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}


