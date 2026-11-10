/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b5250; name: FUN_009b5250
 */


void FUN_009b5250(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  iVar2 = nn::oe::GetCurrentFocusState();
  if (iVar2 == 1) {
    if (*(char *)(param_1 + 0x3a8) != '\0') goto LAB_009b529c;
    uVar7 = 0;
    *(undefined1 *)(param_1 + 0x3a8) = 1;
  }
  else {
    if ((iVar2 != 3) || (*(char *)(param_1 + 0x3a8) == '\0')) {
LAB_009b529c:
      iVar2 = *(int *)(param_1 + 0x368);
      goto joined_r0x009b52a4;
    }
    *(undefined1 *)(param_1 + 0x3a8) = 0;
    uVar7 = 1;
  }
  FUN_009b4fc0(param_1,uVar7,0);
  iVar2 = *(int *)(param_1 + 0x368);
joined_r0x009b52a4:
  if ((iVar2 != 1) && (*(int *)(param_1 + 0x370) != 1)) {
    uVar7 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
    uVar5 = FUN_01020270(uVar7,0x8000);
    uVar6 = FUN_01020270(uVar7,2);
    uVar3 = FUN_01020290(uVar7,0x8000);
    uVar4 = FUN_01020290(uVar7,2);
    if (((uVar5 & 1) != 0) && (((uVar6 & 1) != 0 && (((uVar3 | uVar4) & 1) != 0)))) {
      FUN_009b4fc0(param_1,2,0);
    }
    iVar2 = *(int *)(param_1 + 0x368);
    if ((iVar2 == 3) || (*(int *)(param_1 + 0x370) == 3)) {
      *(undefined2 *)(param_1 + 0x3a9) = 0;
      *(undefined1 *)(param_1 + 0x3ab) = 1;
    }
    else if ((*(char *)(param_1 + 0x3a9) != '\0') &&
            (*(char *)(param_1 + 0x211) == *(char *)(param_1 + 0x90))) {
      if (iVar2 == 2) {
        bVar1 = false;
        iVar2 = *(int *)(param_1 + 0x370);
      }
      else {
        if ((((*(int *)(param_1 + 0x370) == 2) || (*(int *)(param_1 + 0x378) == 2)) ||
            (*(int *)(param_1 + 0x380) == 2)) ||
           (((*(int *)(param_1 + 0x388) == 2 || (*(int *)(param_1 + 0x390) == 2)) ||
            (*(int *)(param_1 + 0x398) == 2)))) {
          bVar1 = false;
        }
        else {
          bVar1 = *(int *)(param_1 + 0x3a0) != 2;
        }
        if (iVar2 == 1) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0x370);
      }
      if (((iVar2 != 1) && (*(int *)(param_1 + 0x378) != 1)) &&
         (((*(int *)(param_1 + 0x380) != 1 &&
           (((*(int *)(param_1 + 0x388) != 1 && (*(int *)(param_1 + 0x390) != 1)) &&
            (*(int *)(param_1 + 0x398) != 1)))) && (*(int *)(param_1 + 0x3a0) != 1 && !bVar1)))) {
        FUN_009b4fc0(param_1,3,*(undefined4 *)(param_1 + 0x3b0));
        return;
      }
    }
  }
  return;
}


