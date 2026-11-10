/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053e220; name: FUN_0053e220
 */


void FUN_0053e220(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_02713b50 + 0x10);
  FUN_0053e360();
  FUN_0053e4c0(param_1);
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x18))();
    param_1[6] = 0;
  }
  param_1[9] = param_1[8];
  *(undefined8 *)PTR_DAT_02713b58 = 0;
  lVar3 = param_1[0x2a00];
  if ((((int)lVar3 != 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713978 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: ",0x362);
    FUN_00517ae0("IGPUDevice::~IGPUDevice(): uiGPUAllocatedMemorySizeInBytes: %d\n",(int)lVar3);
  }
  puVar1 = PTR_PTR_02713988;
  plVar2 = (long *)param_1[0xe];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_005b9b10(*(undefined8 *)puVar1);
  }
  lVar3 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar3 != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
  }
  if (param_1[8] != 0) {
    param_1[9] = param_1[8];
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
  }
  FUN_00545e90(param_1);
  return;
}


