/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0056e410; name: FUN_0056e410
 */


undefined8 FUN_0056e410(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined5 uStack_74;
  undefined3 local_6f;
  undefined5 uStack_6c;
  
  plVar2 = (long *)(param_1 + 0x29b00);
  puVar3 = (undefined8 *)*plVar2;
  if (puVar3 == (undefined8 *)0x0) {
    lVar1 = param_1 + 0x10;
    puVar3 = (undefined8 *)(param_1 + 0x29b08);
    FUN_005528d0(&local_88,lVar1,"::m_pRenderTextureColorChart_ColorBar");
    uVar4 = CONCAT44(uStack_7c,local_80);
    lVar5 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x128,
                         "C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp",0x1705,0);
    FUN_0059aa70(lVar5,uVar4);
    *plVar2 = lVar5;
    FUN_00551380(&local_88);
    FUN_005528d0(&local_88,lVar1,"::m_pRenderTextureColorChart_ColorBarGraded");
    uVar4 = CONCAT44(uStack_7c,local_80);
    uVar6 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x128,
                         "C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp",0x1706,0);
    FUN_0059aa70(uVar6,uVar4);
    *puVar3 = uVar6;
    FUN_00551380(&local_88);
    FUN_005528d0(&local_88,lVar1,"::m_pRenderTextureColorChart_ColorBar_Small");
    uVar4 = CONCAT44(uStack_7c,local_80);
    uVar6 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x128,
                         "C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp",0x1707,0);
    FUN_0059aa70(uVar6,uVar4);
    *(undefined8 *)(param_1 + 0x29b10) = uVar6;
    FUN_00551380(&local_88);
    FUN_005528d0(&local_88,lVar1,"::m_pRenderTextureColorChart_ColorBarGraded_Small");
    uVar4 = CONCAT44(uStack_7c,local_80);
    uVar6 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x128,
                         "C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp",0x1708,0);
    FUN_0059aa70(uVar6,uVar4);
    *(undefined8 *)(param_1 + 0x29b18) = uVar6;
    FUN_00551380(&local_88);
    FUN_005528d0(&local_88,lVar1,"::m_pRenderTextureColorChart_ColorBarLuminance");
    uVar4 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x128,
                         "C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp",0x1709,0);
    FUN_0059aa70(uVar4,CONCAT44(uStack_7c,local_80));
    *(undefined8 *)(param_1 + 0x29b20) = uVar4;
    FUN_00551380(&local_88);
    local_88 = 0;
    local_78 = 1;
    uStack_6c = 0;
    uStack_74 = 0;
    local_6f = 0;
    uStack_84 = param_2;
    local_80 = param_3;
    uStack_7c = param_4;
    FUN_0059abd0(*plVar2,&local_88);
    local_88 = 0;
    local_78 = 1;
    uStack_6c = 0;
    uStack_74 = 0;
    local_6f = 0;
    uStack_84 = param_2;
    local_80 = param_3;
    uStack_7c = param_4;
    FUN_0059abd0(*puVar3,&local_88);
    local_88 = 0;
    local_78 = 1;
    uStack_6c = 0;
    uStack_74 = 0;
    local_6f = 0;
    uStack_84 = param_2;
    local_80 = param_3;
    uStack_7c = param_4;
    FUN_0059abd0(*(undefined8 *)(param_1 + 0x29b10),&local_88);
    local_88 = 0;
    local_78 = 1;
    uStack_6c = 0;
    uStack_74 = 0;
    local_6f = 0;
    uStack_84 = param_2;
    local_80 = param_3;
    uStack_7c = param_4;
    FUN_0059abd0(*(undefined8 *)(param_1 + 0x29b18),&local_88);
    local_88 = 0;
    local_80 = 4;
    local_78 = 1;
    uStack_6c = 0;
    uStack_74 = 0;
    local_6f = 0;
    uStack_84 = param_2;
    uStack_7c = param_4;
    uVar4 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x29b20),&local_88);
    if (*(long *)(param_1 + 0x20) != 0) {
      (*(code *)**(undefined8 **)*plVar2)();
      (*(code *)**(undefined8 **)*puVar3)((undefined8 *)*puVar3,*(undefined8 *)(param_1 + 0x20));
      (**(code **)**(undefined8 **)(param_1 + 0x29b10))
                (*(undefined8 **)(param_1 + 0x29b10),*(undefined8 *)(param_1 + 0x20));
      (**(code **)**(undefined8 **)(param_1 + 0x29b18))
                (*(undefined8 **)(param_1 + 0x29b18),*(undefined8 *)(param_1 + 0x20));
      uVar4 = (**(code **)**(undefined8 **)(param_1 + 0x29b20))
                        (*(undefined8 **)(param_1 + 0x29b20),*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if ((puVar3[0x15] == 0) || (puVar3[0x17] == 0)) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)*puVar3)();
      (**(code **)**(undefined8 **)(param_1 + 0x29b10))
                (*(undefined8 **)(param_1 + 0x29b10),*(undefined8 *)(param_1 + 0x20));
      (**(code **)**(undefined8 **)(param_1 + 0x29b08))
                (*(undefined8 **)(param_1 + 0x29b08),*(undefined8 *)(param_1 + 0x20));
      (**(code **)**(undefined8 **)(param_1 + 0x29b18))
                (*(undefined8 **)(param_1 + 0x29b18),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0056e7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)**(undefined8 **)(param_1 + 0x29b20))
                        (*(undefined8 **)(param_1 + 0x29b20),*(undefined8 *)(param_1 + 0x20));
      return uVar4;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


