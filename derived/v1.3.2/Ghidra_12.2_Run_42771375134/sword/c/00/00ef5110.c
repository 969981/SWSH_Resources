/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef5110; name: FUN_00ef5110
 */


void FUN_00ef5110(long param_1,undefined8 *param_2,char *param_3)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 extraout_var;
  float fVar10;
  float fVar12;
  undefined8 uVar11;
  float fVar13;
  float fVar15;
  undefined8 uVar14;
  undefined4 uVar16;
  long local_70;
  long lStack_68;
  long *local_60;
  undefined1 auStack_58 [8];
  
  plVar7 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (plVar7 == plVar1) {
      return;
    }
    lVar5 = *plVar7;
    uVar3 = FUN_015b5320(lVar5 + 0x50);
    if (((uVar3 & 1) != 0) && (uVar3 = (**(code **)(*(long *)*plVar7 + 0x88))(), (uVar3 & 1) == 0))
    break;
    plVar7 = plVar7 + 1;
  }
  uVar3 = param_2[1];
  uVar6 = *param_2;
  fVar10 = (float)uVar6 * 42.0;
  fVar12 = (float)((ulong)uVar6 >> 0x20) * 42.0;
  fVar13 = (float)uVar3 * 42.0;
  fVar15 = (float)(uVar3 >> 0x20) * 42.0;
  uVar14 = *(undefined8 *)(lVar5 + 0xb8);
  uVar11 = *(undefined8 *)(lVar5 + 0xb0);
  uVar9 = FUN_00a92fd0(uVar6,uVar3 & 0xffffffff);
  if (*param_3 == '\0') {
    local_70 = CONCAT44((float)((ulong)uVar11 >> 0x20) + fVar12,(float)uVar11 + fVar10);
    lStack_68 = CONCAT44((float)((ulong)uVar14 >> 0x20) + fVar15,(float)uVar14 + fVar13);
  }
  else {
    lStack_68 = *(long *)(lVar5 + 0xb8);
    local_70 = *(long *)(lVar5 + 0xb0);
    *(ulong *)(lVar5 + 0xb8) =
         CONCAT44((float)((ulong)lStack_68 >> 0x20) - fVar15,(float)lStack_68 - fVar13);
    *(ulong *)(lVar5 + 0xb0) =
         CONCAT44((float)((ulong)local_70 >> 0x20) - fVar12,(float)local_70 - fVar10);
    *(undefined1 *)(lVar5 + 0xc0) = 1;
    FUN_00ac7ad0(lVar5 + 0xa0);
    uVar9 = extraout_var;
  }
  uVar16 = 0x40c00000;
  if ((*(int *)(param_1 + 0x138) == 6) && (uVar3 = thunk_FUN_00e46320(lVar5), (uVar3 & 1) != 0)) {
    lStack_68 = *(long *)(lVar5 + 0xb8);
    local_70 = *(long *)(lVar5 + 0xb0);
    uVar16 = 0;
    uVar8 = 2;
    cVar2 = *param_3;
  }
  else {
    uVar8 = 0;
    cVar2 = *param_3;
  }
  if ((cVar2 == '\0') && (*(int *)(param_1 + 0x138) == 4)) {
    lStack_68 = *(long *)(lVar5 + 0xb8);
    local_70 = *(long *)(lVar5 + 0xb0);
    uVar16 = 0;
    uVar8 = 2;
    lVar4 = *(long *)(lVar5 + 0x1d8);
  }
  else {
    lVar4 = *(long *)(lVar5 + 0x1d8);
  }
  if (lVar4 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = (long *)FUN_00ef6640(auStack_58);
    if (plVar7 != (long *)0x0) {
      (**(code **)(plVar7[9] + 0x10))();
    }
    plVar7[0xe] = lVar5;
    (**(code **)(*plVar7 + 0x38))(plVar7);
    uVar6 = *(undefined8 *)(lVar5 + 0x1e8);
    local_60 = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(plVar7[9] + 0x10))();
    }
    FUN_01591030(lVar5 + 0x1e8,uVar6,&local_60);
    if (local_60 != (long *)0x0) {
      (**(code **)(local_60[9] + 0x18))();
      local_60 = (long *)0x0;
    }
    (**(code **)(plVar7[9] + 0x18))();
  }
  *(undefined4 *)(plVar7 + 0x12) = uVar9;
  *(undefined4 *)((long)plVar7 + 0x94) = uVar16;
  *(undefined2 *)(plVar7 + 0x13) = 0x100;
  *(undefined4 *)((long)plVar7 + 0x9c) = uVar8;
  plVar7[0x11] = lStack_68;
  plVar7[0x10] = local_70;
  return;
}


