/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00950dd0; name: FUN_00950dd0
 */


void FUN_00950dd0(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  char local_28 [8];
  
  bVar1 = FUN_00913c00(param_2,0,local_28);
  if (bVar1 != 0) {
    bVar3 = *(byte *)(param_1 + 0xd);
    uVar2 = 0;
    do {
      if (bVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          if (*(char *)(param_1 + 8 + uVar4) == local_28[uVar2]) goto LAB_00950e60;
          uVar4 = uVar4 + 1;
        } while (uVar4 < bVar3);
        uVar4 = (ulong)bVar3;
      }
      *(char *)(param_1 + uVar4 + 8) = local_28[uVar2];
      bVar3 = *(char *)(param_1 + 0xd) + 1;
      *(byte *)(param_1 + 0xd) = bVar3;
LAB_00950e60:
      uVar2 = uVar2 + 1;
    } while (uVar2 != bVar1);
  }
  bVar1 = FUN_00913c00(param_2,1,local_28);
  if (bVar1 != 0) {
    bVar3 = *(byte *)(param_1 + 0xd);
    uVar2 = 0;
    do {
      if (bVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          if (*(char *)(param_1 + 8 + uVar4) == local_28[uVar2]) goto LAB_00950ee4;
          uVar4 = uVar4 + 1;
        } while (uVar4 < bVar3);
        uVar4 = (ulong)bVar3;
      }
      *(char *)(param_1 + uVar4 + 8) = local_28[uVar2];
      bVar3 = *(char *)(param_1 + 0xd) + 1;
      *(byte *)(param_1 + 0xd) = bVar3;
LAB_00950ee4:
      uVar2 = uVar2 + 1;
    } while (uVar2 != bVar1);
  }
  bVar1 = FUN_00913c00(param_2,2,local_28);
  if (bVar1 != 0) {
    bVar3 = *(byte *)(param_1 + 0xd);
    uVar2 = 0;
    do {
      if (bVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          if (*(char *)(param_1 + 8 + uVar4) == local_28[uVar2]) goto LAB_00950f68;
          uVar4 = uVar4 + 1;
        } while (uVar4 < bVar3);
        uVar4 = (ulong)bVar3;
      }
      *(char *)(param_1 + uVar4 + 8) = local_28[uVar2];
      bVar3 = *(char *)(param_1 + 0xd) + 1;
      *(byte *)(param_1 + 0xd) = bVar3;
LAB_00950f68:
      uVar2 = uVar2 + 1;
    } while (uVar2 != bVar1);
  }
  bVar1 = FUN_00913c00(param_2,3,local_28);
  if (bVar1 != 0) {
    bVar3 = *(byte *)(param_1 + 0xd);
    uVar2 = 0;
    do {
      if (bVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          if (*(char *)(param_1 + 8 + uVar4) == local_28[uVar2]) goto LAB_00950fec;
          uVar4 = uVar4 + 1;
        } while (uVar4 < bVar3);
        uVar4 = (ulong)bVar3;
      }
      *(char *)(param_1 + uVar4 + 8) = local_28[uVar2];
      bVar3 = *(char *)(param_1 + 0xd) + 1;
      *(byte *)(param_1 + 0xd) = bVar3;
LAB_00950fec:
      uVar2 = uVar2 + 1;
    } while (uVar2 != bVar1);
  }
  bVar1 = FUN_00913c00(param_2,4,local_28);
  if (bVar1 != 0) {
    bVar3 = *(byte *)(param_1 + 0xd);
    uVar2 = 0;
    do {
      if (bVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          if (*(char *)(param_1 + 8 + uVar4) == local_28[uVar2]) goto LAB_00951070;
          uVar4 = uVar4 + 1;
        } while (uVar4 < bVar3);
        uVar4 = (ulong)bVar3;
      }
      *(char *)(param_1 + uVar4 + 8) = local_28[uVar2];
      bVar3 = *(char *)(param_1 + 0xd) + 1;
      *(byte *)(param_1 + 0xd) = bVar3;
LAB_00951070:
      uVar2 = uVar2 + 1;
    } while (uVar2 != bVar1);
  }
  return;
}


