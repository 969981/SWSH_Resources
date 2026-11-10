/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0065a390; name: FUN_0065a390
 */


undefined8
FUN_0065a390(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,long *param_7)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 local_80 [10];
  
  local_80[9] = 0;
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x88) = param_3;
  *(undefined8 *)(param_1 + 0x90) = param_4;
  *(undefined8 *)(param_1 + 0x98) = param_5;
  *(undefined8 *)(param_1 + 0xa0) = param_6;
  *(long **)(param_1 + 0xa8) = param_7;
  local_80[0] = 0;
  local_80[7] = 0;
  local_80[8] = 0;
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (param_7 == (long *)0x0) {
    iVar9 = 0;
    uVar4 = 0;
    plVar6 = *(long **)(param_1 + 0x80);
  }
  else {
    (**(code **)(*param_7 + 0x10))(param_7);
    uVar4 = (**(code **)(**(long **)(param_1 + 0xa8) + 0xa0))();
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
      iVar9 = 1;
      plVar6 = *(long **)(param_1 + 0x80);
    }
    else {
      puVar5 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0xa8) + 0xa8))();
      local_80[0] = *puVar5;
      local_80[1] = puVar5[1];
      iVar9 = 1;
      *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) | 0x20;
      *(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x17c) * 4 + 0x180) = 5;
      uVar4 = 1;
      *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
      plVar6 = *(long **)(param_1 + 0x80);
    }
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
    uVar7 = (**(code **)(**(long **)(param_1 + 0x80) + 0xa0))();
    uVar11 = uVar4;
    if ((uVar7 & 1) != 0) {
      puVar5 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x80) + 0xa8))();
      uVar8 = puVar5[1];
      uVar11 = (ulong)((int)uVar4 + 1);
      local_80[uVar4 * 2] = *puVar5;
      local_80[uVar4 * 2 + 1] = uVar8;
      *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) | 0x1f;
      *(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x17c) * 4 + 0x180) = 0;
      *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
    }
    iVar9 = iVar9 + 1;
    uVar4 = uVar11;
  }
  uVar11 = uVar4;
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x88) + 0x10))();
    uVar7 = (**(code **)(**(long **)(param_1 + 0x88) + 0xa0))();
    if ((uVar7 & 1) != 0) {
      puVar5 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x88) + 0xa8))();
      uVar8 = puVar5[1];
      uVar11 = (ulong)((int)uVar4 + 1);
      local_80[uVar4 * 2] = *puVar5;
      local_80[uVar4 * 2 + 1] = uVar8;
      *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) | 2;
      *(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x17c) * 4 + 0x180) = 1;
      *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
    }
    iVar9 = iVar9 + 1;
  }
  uVar4 = uVar11;
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x10))();
    uVar7 = (**(code **)(**(long **)(param_1 + 0x90) + 0xa0))();
    if ((uVar7 & 1) != 0) {
      puVar5 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x90) + 0xa8))();
      uVar8 = puVar5[1];
      uVar4 = (ulong)((int)uVar11 + 1);
      local_80[uVar11 * 2] = *puVar5;
      local_80[uVar11 * 2 + 1] = uVar8;
      *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) | 4;
      *(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x17c) * 4 + 0x180) = 2;
      *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
    }
    iVar9 = iVar9 + 1;
  }
  uVar11 = uVar4;
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x10))();
    uVar7 = (**(code **)(**(long **)(param_1 + 0x80) + 0xa0))();
    if ((uVar7 & 1) != 0) {
      puVar5 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x98) + 0xa8))();
      uVar8 = puVar5[1];
      uVar11 = (ulong)((int)uVar4 + 1);
      local_80[uVar4 * 2] = *puVar5;
      local_80[uVar4 * 2 + 1] = uVar8;
      *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) | 8;
      *(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x17c) * 4 + 0x180) = 3;
      *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
    }
    iVar9 = iVar9 + 1;
  }
  iVar10 = (int)uVar11;
  if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x10))();
    uVar4 = (**(code **)(**(long **)(param_1 + 0xa0) + 0xa0))();
    if ((uVar4 & 1) != 0) {
      puVar5 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0xa0) + 0xa8))();
      uVar8 = puVar5[1];
      iVar10 = iVar10 + 1;
      local_80[uVar11 * 2] = *puVar5;
      local_80[uVar11 * 2 + 1] = uVar8;
      *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) | 0x10;
      *(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x17c) * 4 + 0x180) = 4;
      *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
    }
    iVar9 = iVar9 + 1;
  }
  if (iVar9 == iVar10) {
    *(undefined1 *)(param_1 + 0x7c) = 1;
    if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))();
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      uVar8 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))
                        (*(long **)(param_1 + 0x10),0x238,0x10,
                         "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_ShaderProgram_Impl.cpp"
                         ,0x2a2);
      FUN_0065ac60(uVar8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0xb0) = uVar8;
      FUN_0065ad10(uVar8,param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x7c) = 0;
  }
  uVar8 = (**(code **)(**(long **)(param_1 + 0x20) + 0x2a8))();
  lVar1 = param_1 + 0xb8;
  cVar3 = (**(code **)PTR_DAT_02714c08)(lVar1,uVar8);
  if (cVar3 == '\x01') {
    cVar3 = (**(code **)PTR_DAT_02714c10)(lVar1,iVar9,local_80);
    if (cVar3 == '\x01') {
      *(undefined1 *)(param_1 + 0x198) = 1;
      puVar2 = PTR_DAT_02713e78;
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_1 + 0x38);
      }
      (**(code **)PTR_DAT_02714c00)(lVar1,puVar2);
      return 1;
    }
    (**(code **)PTR_DAT_02714c18)(lVar1);
  }
  return 0;
}


