/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012eef40; name: FUN_012eef40
 */


void FUN_012eef40(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_70;
  undefined1 auStack_68 [8];
  
  if (*(int *)(param_1 + 0x94) != 4) {
    plVar9 = *(long **)(param_1 + 8);
    puVar3 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,200,8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar9;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    FUN_012fd4d0(puVar3);
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    local_70 = puVar3;
    FUN_0075efb0(auStack_68,plVar9,0,1);
    *(undefined4 *)(local_70 + 0x18) = 4;
    FUN_0075f0a0(auStack_68);
    lVar4 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x3a0 + lVar4);
      if ((lVar10 != 0) && (uVar5 = FUN_0130fe50(lVar10), (uVar5 & 1) != 0)) {
        local_70 = puVar3;
        FUN_0075efb0(auStack_68,plVar9,0,1);
        puVar6 = local_70;
        piVar7 = (int *)local_70[0xb];
        if (piVar7 == (int *)0x0) {
          iVar8 = *(int *)((long)local_70 + 0x54);
LAB_012ef080:
          FUN_00824290(local_70 + 9,iVar8 + 1);
          piVar7 = (int *)puVar6[0xb];
          iVar8 = *piVar7;
LAB_012ef094:
          *piVar7 = iVar8 + 1;
          lVar11 = FUN_012f42a0(0,puVar6[9]);
          iVar8 = *(int *)(puVar6 + 10);
          *(int *)(puVar6 + 10) = iVar8 + 1;
          *(long *)(puVar6[0xb] + (long)iVar8 * 8 + 8) = lVar11;
        }
        else {
          iVar1 = *(int *)(local_70 + 10);
          iVar8 = *piVar7;
          if (iVar8 <= iVar1) {
            if (iVar8 == *(int *)((long)local_70 + 0x54)) goto LAB_012ef080;
            goto LAB_012ef094;
          }
          *(int *)(local_70 + 10) = iVar1 + 1;
          lVar11 = *(long *)(piVar7 + (long)iVar1 * 2 + 2);
        }
        FUN_0075f0a0(auStack_68);
        uVar2 = FUN_012e4e90(lVar10);
        *(undefined4 *)(lVar11 + 0x14) = uVar2;
        puVar6 = (undefined8 *)FUN_012e3520(lVar10);
        uVar2 = FUN_012b6590(*puVar6);
        *(undefined4 *)(lVar11 + 0x18) = uVar2;
        puVar6 = (undefined8 *)FUN_012e3520(lVar10);
        uVar2 = FUN_012b67d0(*puVar6);
        *(undefined4 *)(lVar11 + 0x1c) = uVar2;
        puVar6 = (undefined8 *)FUN_012e3520(lVar10);
        uVar2 = FUN_012b68c0(*puVar6);
        *(undefined4 *)(lVar11 + 0x20) = uVar2;
        puVar6 = (undefined8 *)FUN_012e3520(lVar10);
        uVar2 = FUN_012ba900(*puVar6);
        *(undefined4 *)(lVar11 + 0x24) = uVar2;
        puVar6 = (undefined8 *)FUN_012e3520(lVar10);
        uVar2 = FUN_012ba8f0(*puVar6);
        *(undefined4 *)(lVar11 + 0x28) = uVar2;
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x48);
    FUN_012f7c50(*(undefined8 *)(param_1 + 0x70),puVar3);
    FUN_0075efb0(&local_70,plVar9,0,1);
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*plVar9 + 0x18))(plVar9,puVar3,200,8);
    FUN_0075f0a0(&local_70);
  }
  return;
}


