/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0056d890; name: FUN_0056d890
 */


int FUN_0056d890(long *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_02713978;
  puVar1 = PTR_DAT_02713970;
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713978 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX: ",0x132c);
    FUN_00517ae0("==== TEXSHADERSET::InitializeDevice() ====\n");
  }
  if (((param_3 & 1) == 0) && (iVar3 = FUN_00564080(param_1,param_2), iVar3 < 0)) {
    if (*(int *)puVar1 == 0) {
      return iVar3;
    }
    if (*(int *)PTR_DAT_02713980 == 0) {
      return iVar3;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: ",0x133c);
    uVar4 = FUN_00546ea0(iVar3);
    pcVar5 = "TEXSHADERSET::InitializeDevice(): CreateEffect() failed (0x%x: %s).\n";
LAB_0056da18:
    FUN_00517ae0(pcVar5,iVar3,uVar4);
  }
  else {
    if ((long *)*param_1 != (long *)0x0) {
      iVar3 = (**(code **)(*(long *)*param_1 + 0x50))();
      if (iVar3 < 0) {
        if (*(int *)puVar1 == 0) {
          return iVar3;
        }
        if (*(int *)PTR_DAT_02713980 == 0) {
          return iVar3;
        }
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: ",0x134c
                    );
        uVar4 = FUN_00546ea0(iVar3);
        pcVar5 = "TEXSHADERSET::InitializeDevice(): m_pEffect->OnResetDevice() failed (0x%x: %s).\n"
        ;
        goto LAB_0056da18;
      }
      local_48 = 0;
      local_4c = 0xbf800000;
      if (*(char *)(param_2 + 0x58) != '\0') {
        local_4c = 0x3f800000;
      }
      local_50 = 0x3f800000;
      (**(code **)(*(long *)*param_1 + 0xa0))((long *)*param_1,(int)param_1[0x14],&local_50);
    }
    iVar3 = 0;
    if ((*(int *)puVar1 != 0) && (*(int *)puVar2 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX: ",0x14f7);
      FUN_00517ae0("==== TEXSHADERSET::InitializeDevice() succeeded. ====\n");
      iVar3 = 0;
    }
  }
  return iVar3;
}


