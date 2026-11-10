/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7d5b0; name: FUN_00d7d5b0
 */


void FUN_00d7d5b0(long param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  int local_34;
  
  iVar4 = *(int *)(*(long *)(param_1 + 0x5f0) + 0xe8);
  local_38[0] = 0;
  if (iVar4 == 0 || *(char *)(param_1 + 0x5e4) != '\0') goto LAB_00d7d690;
  iVar3 = FUN_016c0010(*(undefined8 *)(param_1 + 0x5e8));
  local_34 = FUN_016c0020(*(undefined8 *)(param_1 + 0x5e8));
  local_34 = local_34 + iVar3;
  lVar5 = FUN_00d75680(*(long *)(param_1 + 0x5d0) + 0x60,param_1 + 0x5dc,&local_34);
  if (*(int *)(param_1 + 0x5dc) == 0xb) {
    local_3c[0] = *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + 0x58);
    piVar6 = (int *)FUN_00d70a10(lVar5 + 0x18,local_3c);
    uVar7 = FUN_00d71370(*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + 0x58);
    if ((uVar7 & 1) == 0) {
      if (*(ushort *)((long)piVar6 - (long)*piVar6) < 5) {
        bVar2 = *(long *)PTR_DAT_0271e438 == 0 || *(long *)(PTR_DAT_0271e438 + 8) == 0;
      }
      else {
        uVar1 = ((ushort *)((long)piVar6 - (long)*piVar6))[2];
        uVar7 = (ulong)uVar1;
        if (uVar7 == 0) {
          if (*(long *)PTR_DAT_0271e438 != 0) goto LAB_00d7d778;
        }
        else if (*(long *)((long)piVar6 + uVar7) != *(long *)PTR_DAT_0271e438) {
LAB_00d7d778:
          if (uVar1 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(long *)((long)piVar6 + uVar7);
          }
          bVar2 = lVar5 == *(long *)(PTR_DAT_0271e438 + 8);
          goto LAB_00d7d794;
        }
        bVar2 = true;
      }
    }
    else {
      bVar2 = false;
    }
LAB_00d7d794:
    uVar7 = FUN_00d70df0(piVar6,*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + 0x58,bVar2 ^ 1);
    if ((uVar7 & 1) != 0) goto LAB_00d7d690;
  }
  else {
    iVar3 = FUN_00d71450(param_1 + 0x5dc);
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + (long)iVar3 * 8 + 0x60) ==
        *(long *)(lVar5 + 0x18)) goto LAB_00d7d690;
  }
  local_38[0] = 1;
LAB_00d7d690:
  local_40[0] = 0;
  if (iVar4 != 0 && *(char *)(param_1 + 0x5e4) == '\0') {
    lVar5 = param_1 + 0x5dc;
    uVar7 = FUN_00d71280(lVar5);
    if ((uVar7 & 1) != 0) {
      iVar4 = FUN_00d71450(lVar5);
      lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + (long)iVar4 * 8 + 0x60);
      lVar5 = FUN_00d712e0(lVar5);
      if (lVar5 != lVar8) {
        local_40[0] = 1;
      }
    }
  }
  FUN_00d7eaf0(param_1,local_38,local_40);
  return;
}


