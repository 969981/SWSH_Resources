/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007affd0; name: FUN_007affd0
 */


undefined8 FUN_007affd0(long param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined2 *local_78;
  undefined2 *local_70;
  undefined2 *local_68;
  undefined1 local_5c [4];
  undefined1 auStack_58 [24];
  
  if ((*(char *)(param_1 + 9) == '\0') && (*(char *)(param_1 + 8) != '\0')) {
    plVar10 = *(long **)(param_1 + 0x80);
    *(undefined1 *)(param_1 + 9) = 1;
    *(undefined8 *)(param_1 + 0x20) = 0;
    puVar1 = (undefined8 *)*plVar10;
    puVar9 = (undefined8 *)plVar10[1];
    while (puVar9 != puVar1) {
      puVar9 = puVar9 + -5;
      (**(code **)*puVar9)(puVar9);
    }
    plVar10[1] = (long)puVar1;
    (*(undefined8 **)(param_1 + 0x58))[1] = **(undefined8 **)(param_1 + 0x58);
    plVar10 = (long *)FUN_007ac3d0(1,60000);
    plVar11 = *(long **)(param_1 + 0x18);
    uVar12 = *param_2;
    local_78 = (undefined2 *)0x0;
    local_70 = (undefined2 *)0x0;
    local_68 = (undefined2 *)0x0;
    lVar4 = param_3[1] - *param_3;
    if (lVar4 != 0) {
      if (lVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      local_78 = (undefined2 *)FUN_017cd750();
      local_68 = local_78 + (lVar4 >> 1);
      puVar2 = (undefined2 *)*param_3;
      puVar3 = (undefined2 *)param_3[1];
      local_70 = local_78;
      if (puVar2 != puVar3) {
        uVar8 = (long)puVar3 + (-2 - (long)puVar2);
        puVar7 = puVar2;
        if (((uint)uVar8 >> 1 & 1) == 0) {
          puVar7 = puVar2 + 1;
          *local_78 = *puVar2;
          local_70 = local_78 + 1;
        }
        if (1 < uVar8) {
          do {
            *local_70 = *puVar7;
            local_70[1] = puVar7[1];
            puVar7 = puVar7 + 2;
            local_70 = local_70 + 2;
          } while (puVar7 != puVar3);
        }
      }
    }
    uVar8 = (**(code **)(*plVar11 + 0x1d8))
                      (plVar11,plVar10,uVar12,&local_78,*(undefined8 *)(param_1 + 0x80),
                       *(undefined8 *)(param_1 + 0x58));
    if (local_78 != (undefined2 *)0x0) {
      local_70 = local_78;
      FUN_017cd7a0();
    }
    if ((uVar8 & 1) != 0) {
      *(long **)(param_1 + 0x20) = plVar10;
      plVar11 = (long *)FUN_017cd750(0x28);
      if (plVar11 == (long *)0x0) {
        return 1;
      }
      *plVar11 = (long)(PTR_DAT_027168a0 + 0x10);
      plVar11[1] = param_1;
      puVar5 = PTR_LAB_027168d8;
      plVar11[4] = (long)plVar10;
      plVar11[2] = (long)puVar5;
      plVar11[3] = 0;
      FUN_017dee40(plVar10,2);
      FUN_017de4d0(plVar10,plVar11,0,1);
      return 1;
    }
    uVar6 = FUN_007ae410();
    local_5c[0] = 0;
    FUN_017d0040(auStack_58,local_5c);
    plVar11 = *(long **)(param_1 + 0x28);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x60))(plVar11,auStack_58,uVar6);
    }
    plVar11 = *(long **)(param_1 + 0x30);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x60))(plVar11,auStack_58,uVar6);
    }
    plVar11 = *(long **)(param_1 + 0x38);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x60))(plVar11,auStack_58,uVar6);
    }
    plVar11 = *(long **)(param_1 + 0x40);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x60))(plVar11,auStack_58,uVar6);
    }
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  return 0;
}


