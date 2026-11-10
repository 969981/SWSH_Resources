/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c7e50; name: FUN_004c7e50
 */


void FUN_004c7e50(void)

{
  undefined4 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  
  puVar5 = PTR_DAT_027134f0;
  puVar4 = PTR_DAT_02712d20;
  puVar3 = PTR_DAT_02712b50;
  fVar2 = DAT_01d4c5a8;
  if (*(int *)(PTR_DAT_027134f0 + 8) == 0) {
    return;
  }
  piVar9 = *(int **)PTR_DAT_027134f0 + 6;
  iVar7 = **(int **)PTR_DAT_027134f0;
  fVar11 = DAT_01d4c5a8;
  do {
    piVar10 = piVar9;
    iVar8 = iVar7;
    while( true ) {
      fVar12 = (float)piVar10[-2];
      local_90 = 0x400000000;
      local_88 = 0;
      if (*(long *)(piVar10 + -4) == -1) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = (undefined8 *)FUN_00497c70(*(undefined8 *)puVar4);
      }
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0xff;
      local_a0 = 0xff;
      local_98 = 0;
      local_c0 = puVar6;
      FUN_0049b9c0(fVar12,*(undefined8 *)puVar3,iVar8,&local_c0,&local_90,1,0);
      if ((puVar6 != (undefined8 *)0x0) &&
         (iVar7 = *(int *)(puVar6 + 10), *(int *)(puVar6 + 10) = iVar7 + -1, iVar7 + -1 == 0)) {
        uVar1 = *(undefined4 *)PTR_DAT_02712a90;
        (**(code **)*puVar6)(puVar6);
        FUN_00404870(uVar1,puVar6);
      }
      if (fVar11 <= fVar12) {
        fVar11 = fVar12;
      }
      if (piVar10 == (int *)(*(long *)puVar5 + (ulong)*(uint *)(puVar5 + 8) * 0x18)) {
        local_98 = 0;
        local_90 = 0x400000000;
        local_88 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0xff;
        local_a0 = 0xff;
        local_c0 = (undefined8 *)0x0;
        FUN_0049b9c0(fVar11,*(undefined8 *)puVar3,iVar8,&local_c0,&local_90,1,0);
        *(undefined4 *)(puVar5 + 8) = 0;
        return;
      }
      piVar9 = piVar10 + 6;
      iVar7 = *piVar10;
      if (iVar8 == iVar7) break;
      local_98 = 0;
      local_90 = 0x400000000;
      local_88 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0xff;
      local_a0 = 0xff;
      local_c0 = (undefined8 *)0x0;
      FUN_0049b9c0(fVar11,*(undefined8 *)puVar3,iVar8,&local_c0,&local_90,1,0);
      iVar8 = *piVar10;
      piVar10 = piVar9;
      fVar11 = fVar2;
    }
  } while( true );
}


