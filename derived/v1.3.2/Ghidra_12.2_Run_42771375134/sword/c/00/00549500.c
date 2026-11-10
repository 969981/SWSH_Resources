/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00549500; name: FUN_00549500
 */


long * FUN_00549500(undefined8 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                   uint param_5,undefined8 param_6)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar4 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0xb0,
                                "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp",0x57c,0);
  FUN_005463e0(plVar4,param_1);
  *(undefined8 *)((long)plVar4 + 0x44) = 0;
  plVar4[10] = 0;
  plVar4[0xc] = 3;
  *(undefined4 *)(plVar4 + 0xb) = 0;
  *(undefined2 *)((long)plVar4 + 0x5d) = 0;
  *(undefined4 *)(plVar4 + 0xd) = 0xffffffff;
  plVar4[0xe] = 0;
  *(undefined1 *)(plVar4 + 0xf) = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = 0;
  puVar1 = PTR_DAT_02713bb0 + 0x10;
  *(undefined1 *)(plVar4 + 4) = 0;
  *plVar4 = (long)puVar1;
  plVar4[0x14] = 0;
  plVar4[0x15] = (long)(plVar4 + 10);
  *(undefined8 *)((long)plVar4 + 0xc) = 0x600000008;
  uVar2 = param_5;
  if ((param_4 & 0x800) != 0) {
    uVar2 = param_5 & 0xfffffcff;
  }
  *(uint *)((long)plVar4 + 0x24) = param_4;
  *(uint *)(plVar4 + 5) = uVar2;
  iVar3 = FUN_00548d10(plVar4,param_2,param_3,param_6);
  if (iVar3 < 0) {
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: ",
                   0x582);
      uVar5 = FUN_00546ea0(iVar3);
      FUN_00517ae0("IGPUVertexBuffer::CreateVertexBufferpGPUVertexBuffer->BuildVertexBuffer(Size: %d, nBuffers: %d, Usage: 0x%x, Flag:0x%x) failed (0x%x: %s).\n"
                   ,param_2,param_3,param_4,param_5,iVar3,uVar5);
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
      plVar4 = (long *)0x0;
    }
  }
  return plVar4;
}


