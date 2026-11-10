/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c4f90; name: FUN_009c4f90
 */


undefined8 FUN_009c4f90(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_38;
  
  piVar1 = (int *)((long)param_1 + 0x4e5c);
  iVar3 = *piVar1;
  if (iVar3 == 1) {
    if (*(char *)((long)param_1 + 0x4e61) != '\0') {
      uVar6 = FUN_00915150(param_1 + 1);
      uVar4 = FUN_00915260(param_1 + 1);
      uVar5 = FUN_009b1f50(*param_1,*(undefined1 *)((long)param_1 + 0x4e59),uVar6,uVar4);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
    }
    *piVar1 = 3;
    cVar2 = *(char *)((long)param_1 + 0x4e61);
  }
  else {
    if (iVar3 == 4) {
      return 1;
    }
    if (iVar3 != 3) {
      return 0;
    }
    cVar2 = *(char *)((long)param_1 + 0x4e61);
  }
  if (cVar2 == '\0') {
    if (*(char *)(param_1 + 0x9cc) == '\0') {
      return 0;
    }
  }
  else {
    uVar5 = FUN_009b2500(*param_1);
    if (((uVar5 & 1) == 0) ||
       (iVar3 = FUN_009b2980(*param_1,*(undefined1 *)((long)param_1 + 0x4e59),&local_38), iVar3 == 0
       )) {
      return 0;
    }
    FUN_009151e0(param_1 + 0x4e6,local_38);
    *(undefined1 *)(param_1 + 0x9cc) = 1;
  }
  *piVar1 = 4;
  return 1;
}


