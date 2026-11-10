/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f16a0; name: FUN_012f16a0
 */


void FUN_012f16a0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 *local_70;
  undefined1 auStack_68 [8];
  
  lVar10 = *param_1;
  plVar9 = *(long **)(lVar10 + 8);
  puVar4 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,200,8);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar9;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  FUN_012fd4d0(puVar4);
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  local_70 = puVar4;
  FUN_0075efb0(auStack_68,plVar9,0,1);
  *(undefined4 *)(local_70 + 0x18) = 5;
  FUN_0075f0a0(auStack_68);
  local_70 = puVar4;
  FUN_0075efb0(auStack_68,plVar9,0,1);
  puVar3 = local_70;
  piVar7 = (int *)local_70[0xe];
  if (piVar7 == (int *)0x0) {
    iVar8 = *(int *)((long)local_70 + 0x6c);
LAB_012f17c4:
    FUN_00824290(local_70 + 0xc,iVar8 + 1);
    piVar7 = (int *)puVar3[0xe];
    iVar8 = *piVar7;
  }
  else {
    iVar1 = *(int *)(local_70 + 0xd);
    iVar8 = *piVar7;
    if (iVar1 < iVar8) {
      *(int *)(local_70 + 0xd) = iVar1 + 1;
      lVar5 = *(long *)(piVar7 + (long)iVar1 * 2 + 2);
      goto LAB_012f1808;
    }
    if (iVar8 == *(int *)((long)local_70 + 0x6c)) goto LAB_012f17c4;
  }
  *piVar7 = iVar8 + 1;
  lVar5 = FUN_012f4220(0,puVar3[0xc]);
  iVar8 = *(int *)(puVar3 + 0xd);
  *(int *)(puVar3 + 0xd) = iVar8 + 1;
  *(long *)(puVar3[0xe] + (long)iVar8 * 8 + 8) = lVar5;
LAB_012f1808:
  FUN_0075f0a0(auStack_68);
  *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(param_1[1] + 0x18);
  *(undefined8 *)(lVar5 + 0x18) = param_2;
  uVar2 = *(int *)(param_1[1] + 0x14) - 1;
  if (uVar2 < 7) {
    uVar6 = *(undefined4 *)(&DAT_0216afc0 + (long)(int)uVar2 * 4);
  }
  else {
    uVar6 = 0;
  }
  *(undefined4 *)(lVar5 + 0x24) = uVar6;
  *(undefined4 *)(lVar5 + 0x28) = param_3;
  FUN_012f7c50(*(undefined8 *)(lVar10 + 0x70),puVar4);
  FUN_0075efb0(&local_70,plVar9,0,1);
  (**(code **)*puVar4)(puVar4);
  (**(code **)(*plVar9 + 0x18))(plVar9,puVar4,200,8);
  FUN_0075f0a0(&local_70);
  return;
}


