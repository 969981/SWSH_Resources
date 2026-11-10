/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c77960; name: FUN_00c77960
 */


void FUN_00c77960(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 local_30 [4];
  uint local_2c;
  undefined8 local_28;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  if (iVar1 == 2) {
    if (*(int *)(param_1 + 0x1a4) != 1) {
      if (*(int *)(param_1 + 0x1a4) != 0) {
        return;
      }
      uVar3 = FUN_00c77e40(param_1);
      if ((uVar3 & 1) != 0) {
        return;
      }
      if ((*(char *)(param_1 + 0x198) != '\0') && (uVar3 = FUN_00c78040(param_1), (uVar3 & 1) != 0))
      {
        FUN_00c77c50(param_1);
        *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
        *(undefined4 *)(param_1 + 0x1ac) = 0;
        return;
      }
      goto LAB_00c77a54;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 0) {
      return;
    }
    if ((*(char *)(param_1 + 0x198) != '\0') && (uVar3 = FUN_00c78040(param_1), (uVar3 & 1) != 0)) {
      if ((*(char *)(param_1 + 0x148) != '\0') || (*(int *)(param_1 + 0xc0) == 0)) {
LAB_00c779ac:
        iVar1 = FUN_00c77b20(param_1);
        if (iVar1 == 0) {
          *(float *)(param_1 + 0x1a8) =
               *(float *)(param_1 + 0x1a8) + 1.0 / *(float *)PTR_DAT_0271c330;
          return;
        }
        FUN_00c77c50(param_1);
        if (*(int *)(param_1 + 0x1a0) == iVar1) {
          return;
        }
        *(int *)(param_1 + 0x1a0) = iVar1;
        *(undefined8 *)(param_1 + 0x1a4) = 0;
        *(undefined4 *)(param_1 + 0x1ac) = 0;
        return;
      }
      uVar2 = FUN_0069c2b0(*(undefined8 *)(param_1 + 0x10));
      local_2c = *(uint *)(param_1 + 0x194);
      if (local_2c < uVar2) {
        local_30[0] = 1;
        local_28 = FUN_0069c990(*(undefined8 *)(param_1 + 0x10),local_30);
        plVar4 = (long *)FUN_006b92e0(&local_28);
        if (*plVar4 == *(long *)(param_1 + 0xa0)) goto LAB_00c779ac;
      }
    }
    *(undefined8 *)(param_1 + 0x1a4) = 0;
    *(undefined8 *)(param_1 + 0x19c) = 0;
    return;
  }
  uVar3 = FUN_00c77e40(param_1);
  if ((uVar3 & 1) != 0) {
    return;
  }
LAB_00c77a54:
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x1a0);
  if (*(int *)(param_1 + 0x1a0) != 0) {
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
  return;
}


