/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f5220; name: FUN_007f5220
 */


undefined8 FUN_007f5220(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  size_t __n;
  size_t sVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong *puVar7;
  byte *__s2;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  byte *__s1;
  undefined8 *puVar11;
  byte *pbVar12;
  byte local_70 [16];
  void *local_60;
  ulong local_58;
  size_t local_50;
  byte *local_48;
  
  puVar11 = (undefined8 *)param_2[0xd];
  if (*(int *)(puVar11 + 0xf) != 0) {
    return 0;
  }
  if (*(int *)(param_2 + 8) != 3) {
    return 0;
  }
  if (*(int *)(puVar11 + 0xd) != 0) {
    return 0;
  }
  if (*(int *)(puVar11 + 9) != 0) {
    return 0;
  }
  if (*(int *)(puVar11 + 0xb) != 0) {
    return 0;
  }
  if (*(int *)((long)puVar11 + 0x2c) != 2) {
    return 0;
  }
  pbVar12 = (byte *)*puVar11;
  FUN_007f1560(local_70,*param_2,0);
  puVar7 = (ulong *)std::string::append((char *)local_70);
  uVar2 = *puVar7;
  local_50 = puVar7[1];
  local_48 = (byte *)puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  bVar4 = *pbVar12;
  __n = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    __n = *(size_t *)(pbVar12 + 8);
  }
  sVar1 = uVar2 >> 1 & 0x7f;
  if ((uVar2 & 1) != 0) {
    sVar1 = local_50;
  }
  local_58 = uVar2;
  if (__n == sVar1) {
    __s1 = *(byte **)(pbVar12 + 0x10);
    if ((bVar4 & 1) == 0) {
      __s1 = pbVar12 + 1;
    }
    __s2 = (byte *)((ulong)&local_58 | 1);
    if ((uVar2 & 1) != 0) {
      __s2 = local_48;
    }
    if ((bVar4 & 1) == 0) {
      if (__n != 0) {
        lVar10 = -(ulong)(bVar4 >> 1);
        do {
          pbVar12 = pbVar12 + 1;
          if (*pbVar12 != *__s2) goto LAB_007f534c;
          __s2 = __s2 + 1;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((__n != 0) && (iVar6 = memcmp(__s1,__s2,__n), iVar6 != 0)) goto LAB_007f534c;
    bVar5 = param_2[10] != puVar11[3];
  }
  else {
LAB_007f534c:
    bVar5 = true;
  }
  if ((uVar2 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((!bVar5) && (puVar11 = (undefined8 *)puVar11[6], *(int *)(puVar11 + 8) == 1)) &&
     (*(int *)(puVar11 + 7) == 1)) {
    pbVar12 = (byte *)*puVar11;
    uVar2 = (ulong)(*pbVar12 >> 1);
    if ((*pbVar12 & 1) != 0) {
      uVar2 = *(ulong *)(pbVar12 + 8);
    }
    if (((uVar2 == 3) &&
        (iVar6 = std::string::compare((ulong)pbVar12,0,(char *)0xffffffffffffffff,0x1cebaa4),
        iVar6 == 0)) && ((*(int *)(puVar11 + 0x1a) == 1 && (*(int *)(puVar11 + 0x19) == 2)))) {
      pbVar12 = (byte *)puVar11[0x12];
      uVar2 = (ulong)(*pbVar12 >> 1);
      if ((*pbVar12 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar12 + 8);
      }
      if ((uVar2 == 5) &&
         (iVar6 = std::string::compare((ulong)pbVar12,0,(char *)0xffffffffffffffff,0x1cd96b5),
         iVar6 == 0)) {
        uVar3 = *(uint *)((long)puVar11 + 0x3c);
        if (uVar3 < 0xf) {
          if ((1 << (ulong)(uVar3 & 0x1f) & 0x1c06U) == 0) {
            if (uVar3 != 0xe) goto LAB_007f5494;
            uVar8 = param_2[1];
            pcVar9 = "Key in map fields cannot be enum types.";
          }
          else {
            uVar8 = param_2[1];
            pcVar9 = "Key in map fields cannot be float/double, bytes or message types.";
          }
          FUN_007eac10(param_1,uVar8,param_3,2,pcVar9);
        }
LAB_007f5494:
        if ((*(int *)((long)puVar11 + 0xcc) == 0xe) &&
           (*(int *)(*(long *)(puVar11[0x20] + 0x30) + 0x10) != 0)) {
          FUN_007eac10(param_1,param_2[1],param_3,2,
                       "Enum value in map must define 0 as the first value.");
        }
        return 1;
      }
    }
  }
  return 0;
}


