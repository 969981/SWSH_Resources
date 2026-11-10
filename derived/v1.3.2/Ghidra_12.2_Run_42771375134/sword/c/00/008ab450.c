/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ab450; name: FUN_008ab450
 */


void FUN_008ab450(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  undefined1 auStack_54 [4];
  
  iVar4 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  puVar3 = PTR_DAT_027179d8;
  if (iVar4 == *(int *)PTR_DAT_027179d8) {
    lVar11 = 0;
    piVar10 = (int *)PTR_DAT_027179d8;
  }
  else {
    iVar4 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
    piVar10 = (int *)(puVar3 + 0x10);
    if (iVar4 == *piVar10) {
      lVar11 = 1;
    }
    else {
      iVar4 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
      piVar10 = (int *)(puVar3 + 0x20);
      if (iVar4 == *piVar10) {
        lVar11 = 2;
      }
      else {
        iVar4 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
        piVar10 = (int *)(puVar3 + 0x30);
        if (iVar4 == *piVar10) {
          lVar11 = 3;
        }
        else {
          iVar4 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
          piVar10 = (int *)(puVar3 + 0x40);
          if (iVar4 == *piVar10) {
            lVar11 = 4;
          }
          else {
            iVar4 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
            piVar10 = (int *)(puVar3 + 0x50);
            if (iVar4 == *piVar10) {
              lVar11 = 5;
            }
            else {
              iVar4 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
              piVar10 = (int *)(puVar3 + 0x60);
              if (iVar4 == *piVar10) {
                lVar11 = 6;
              }
              else {
                iVar4 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
                piVar10 = (int *)(puVar3 + 0x70);
                if (iVar4 != *piVar10) {
                  return;
                }
                lVar11 = 7;
              }
            }
          }
        }
      }
    }
  }
  lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  uVar1 = *(undefined4 *)
           (*(long *)(param_1 + 0x88) + (long)*(int *)(*(long *)(param_1 + 0x88) + 0x640) * 4 +
           0x64c);
  uVar5 = FUN_008c8330();
  uVar5 = FUN_01520600(lVar9,uVar1,uVar5);
  puVar6 = (uint *)FUN_008c8100(*(undefined8 *)(param_1 + 0x88));
  uVar2 = *puVar6;
  FUN_01520b70(lVar9,*piVar10,1);
  FUN_01520760(lVar9,*(undefined4 *)(puVar3 + lVar11 * 0x10 + 8),1,0);
  uVar7 = FUN_01520600(lVar9,uVar1,*(undefined4 *)(puVar3 + lVar11 * 0x10 + 8));
  lVar11 = FUN_015200a0(lVar9,uVar1,auStack_54);
  lVar8 = (uVar7 & 0xffffffff) * 4;
  *(uint *)(lVar11 + lVar8) = uVar2 & 0x80000000 | *(uint *)(lVar11 + lVar8) & 0x7fffffff;
  FUN_01521220(lVar9,uVar1,uVar7 & 0xffffffff,uVar5);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return;
}


