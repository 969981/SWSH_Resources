/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d34d30; name: FUN_00d34d30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d34d30(long param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long local_58;
  
  iVar5 = _DAT_000007a4;
  if (*(char *)(param_1 + 0xb6) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    local_58 = 0;
    *(int *)(param_1 + 0xa8) = _DAT_000007a4;
    iVar4 = *(int *)(param_1 + 0x70);
    if (iVar4 <= iVar5) goto LAB_00d34dc4;
  }
  else {
    FUN_00d1a020(&local_58);
    iVar5 = *(int *)(local_58 + 0x7a4);
    *(int *)(param_1 + 0xa8) = iVar5;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
      iVar5 = *(int *)(param_1 + 0xa8);
    }
    iVar4 = *(int *)(param_1 + 0x70);
    if (iVar4 <= iVar5) {
LAB_00d34dc4:
      iVar6 = *(int *)(param_1 + 0x74);
      if (iVar5 <= *(int *)(param_1 + 0x74)) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 - iVar4;
      *(int *)(param_1 + 0xac) = iVar6;
      if (iVar6 != -1) {
        cVar1 = DAT_000007d4;
        if (*(long *)(param_1 + 0x90) != 0) {
          FUN_00d1a020(&local_58);
          cVar1 = *(char *)(local_58 + 0x7d4);
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          }
        }
        if (cVar1 == '\0') {
          iVar4 = *(int *)(param_1 + 0x70);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x70);
          iVar2 = iVar6 + -1;
          if (iVar4 != iVar5 && *(int *)(param_1 + 0x74) == iVar4) {
            iVar2 = 0;
          }
          *(int *)(param_1 + 0xb0) = iVar2;
          if (*(int *)(param_1 + 0x74) < iVar5) {
            if ((*(char *)(param_1 + 0xb4) != '\0') && (*(code **)(param_1 + 0x240) != (code *)0x0))
            {
              (**(code **)(param_1 + 0x240))(param_1 + 0x260);
            }
            *(undefined1 *)(param_1 + 0xb5) = 1;
            return;
          }
        }
      }
      goto LAB_00d34e64;
    }
  }
  iVar6 = -1;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
LAB_00d34e64:
  iVar5 = *(int *)(param_1 + 0xb0);
  iVar2 = iVar6 - iVar5;
  iVar4 = *(int *)(param_1 + 0x74) - iVar4;
  if (iVar2 < 1) {
    if (*(long *)(param_1 + 0x90) == 0) {
      local_58 = 0;
      uVar3 = FUN_00d67a60();
    }
    else {
      FUN_00d1a020(&local_58);
      uVar3 = FUN_00d67a60(local_58);
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (((((uVar3 & 1) != 0) && (-1 < *(int *)(param_1 + 0xac))) &&
        (*(int *)(param_1 + 0xac) < iVar4)) && (*(code **)(param_1 + 0x1c0) != (code *)0x0)) {
      (**(code **)(param_1 + 0x1c0))(param_1 + 0x1e0);
    }
  }
  else {
    do {
      if (iVar6 <= iVar5) goto LAB_00d34f44;
      if (iVar5 == -1) {
        *(undefined1 *)(param_1 + 0xb4) = 1;
        if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
          (**(code **)(param_1 + 0xc0))(param_1 + 0xe0);
        }
      }
      iVar5 = iVar5 + 1;
      if (*(code **)(param_1 + 0x140) != (code *)0x0) {
        local_58 = CONCAT44(local_58._4_4_,1);
        (**(code **)(param_1 + 0x140))(param_1 + 0x160,&local_58);
      }
    } while (iVar4 != iVar5);
    if (*(code **)(param_1 + 0x240) != (code *)0x0) {
      (**(code **)(param_1 + 0x240))(param_1 + 0x260);
    }
    *(undefined1 *)(param_1 + 0xb5) = 1;
  }
LAB_00d34f44:
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + iVar2;
  return;
}


