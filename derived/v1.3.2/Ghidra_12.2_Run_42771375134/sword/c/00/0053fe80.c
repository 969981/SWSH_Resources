/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053fe80; name: FUN_0053fe80
 */


int FUN_0053fe80(long *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  long *plVar13;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar7 = PTR_DAT_02713978;
  puVar6 = PTR_DAT_02713970;
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713978 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: ",0x10bc);
    FUN_00517ae0("==== IGPUDevice::InitializeDevice() ====\n");
  }
  param_1[0x29ff] = 0;
  param_1[0x29fe] = 0;
  if (param_3 == (long *)0x0) {
    iVar9 = -6;
  }
  else {
    lVar10 = (**(code **)(*param_3 + 0x28))(param_3);
    if (param_2 != (undefined8 *)0x0) {
      plVar13 = (long *)param_2[3];
      if (plVar13 != param_3 && plVar13 != (long *)0x0) {
        param_3 = plVar13;
      }
    }
    plVar13 = (long *)param_1[6];
    if (param_3 != plVar13) {
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x18))();
        param_1[6] = 0;
      }
      param_1[6] = (long)param_3;
      (**(code **)(*param_3 + 0x10))(param_3);
    }
    param_1[7] = lVar10;
    puVar8 = PTR_DAT_02713a88;
    *(undefined4 *)(PTR_DAT_02713a88 + 0x10) = 0;
    *(undefined8 *)puVar8 = 0;
    *(undefined8 *)(puVar8 + 8) = 0;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0;
    if (param_2 == (undefined8 *)0x0) {
      uVar12 = 0;
    }
    else {
      uVar2 = param_2[3];
      uVar11 = param_2[4];
      uVar3 = param_2[5];
      *(undefined8 *)(puVar8 + 0x10) = param_2[2];
      uVar1 = *param_2;
      uVar4 = param_2[1];
      *(undefined8 *)(puVar8 + 0x18) = uVar2;
      *(undefined8 *)(puVar8 + 0x20) = uVar11;
      *(undefined8 *)(puVar8 + 0x28) = uVar3;
      *(undefined8 *)puVar8 = uVar1;
      *(undefined8 *)(puVar8 + 8) = uVar4;
      uVar12 = *(undefined4 *)(puVar8 + 0x10);
    }
    *(undefined4 *)(param_1 + 5) = uVar12;
    FUN_0053fb70(param_1);
    iVar9 = FUN_0053f2b0(param_1);
    iVar5 = *(int *)puVar6;
    if (iVar9 < 0) {
      if ((iVar5 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: ",
                     0x10eb);
        uVar11 = FUN_00546ea0(iVar9);
        FUN_00517ae0("IGPUDevice::InitializeDevice(): InitializeDeviceBuffers() failed (0x%x: %s).\n"
                     ,iVar9,uVar11);
      }
    }
    else {
      if ((iVar5 != 0) && (*(int *)puVar7 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: ",0x10ef);
        FUN_00517ae0("IGPUDevice::InitializeDevice(): InitializeDeviceBuffers() succeeded.\n",iVar9)
        ;
      }
      *(long **)PTR_DAT_02713b58 = param_1;
      *(undefined1 *)((long)param_1 + 0x14efa) = 0;
      iVar9 = (int)param_1[5];
      *(bool *)((long)param_1 + 0x14efb) = 1 < iVar9;
      param_1[0x29de] = 0x1000101000000;
      *(bool *)((long)param_1 + 0x14ef9) = iVar9 < 2;
      *(bool *)(param_1 + 0x29df) = iVar9 < 2;
      (**(code **)(*param_1 + 0x138))(param_1);
      (**(code **)(*param_1 + 0x140))(param_1,0xffffffff);
      (**(code **)(*param_1 + 0x150))(param_1,0);
      local_50 = 0;
      uStack_48 = 0;
      (**(code **)(*param_1 + 400))(param_1,&local_50);
      iVar9 = 0;
      if ((*(int *)puVar6 != 0) && (*(int *)puVar7 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: ",0x10fe);
        FUN_00517ae0("==== IGPUDevice::InitializeDevice() succeeded. ====\n");
        iVar9 = 0;
      }
    }
  }
  return iVar9;
}


