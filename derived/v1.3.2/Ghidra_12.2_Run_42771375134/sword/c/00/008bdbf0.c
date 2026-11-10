/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008bdbf0; name: FUN_008bdbf0
 */


void FUN_008bdbf0(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long local_70;
  char *pcStack_68;
  undefined8 local_60;
  long local_58;
  
  FUN_0010d170(&local_70,"BagStateZigarudeCube");
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(long *)(param_1 + 0x70) = local_70;
  puVar8 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar8 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar8)(puVar8);
      lVar4 = FUN_00897d00();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar8 = puVar8 + -10;
          goto LAB_008bdc80;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_008bdc80:
  *(undefined8 **)(param_1 + 0x90) = puVar8;
  lVar4 = puVar8[0x15];
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar3 = (long *)(**(code **)*puVar8)(puVar8);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02717528), iVar2 != 0))
  {
    uVar6 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar6;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar3 != (long *)PTR_DAT_02717530; plVar3 = (long *)*plVar3) {
  }
  lVar9 = puVar8[0x9f];
  plVar1 = *(long **)(lVar9 + 0x80);
  for (plVar3 = *(long **)(lVar9 + 0x78); plVar1 != plVar3; plVar3 = plVar3 + 1) {
    FUN_006cf0c0(&local_70,*plVar3 + 0x5c0);
    lVar10 = local_70;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar10 == 0x7fa9f4e48bfb22cf) {
      if (*(long **)(lVar9 + 0x80) == plVar3) goto LAB_008bdd64;
      goto LAB_008bdd38;
    }
  }
  plVar3 = plVar1;
  if (*(long **)(lVar9 + 0x80) != plVar1) {
LAB_008bdd38:
    lVar10 = *plVar3;
    if (lVar10 != 0) {
      uVar5 = FUN_008a3e00(lVar10 + 0x50);
      if ((uVar5 & 1) == 0) {
        lVar10 = 0;
      }
      goto LAB_008bdd68;
    }
  }
LAB_008bdd64:
  lVar10 = 0;
LAB_008bdd68:
  *(long *)(param_1 + 0x88) = lVar10;
  local_70 = 0x25cf786e4a20d38f;
  pcStack_68 = "BagViewTop";
  local_60 = 10;
  local_58 = 0;
  uVar6 = FUN_008a3b60(lVar9,&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  plVar3 = *(long **)(lVar4 + 0x10);
  (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined4 *)(lVar4 + 0x1c));
  iVar2 = FUN_008783b0();
  if (iVar2 == 0x2ce) {
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x80),1,1);
    FUN_008c4b10(*(undefined8 *)(param_1 + 0x80),0);
    FUN_008c86c0(*(undefined8 *)(param_1 + 0x80),&DAT_02145168,0);
    FUN_008c8930(*(undefined8 *)(param_1 + 0x80),3);
    FUN_008c8a30(*(undefined8 *)(param_1 + 0x80),2);
    uVar7 = 0;
  }
  else {
    FUN_008a6b70(*(undefined8 *)(param_1 + 0x90),0xcf39f8ca2348b32d,1,0);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
    FUN_008c4b10(*(undefined8 *)(param_1 + 0x80),0);
    FUN_008c82b0(*(undefined8 *)(param_1 + 0x80),0);
    *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x5cc) = 0;
    uVar7 = 3;
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar7;
  return;
}


