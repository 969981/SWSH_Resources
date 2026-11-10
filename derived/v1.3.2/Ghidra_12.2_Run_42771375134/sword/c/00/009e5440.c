/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e5440; name: FUN_009e5440
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_009e5440(long param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  int local_14 [5];
  
  bVar2 = *(int *)(param_1 + 0x8c) != 2;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0x94);
  }
  else {
    local_14[0] = 0;
    iVar1 = *(int *)(param_1 + 0x94);
  }
  bVar2 = !bVar2;
  uVar4 = (ulong)bVar2;
  if (iVar1 == 2) {
    local_14[uVar4] = 1;
    uVar4 = (ulong)(bVar2 + 1);
  }
  if (*(int *)(param_1 + 0x9c) == 2) {
    local_14[uVar4] = 2;
    uVar4 = (ulong)((int)uVar4 + 1);
    iVar1 = *(int *)(param_1 + 0xa4);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa4);
  }
  uVar3 = (uint)uVar4;
  if (iVar1 == 2) {
    local_14[uVar4] = 3;
    uVar3 = uVar3 + 1;
    uVar4 = (ulong)uVar3;
    iVar1 = *(int *)(param_1 + 0xac);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xac);
  }
  if (iVar1 == 2) {
    local_14[uVar4] = 4;
    uVar3 = (int)uVar4 + 1;
  }
  else if (uVar3 == 0) {
    return 6;
  }
  if (local_14[0] == 0) {
    return 0;
  }
  if (1 < uVar3) {
    if (local_14[1] == 0) {
      return 0;
    }
    if (2 < uVar3) {
      if (local_14[2] == 0) {
        return 0;
      }
      if (3 < uVar3) {
        if (local_14[3] == 0) {
          return 0;
        }
        if ((4 < uVar3) && (local_14[4] == 0)) {
          return 0;
        }
      }
    }
  }
  if (local_14[0] == 3) {
    return 3;
  }
  if (1 < uVar3) {
    if (local_14[1] == 3) {
      return 3;
    }
    if (2 < uVar3) {
      if (local_14[2] == 3) {
        return 3;
      }
      if (3 < uVar3) {
        if (local_14[3] == 3) {
          return 3;
        }
        if ((4 < uVar3) && (local_14[4] == 3)) {
          return 3;
        }
      }
    }
  }
  if (local_14[0] == 1) {
    return 1;
  }
  if (1 < uVar3) {
    if (local_14[1] == 1) {
      return 1;
    }
    if (2 < uVar3) {
      if (local_14[2] == 1) {
        return 1;
      }
      if (3 < uVar3) {
        if (local_14[3] == 1) {
          return 1;
        }
        if ((4 < uVar3) && (local_14[4] == 1)) {
          return 1;
        }
      }
    }
  }
  if (local_14[0] == 2) {
    return 2;
  }
  if (1 < uVar3) {
    if (local_14[1] == 2) {
      return 2;
    }
    if (2 < uVar3) {
      if (local_14[2] == 2) {
        return 2;
      }
      if (3 < uVar3) {
        if (local_14[3] == 2) {
          return 2;
        }
        if ((4 < uVar3) && (local_14[4] == 2)) {
          return 2;
        }
      }
    }
  }
  if (local_14[0] == 4) {
    return 4;
  }
  if (1 < uVar3) {
    if (local_14[1] == 4) {
      return 4;
    }
    if (2 < uVar3) {
      if (local_14[2] == 4) {
        return 4;
      }
      if (3 < uVar3) {
        if (local_14[3] == 4) {
          return 4;
        }
        if (4 < uVar3) {
          if (local_14[4] != 4) {
            local_14[4] = 6;
          }
          return local_14[4];
        }
      }
    }
  }
  return 6;
}


