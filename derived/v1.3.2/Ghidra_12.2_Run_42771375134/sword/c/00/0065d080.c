/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0065d080; name: FUN_0065d080
 */


undefined8 FUN_0065d080(long *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong local_118 [27];
  
  uVar4 = (**(code **)(*(long *)param_1[4] + 0x2a8))();
  lVar5 = (**(code **)(*param_2 + 0x88))(param_2);
  iVar2 = FUN_006636a0(*(undefined4 *)(lVar5 + 0x2c));
  uVar3 = FUN_00662f90(*(undefined4 *)(lVar5 + 0x28));
  local_118[0x19] = 0;
  local_118[0x1a] = 0;
  local_118[0x17] = 0;
  local_118[0x18] = 0;
  local_118[0x15] = 0;
  local_118[0x16] = 0;
  local_118[0x13] = 0;
  local_118[0x14] = 0;
  local_118[0x11] = 0;
  local_118[0x12] = 0;
  local_118[0xf] = 0;
  local_118[0x10] = 0;
  local_118[0xd] = 0;
  local_118[0xe] = 0;
  local_118[0xb] = 0;
  local_118[0xc] = 0;
  (**(code **)PTR_DAT_027143f8)(local_118 + 0xb);
  (**(code **)PTR_DAT_02714400)(local_118 + 0xb,uVar4);
  (**(code **)PTR_DAT_02714420)
            (local_118 + 0xb,*(undefined4 *)(lVar5 + 8),*(undefined4 *)(lVar5 + 0xc));
  (**(code **)PTR_DAT_02714418)(local_118 + 0xb,uVar3);
  (**(code **)PTR_DAT_02714c60)(local_118 + 0xb,iVar2);
  uVar3 = 5;
  if (iVar2 < 1) {
    uVar3 = 1;
  }
  (**(code **)PTR_DAT_02714410)(local_118 + 0xb,uVar3);
  (**(code **)PTR_DAT_02714408)(local_118 + 0xb,8);
  iVar2 = (**(code **)PTR_DAT_02714428)(local_118 + 0xb);
  lVar5 = (**(code **)PTR_DAT_02714430)(local_118 + 0xb);
  uVar9 = (int)(lVar5 + -1) + iVar2 & (uint)-lVar5;
  plVar6 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
  plVar6 = (long *)(**(code **)(*plVar6 + 0xf0))(plVar6,0,0);
  param_1[0x1e] = (long)plVar6;
  local_118[2] = 0;
  local_118[3] = 0;
  local_118[4] = 0x400000000;
  local_118[9] = 0xffffffffffffffff;
  local_118[10] = 0xffffffffffffffff;
  local_118[1] = 0;
  local_118[0] = (ulong)uVar9;
  local_118[5] = 0;
  local_118[6] = 0xa1;
  local_118[7] = 0;
  local_118[8] = 0;
  uVar7 = (**(code **)(*plVar6 + 0x40))(plVar6,local_118);
  if (((uVar7 & 1) != 0) &&
     (uVar7 = FUN_00653070(param_1[0x1e],(long)(int)uVar9,lVar5,param_1 + 0x1f), (uVar7 & 1) != 0))
  {
    param_1[0x20] = lVar5 + -1 + param_1[0x1f] & -lVar5;
    puVar8 = (undefined8 *)
             (**(code **)(*(long *)param_1[2] + 0x38))
                       ((long *)param_1[2],0xc0,0x10,
                        "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Surface_Impl.cpp"
                        ,0x197);
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    param_1[0x1c] = (long)puVar8;
    puVar8 = (undefined8 *)
             (**(code **)(*(long *)param_1[2] + 0x38))
                       ((long *)param_1[2],0x28,0x10,
                        "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Surface_Impl.cpp"
                        ,0x19a);
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    param_1[0x1d] = (long)puVar8;
    *(undefined1 *)((long)param_1 + 0x10c) = 1;
    uVar4 = (**(code **)(*(long *)param_1[0x1e] + 0x80))();
    (**(code **)PTR_DAT_02714438)(local_118 + 0xb,uVar4,param_1[0x20]);
    cVar1 = (**(code **)PTR_DAT_02714440)(param_1[0x1c],local_118 + 0xb);
    if (cVar1 == '\x01') {
      FUN_0065ce20(param_1,4,0,0);
      return 1;
    }
  }
  return 0;
}


