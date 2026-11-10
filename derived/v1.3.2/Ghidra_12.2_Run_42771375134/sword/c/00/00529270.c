/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00529270; name: FUN_00529270
 */


bool FUN_00529270(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  
  *(undefined1 *)(param_1 + 0xc6d) = 0;
  if (-1 < *(int *)(*(long *)(param_1 + 0x198) + 0x10c)) {
    *(undefined4 *)(*(long *)(param_1 + 0x198) + 500) = 0;
  }
  if (*(char *)(param_1 + 0x8b6) != '\0') {
    return false;
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x478);
  if ((int)*(uint *)(param_1 + 0x478) < 1) {
    lVar8 = *(long *)(param_1 + 0x198);
    iVar6 = 0;
    iVar3 = 0;
    if (*(int *)(lVar8 + 0x10c) < 0) goto LAB_005294cc;
  }
  else {
    lVar8 = 0;
    iVar6 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x858) + lVar8;
      if (((*(char *)(lVar5 + 0x60) != '\0') && (0.0 < *(float *)(param_1 + 0x848))) &&
         ((0.0 < *(float *)(*(long *)(param_1 + 0x858) + lVar8) ||
          ((0.0 < *(float *)(lVar5 + 4) || (0.0 < *(float *)(lVar5 + 8))))))) {
        if (*(int *)(lVar5 + 100) == 7) {
          if (*(char *)(param_1 + 0x895) == '\0') {
            fVar12 = *(float *)(param_1 + 0x1064);
          }
          else {
            FUN_005282d0(param_1);
            fVar12 = *(float *)(param_1 + 0x1064);
            if (*(char *)(param_1 + 0x895) != '\0') {
              FUN_005282d0(param_1);
            }
          }
          lVar5 = *(long *)(param_1 + 0x858);
          fVar10 = *(float *)(lVar5 + lVar8 + 0x5c);
          local_60._0_4_ = *(float *)(param_1 + 0x1054);
          local_60._4_4_ = *(float *)(param_1 + 0x1058);
          fVar10 = (fVar10 - fVar12) / fVar10;
        }
        else {
          FUN_00528d70(0x3f800000,0,param_1,&local_60,*(int *)(lVar5 + 100),2);
          lVar5 = *(long *)(param_1 + 0x858);
          fVar10 = *(float *)(lVar5 + lVar8 + 0x5c);
        }
        puVar1 = (undefined8 *)(lVar5 + lVar8);
        fVar10 = local_60._4_4_ + (float)local_60 * fVar10;
        local_60 = *puVar1;
        local_58 = puVar1[1];
        if (*(char *)(param_1 + 0x59c) != '\0') {
          fVar12 = *(float *)(param_1 + 0x8d0);
          local_60._4_4_ = (float)((ulong)local_60 >> 0x20);
          local_60 = CONCAT44(fVar12 * local_60._4_4_,fVar12 * (float)local_60);
          uVar2 = (ulong)local_58 >> 0x20;
          local_58 = CONCAT44((int)uVar2,fVar12 * (float)local_58);
        }
        FUN_00555390(*(undefined4 *)((long)puVar1 + 0x1c),*(undefined4 *)(puVar1 + 2),fVar10,
                     *(undefined4 *)(puVar1 + 4),*(undefined4 *)((long)puVar1 + 0x14),
                     *(undefined4 *)(puVar1 + 3),*(undefined8 *)(param_1 + 0x198),iVar6,&local_60);
        lVar5 = *(long *)(param_1 + 0x858) + lVar8;
        FUN_00555400(*(undefined4 *)(lVar5 + 0x24),*(undefined4 *)(lVar5 + 0x30),
                     *(undefined4 *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x2c),
                     *(undefined8 *)(param_1 + 0x198),iVar6,lVar5 + 0x34);
        FUN_0055e9b0(*(undefined8 *)(param_1 + 0x198),iVar6,
                     *(long *)(param_1 + 0x858) + lVar8 + 0x4c);
        lVar5 = *(long *)(param_1 + 0x858) + lVar8;
        if (*(char *)(param_1 + 0x10d5) == '\0') {
          local_68 = *(undefined4 *)(lVar5 + 0x44);
          uStack_64 = *(undefined4 *)(lVar5 + 0x48);
        }
        else {
          uVar9 = *(undefined4 *)(param_1 + 0x6cc);
          if (*(int *)(param_1 + 0xc14) == 2) {
            uVar11 = *(undefined4 *)(param_1 + 0xc1c);
          }
          else {
            if (*(int *)(param_1 + 0xc14) == 0) {
              uVar9 = *(undefined4 *)(param_1 + 0xc18);
            }
            uVar11 = 0;
          }
          uVar4 = *(undefined4 *)(param_1 + 0x420);
          local_68 = FUN_00578780(uVar9,*(undefined4 *)(param_1 + 0x420),
                                  *(undefined4 *)(param_1 + 0xbe8),uVar11,
                                  *(undefined4 *)(param_1 + 0xc20),*(undefined4 *)(param_1 + 0xc24),
                                  *(undefined4 *)(param_1 + 0xc28),*(undefined4 *)(param_1 + 0xc08),
                                  0,lVar5 + 0x44,*(undefined4 *)(param_1 + 0xc04));
          uStack_64 = uVar4;
        }
        FUN_00555450(*(undefined8 *)(param_1 + 0x198),iVar6,&local_68);
        iVar6 = iVar6 + 1;
      }
      lVar8 = lVar8 + 0x68;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    lVar8 = *(long *)(param_1 + 0x198);
    iVar3 = iVar6;
    if (*(int *)(lVar8 + 0x10c) < iVar6) goto LAB_005294cc;
  }
  iVar6 = iVar3;
  *(int *)(lVar8 + 500) = iVar6;
LAB_005294cc:
  *(bool *)(param_1 + 0xc6d) = 0 < iVar6;
  return 0 < iVar6;
}


