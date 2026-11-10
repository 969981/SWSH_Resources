/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a39b50; name: FUN_00a39b50
 */


/* WARNING: Removing unreachable block (ram,0x00a39c08) */

undefined8 FUN_00a39b50(undefined8 *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  char local_44 [4];
  
  plVar8 = (long *)*param_1;
  uVar1 = *(undefined4 *)(param_1 + 1);
  uVar2 = *(undefined4 *)((long)param_1 + 0xc);
  lVar6 = (**(code **)(*plVar8 + 0x7f8))(plVar8,*param_3);
  local_44[0] = '\0';
  if ((lVar6 == 0) || (uVar7 = FUN_008e1600(), (uVar7 & 1) != 0)) {
LAB_00a39c1c:
    iVar10 = 0;
    uVar9 = 0;
  }
  else {
    uVar4 = FUN_008e0a00(lVar6);
    iVar5 = (**(code **)(*plVar8 + 0x780))(plVar8,uVar1,uVar4,uVar2,local_44);
    if (local_44[0] == '\0') goto LAB_00a39c1c;
    iVar3 = (uint)(iVar5 == 2) << 1;
    iVar10 = iVar3;
    if (iVar5 != 2) {
      if (iVar5 == 1) {
        iVar10 = 1;
      }
      else {
        iVar10 = iVar5;
        if (iVar5 != 3) {
          iVar10 = iVar3;
        }
      }
    }
    uVar9 = 1;
    if (iVar10 == 2) goto LAB_00a39cd4;
  }
  plVar8 = (long *)*param_1;
  uVar1 = *(undefined4 *)(param_1 + 1);
  uVar2 = *(undefined4 *)((long)param_1 + 0xc);
  lVar6 = (**(code **)(*plVar8 + 0x7f8))(plVar8,param_3[1]);
  local_44[0] = '\0';
  if ((lVar6 != 0) && (uVar7 = FUN_008e1600(), (uVar7 & 1) == 0)) {
    uVar4 = FUN_008e0a00(lVar6);
    iVar5 = (**(code **)(*plVar8 + 0x780))(plVar8,uVar1,uVar4,uVar2,local_44);
    if (local_44[0] != '\0') {
      iVar3 = iVar10;
      if (((iVar10 != 2) && (iVar3 = iVar5, iVar5 != 2)) && (iVar3 = iVar10, iVar10 != 1)) {
        if (iVar5 == 1) {
          iVar3 = 1;
        }
        else if (((iVar10 != 3) && (iVar3 = iVar5, iVar5 != 3)) && (iVar3 = iVar10, iVar10 != 0)) {
          iVar3 = 0;
          if (iVar5 != 0) {
            iVar3 = iVar10;
          }
        }
      }
      iVar10 = iVar3;
      uVar9 = 1;
    }
  }
LAB_00a39cd4:
  *param_2 = iVar10;
  return uVar9;
}


