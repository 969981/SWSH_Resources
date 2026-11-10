/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0056eb30; name: FUN_0056eb30
 */


undefined8 FUN_0056eb30(long param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined5 uStack_74;
  undefined3 local_6f;
  undefined5 uStack_6c;
  
  plVar1 = (long *)(param_1 + 0x29b48);
  puVar3 = (undefined8 *)*plVar1;
  if (puVar3 == (undefined8 *)0x0) {
    FUN_005528d0(&local_88,param_1 + 0x10,"::m_pRenderTextureColorChart_WaveformMonitor");
    puVar2 = PTR_PTR_02713988;
    lVar5 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x128,
                         "C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp",0x178a,0);
    FUN_0059aa70(lVar5,CONCAT44(uStack_7c,local_80));
    *plVar1 = lVar5;
    FUN_00551380(&local_88);
    local_88 = 0;
    uStack_7c = 0x1c;
    uStack_78 = 1;
    uStack_6c = 0;
    uStack_74 = 0;
    local_6f = 0;
    uStack_84 = param_2;
    local_80 = param_3;
    FUN_0059abd0(*plVar1,&local_88);
    FUN_005528d0(&local_88,param_1 + 0x10,"::m_pRenderTextureColorChart_WaveformSource");
    uVar4 = CONCAT44(uStack_7c,local_80);
    uVar6 = FUN_005b9a50(*(undefined8 *)puVar2,0x128,
                         "C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp",0x1797,0);
    FUN_0059aa70(uVar6,uVar4);
    puVar3 = (undefined8 *)(param_1 + 0x29b50);
    *puVar3 = uVar6;
    FUN_00551380(&local_88);
    local_88 = 0;
    uStack_7c = 10;
    uStack_78 = 1;
    uStack_6c = 0;
    uStack_74 = 0;
    local_6f = 0;
    uStack_84 = param_2;
    local_80 = param_3;
    uVar4 = FUN_0059abd0(*puVar3,&local_88);
    if (*(long *)(param_1 + 0x20) != 0) {
      (*(code *)**(undefined8 **)*plVar1)();
      uVar4 = (*(code *)**(undefined8 **)*puVar3)
                        ((undefined8 *)*puVar3,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if ((puVar3[0x15] == 0) || (puVar3[0x17] == 0)) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)*puVar3)();
                    /* WARNING: Could not recover jumptable at 0x0056ed04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)**(undefined8 **)(param_1 + 0x29b50))
                        (*(undefined8 **)(param_1 + 0x29b50),*(undefined8 *)(param_1 + 0x20));
      return uVar4;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


