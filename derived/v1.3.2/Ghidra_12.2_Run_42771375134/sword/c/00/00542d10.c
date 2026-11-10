/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00542d10; name: FUN_00542d10
 */


long * FUN_00542d10(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  uint uVar5;
  
  plVar3 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x15030,
                                "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp",0x3542,0);
  FUN_0053ddb0();
  iVar2 = FUN_0053fe80(plVar3,param_1,param_2);
  if (iVar2 < 0) {
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    (**(code **)(*plVar3 + 8))(plVar3);
    return (long *)0x0;
  }
  uVar5 = *(uint *)(param_1 + 0x20);
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      iVar2 = (**(code **)(*(long *)plVar3[7] + 0x2c8))();
      uVar5 = (uint)(iVar2 == 0);
    }
    else if (uVar5 != 1) {
      if (*(int *)PTR_DAT_02713970 == 0) {
        return (long *)0x0;
      }
      if (*(int *)PTR_DAT_02713980 == 0) {
        return (long *)0x0;
      }
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: ",
                   0x3571);
      pcVar4 = "IGPUDevice::CreateDevice(): m_eViewportOriginMode is invalid.\n";
      goto LAB_00542e74;
    }
  }
  *(char *)(plVar3 + 0xb) = (char)uVar5;
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 == 3) {
    iVar2 = (**(code **)(*(long *)plVar3[7] + 0x2d0))();
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = true;
    if (iVar2 != 1) {
      if (iVar2 == 0) {
        *(undefined1 *)((long)plVar3 + 0x59) = 0;
        return plVar3;
      }
      if (*(int *)PTR_DAT_02713970 == 0) {
        return (long *)0x0;
      }
      if (*(int *)PTR_DAT_02713980 == 0) {
        return (long *)0x0;
      }
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: ",
                   0x359f);
      pcVar4 = "IGPUDevice::CreateDevice(): eClipVolumeNearPlaneMode is invalid.\n";
LAB_00542e74:
      FUN_00517ae0(pcVar4);
      return (long *)0x0;
    }
  }
  *(bool *)((long)plVar3 + 0x59) = bVar1;
  return plVar3;
}


