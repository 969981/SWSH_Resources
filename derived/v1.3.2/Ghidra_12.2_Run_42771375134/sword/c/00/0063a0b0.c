/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063a0b0; name: FUN_0063a0b0
 */


undefined8 FUN_0063a0b0(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong local_88 [11];
  
  FUN_00639cf0();
  *(undefined4 *)(param_1 + 0x10) = param_2;
  uVar3 = (**(code **)(*(long *)param_1[3] + 0x2a8))();
  lVar4 = (**(code **)(*(long *)param_1[1] + 0x38))
                    ((long *)param_1[1],0xa0,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandList_Impl.cpp"
                     ,0x5c);
  param_1[0x11] = lVar4;
  if (lVar4 == 0) {
    return 0;
  }
  cVar2 = (**(code **)PTR_DAT_02714700)(lVar4,uVar3);
  puVar1 = PTR_DAT_02713a38;
  if (cVar2 != '\x01') {
    return 0;
  }
  (**(code **)PTR_DAT_02713a38)(uVar3,0x13,(long)param_1 + 0x11c);
  (**(code **)puVar1)(uVar3,0x14,param_1 + 0x23);
  lVar4 = param_1[0x15];
  if (lVar4 == 1) goto LAB_0063a240;
  if (param_1[0x16] == 0) {
    plVar5 = (long *)param_1[0x14];
    if (plVar5 != (long *)0x0) {
      puVar8 = (undefined8 *)
               (**(code **)(*plVar5 + 0x40))
                         (plVar5,8,1,0x10,"../../../../Include\\SiCore/SiCore_Array.h",0x5d1);
      if (puVar8 != (undefined8 *)0x0) {
        if (lVar4 != 0) {
          *puVar8 = *(undefined8 *)param_1[0x18];
        }
        if (((*(byte *)(param_1 + 0x1c) & 1) == 0) && (param_1[0x18] != 0)) {
          plVar5 = (long *)param_1[0x14];
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x48))
                      (plVar5,param_1[0x18],"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          param_1[0x18] = 0;
        }
        param_1[0x19] = 0;
        param_1[0x1c] = 0;
        param_1[0x1a] = 0;
        param_1[0x18] = (long)puVar8;
        param_1[0x15] = (ulong)(lVar4 != 0);
        param_1[0x16] = 1;
        goto LAB_0063a180;
      }
    }
    param_1[0x15] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  else {
    puVar8 = (undefined8 *)param_1[0x18];
LAB_0063a180:
    param_1[0x15] = 1;
    param_1[0x19] = (long)puVar8;
    param_1[0x1a] = (long)(puVar8 + 1);
  }
LAB_0063a240:
  plVar5 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
  uVar3 = (**(code **)(*plVar5 + 0xf0))(plVar5,0,0);
  *(undefined8 *)param_1[0x18] = uVar3;
  local_88[1] = 0;
  uVar7 = *(int *)((long)param_1 + 0x11c) + 0x7ffffU & -*(int *)((long)param_1 + 0x11c);
  local_88[3] = 0;
  local_88[4] = 0x400000000;
  local_88[9] = 0xffffffffffffffff;
  local_88[10] = 0xffffffffffffffff;
  local_88[2] = 0;
  local_88[0] = (ulong)uVar7;
  local_88[5] = 0;
  local_88[6] = 0x22;
  local_88[7] = 0;
  local_88[8] = 0;
  uVar6 = (**(code **)(**(long **)param_1[0x18] + 0x40))(*(long **)param_1[0x18],local_88);
  if (((uVar6 & 1) != 0) &&
     (uVar6 = FUN_00653070(*(undefined8 *)param_1[0x18],(long)(int)uVar7,
                           (long)*(int *)((long)param_1 + 0x11c),param_1 + 0x1f), (uVar6 & 1) != 0))
  {
    param_1[0x20] =
         (param_1[0x1f] + (long)*(int *)((long)param_1 + 0x11c)) - 1U &
         -(long)*(int *)((long)param_1 + 0x11c);
    lVar4 = (**(code **)(*(long *)param_1[1] + 0x38))
                      ((long *)param_1[1],0x10000,(int)param_1[0x23],
                       "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandList_Impl.cpp"
                       ,0x8a);
    param_1[0x1e] = lVar4;
    if (lVar4 != 0) {
      (**(code **)(*param_1 + 0x88))(param_1);
      param_1[0x21] = 0x10000;
      param_1[0x22] = 0x80000;
      (**(code **)PTR_DAT_02714708)(param_1[0x11],PTR_LAB_02714710);
      (**(code **)PTR_DAT_02714718)(param_1[0x11],param_1);
      param_1[0x12] = 0;
      *(undefined2 *)(param_1 + 0x24) = 1;
      return 1;
    }
    (**(code **)PTR_DAT_027146f8)(param_1[0x11]);
  }
  return 0;
}


