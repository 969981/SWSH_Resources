/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006522e0; name: FUN_006522e0
 */


undefined8 FUN_006522e0(long *param_1,long *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  uint uVar9;
  ulong local_c0 [6];
  ulong local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_64;
  undefined1 auStack_60 [16];
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  FUN_006966f0(auStack_60,param_1 + 4,1);
  uVar1 = param_3 + 0x102;
  plVar4 = (long *)FUN_005cbff0();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  lVar5 = (**(code **)(*plVar4 + 0x38))
                    (plVar4,(ulong)uVar1 * 0x18,1,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_DescriptorHeap.cpp"
                     ,0x157);
  *param_1 = lVar5;
  if (lVar5 == 0) goto LAB_006525f4;
  uVar6 = (**(code **)(*param_2 + 0x2a8))(param_2);
  local_64 = 0;
  (**(code **)PTR_DAT_02713a38)(uVar6,0x10,&local_64);
  uVar9 = (local_64 + local_64 * uVar1) - 1 & -local_64;
  lVar5 = (**(code **)(*param_2 + 0xf0))(param_2,0,0);
  param_1[1] = lVar5;
  local_c0[4] = 0x400000000;
  local_c0[5] = 0;
  local_c0[1] = 0;
  local_90 = 0;
  local_c0[0] = (ulong)uVar9;
  local_c0[3] = 0;
  local_c0[2] = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  uVar3 = FUN_006636d0(0xc,0,0,0);
  local_90 = CONCAT44(uStack_8c,uVar3) & 0xfffffffffffffffc | 2;
  uVar7 = (**(code **)(*(long *)param_1[1] + 0x40))((long *)param_1[1],local_c0);
  if (((uVar7 & 1) == 0) ||
     (uVar7 = FUN_00653070(param_1[1],(long)(int)uVar9,(long)local_64,param_1 + 0xc),
     (uVar7 & 1) == 0)) goto LAB_006525f4;
  param_1[0xd] = (param_1[0xc] + (long)local_64) - 1U & -(long)local_64;
  lVar5 = (**(code **)(*plVar4 + 0x38))
                    (plVar4,0x20,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_DescriptorHeap.cpp"
                     ,0x182);
  param_1[10] = lVar5;
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x48))
              (plVar4,*param_1,
               "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_DescriptorHeap.cpp",
               0x186);
    if ((long *)param_1[1] != (long *)0x0) {
      (**(code **)(*(long *)param_1[1] + 0x18))();
      param_1[1] = 0;
    }
    lVar5 = param_1[10];
    if (lVar5 != 0) {
      pcVar8 = *(code **)(*plVar4 + 0x48);
      uVar6 = 0x188;
      goto LAB_006525e4;
    }
  }
  else {
    uVar6 = (**(code **)(*(long *)param_1[1] + 0x80))();
    cVar2 = (**(code **)PTR_DAT_02714ad8)(lVar5,uVar6,param_1[0xd],uVar1);
    if (cVar2 == '\x01') {
      *(undefined4 *)((long)param_1 + 0x74) = param_4;
      *(int *)((long)param_1 + 0x5c) = param_3;
                    /* WARNING: Subroutine does not return */
      memset((void *)*param_1,0,(ulong)uVar1 * 0x18);
    }
    (**(code **)(*plVar4 + 0x48))
              (plVar4,*param_1,
               "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_DescriptorHeap.cpp",
               0x194);
    if ((long *)param_1[1] != (long *)0x0) {
      (**(code **)(*(long *)param_1[1] + 0x18))();
      param_1[1] = 0;
    }
    lVar5 = param_1[10];
    if (lVar5 != 0) {
      pcVar8 = *(code **)(*plVar4 + 0x48);
      uVar6 = 0x196;
LAB_006525e4:
      (*pcVar8)(plVar4,lVar5,
                "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_DescriptorHeap.cpp"
                ,uVar6);
      param_1[10] = 0;
    }
  }
  *param_1 = 0;
LAB_006525f4:
  FUN_00696730(auStack_60);
  return 0;
}


