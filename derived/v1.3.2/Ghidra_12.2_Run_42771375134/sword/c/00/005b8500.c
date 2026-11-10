/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b8500; name: FUN_005b8500
 */


undefined8 FUN_005b8500(long param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_90 [6];
  undefined1 local_78;
  undefined4 *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (0.0 <= *(float *)(param_1 + 0x74)) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (1 < iVar1 - 1U) {
    if (iVar1 - 3U < 2) {
      local_90[0] = 0;
      local_90[1] = 0;
      local_90[2] = 0;
      local_90[3] = 0;
      iVar9 = *(int *)(param_1 + 0x3c);
      if (0 < iVar9) {
        lVar8 = 0;
        piVar5 = local_90;
        do {
          plVar3 = *(long **)(param_1 + 0x40 + lVar8 * 8);
          (**(code **)(*plVar3 + 0x60))(plVar3,piVar5,param_2 & 1);
          iVar9 = *piVar5;
          if (0xfe < iVar9) {
            iVar9 = 0xff;
          }
          *piVar5 = iVar9;
          iVar9 = *(int *)(param_1 + 0x3c);
          lVar8 = lVar8 + 1;
          piVar5 = piVar5 + 1;
        } while (lVar8 < iVar9);
      }
      if (iVar1 == 3) {
        lVar8 = *(long *)(param_1 + 0x30);
        do {
          lVar8 = *(long *)(lVar8 + 0x120);
        } while (lVar8 != 0);
      }
      else if (iVar1 == 4) {
        if (iVar9 < 3) {
          *(undefined1 *)(param_1 + 0x92) = (undefined1)local_90[0];
          *(ushort *)(param_1 + 0x90) = CONCAT11((undefined1)local_90[0],(undefined1)local_90[0]);
          *(char *)(param_1 + 0x93) = (char)local_90[1];
          fVar10 = *(float *)(param_1 + 0x74);
        }
        else {
          *(char *)(param_1 + 0x90) = (char)local_90[2];
          *(char *)(param_1 + 0x91) = (char)local_90[1];
          *(undefined1 *)(param_1 + 0x92) = (undefined1)local_90[0];
          *(char *)(param_1 + 0x93) = (char)local_90[3];
          fVar10 = *(float *)(param_1 + 0x74);
        }
        goto joined_r0x005b8778;
      }
    }
    else if (iVar1 == 5) {
      plVar6 = *(long **)(*(long *)(param_1 + 0x20) + 0x30);
      plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x30) +
                                    (long)*(int *)(*(long *)(param_1 + 0x30) + 0xa0) * 8 + 0xb8) +
                         0xa8);
      lVar8 = (**(code **)(*plVar3 + 0xd8))(plVar3,0);
      uVar7 = *(undefined8 *)(lVar8 + 0x20);
      local_90[4] = 0;
      local_90[5] = 0;
      local_78 = 0;
      local_90[2] = 4;
      local_60 = 0;
      uStack_58 = 0;
      local_90[0] = 1;
      local_90[1] = 0;
      local_70 = (undefined4 *)0x0;
      uStack_68 = 0;
      uVar4 = (**(code **)(*plVar6 + 0x228))(plVar6,uVar7,local_90);
      if ((uVar4 & 1) != 0) {
        uVar2 = *local_70;
        *(char *)(param_1 + 0x92) = (char)uVar2;
        *(char *)(param_1 + 0x90) = (char)((uint)uVar2 >> 0x10);
        *(char *)(param_1 + 0x91) = (char)((uint)uVar2 >> 8);
        *(char *)(param_1 + 0x93) = (char)((uint)uVar2 >> 0x18);
        (**(code **)(*plVar6 + 0x230))(plVar6,uVar7,local_90);
        fVar10 = *(float *)(param_1 + 0x74);
        goto joined_r0x005b8778;
      }
    }
  }
  fVar10 = *(float *)(param_1 + 0x74);
joined_r0x005b8778:
  if (fVar10 < 0.0) {
    fVar13 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x90));
    fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x93));
    fVar13 = fVar13 * DAT_01d4bb68;
    fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x92));
    fVar10 = fVar10 * DAT_01d4bb68;
    fVar12 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x91));
    fVar11 = fVar11 * DAT_01d4bb68;
    fVar12 = fVar12 * DAT_01d4bb68;
    *(float *)(param_1 + 0x6c) = fVar13;
    *(float *)(param_1 + 0x70) = fVar10;
    fVar10 = DAT_01d4be14;
    *(float *)(param_1 + 100) = fVar11;
    *(float *)(param_1 + 0x68) = fVar12;
    *(float *)(param_1 + 0x74) = fVar11 * fVar10 + fVar12 * DAT_01d4be80 + fVar13 * DAT_01d4c3f8;
  }
  return 0;
}


