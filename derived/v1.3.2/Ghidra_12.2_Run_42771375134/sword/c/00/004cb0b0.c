/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cb0b0; name: FUN_004cb0b0
 */


void FUN_004cb0b0(float param_1,long param_2,long *param_3,float *param_4,long param_5,long param_6,
                 uint param_7,long param_8)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  long local_e0;
  long lStack_d8;
  uint local_d0;
  uint local_cc;
  long local_c8;
  long lStack_c0;
  uint local_b4;
  ulong local_b0;
  long local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 local_94;
  undefined8 local_90;
  
  local_9c = 0x2b;
  local_94 = 0;
  local_90 = 0;
  local_a8 = (long)&local_e0 - ((ulong)((param_7 & 0xffff) * 4 + 0xf) & 0x7fff0);
  local_98 = (undefined2)param_7;
  local_a0 = 0x4101;
  uVar4 = *(uint *)(param_3 + 1);
  local_cc = uVar4 & 0xff;
  uVar1 = *(uint *)(param_2 + 8) - (*(uint *)(param_2 + 8) >> 0xf & 1) & 0xff;
  uVar6 = (ulong)uVar1;
  local_96 = local_98;
  if (uVar1 == 0) {
    uVar6 = 0;
    cVar2 = *(char *)(param_2 + 9);
    uVar4 = 0;
  }
  else {
    uVar4 = uVar4 - (uVar4 >> 0xf & 1) & 0xff;
    local_b0 = (ulong)uVar4;
    if (uVar4 == 0) {
      uVar8 = 0;
      do {
        uVar4 = FUN_004d1400(param_8,param_2,&local_a8,uVar8);
        uVar8 = uVar8 + 1;
      } while (uVar1 != uVar8);
      cVar2 = *(char *)(param_2 + 9);
    }
    else {
      uVar9 = 0;
      local_c8 = (ulong)(local_cc + 3 & 0x1fc) << 2;
      local_e0 = param_5;
      lStack_d8 = param_6;
      local_d0 = param_7;
      lStack_c0 = param_8;
      do {
        local_b4 = FUN_004d1400(lStack_c0,param_2,&local_a8,uVar9 & 0xffffffff);
        lVar7 = local_a8;
        lVar11 = 0;
        uVar10 = local_b0;
        do {
          fVar12 = *param_4 * *(float *)(param_5 + lVar11);
          FUN_004cb940(fVar12,(param_4[1] * *(float *)(param_6 + lVar11) - fVar12) * param_1,lVar7,
                       *param_3 + lVar11 * (ulong)*(ushort *)(param_3 + 2),param_7 & 0xffff);
          lVar11 = lVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        param_6 = param_6 + local_c8;
        param_5 = param_5 + local_c8;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar6);
      cVar2 = *(char *)(param_2 + 9);
      param_7 = local_d0;
      param_6 = lStack_d8;
      param_5 = local_e0;
      param_8 = lStack_c0;
      uVar4 = local_b4;
    }
  }
  if ((cVar2 < '\0') && (*(char *)((long)param_3 + 9) < '\0')) {
    uVar4 = FUN_004d1400(param_8,param_2,&local_a8,uVar6);
    uVar9 = (ulong)((*(uint *)(param_3 + 1) & 0xff) - 1);
    lVar7 = uVar9 * 4;
    lVar11 = (ulong)((int)uVar6 * (local_cc + 3 & 0x1fc)) * 4;
    fVar12 = *param_4 * *(float *)(param_5 + lVar11 + lVar7);
    if ((*(uint *)(param_3 + 1) >> 0xf & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *param_3 + uVar9 * *(ushort *)(param_3 + 2) * 4;
    }
    FUN_004cb940(fVar12,(param_4[1] * *(float *)(param_6 + lVar11 + lVar7) - fVar12) * param_1,
                 local_a8,lVar5,param_7 & 0xffff);
  }
  *(short *)((long)param_3 + 0x12) = (short)param_7;
  *(short *)(param_8 + 0x188) = (short)uVar4;
  *(short *)(param_8 + 0x198) = (short)uVar4;
  uVar3 = *(ushort *)PTR_DAT_027133f0;
  if ((*(char *)(param_8 + 0x18d) == '\0') && ((uint)uVar3 <= (uVar4 & 0xffff))) {
    *(float *)(param_8 + 0x180) = *(float *)(param_8 + 0x184);
    uVar1 = (int)*(char *)(param_8 + 0x18a) - 1;
    if (*(char *)(param_8 + 0x18a) < 1) {
      if (*(float *)(param_8 + 0x184) <= DAT_01d4bec4) {
        *(undefined1 *)(param_8 + 0x18a) = 4;
      }
    }
    else {
      *(char *)(param_8 + 0x18a) = (char)uVar1;
      if ((uVar1 & 0xff) == 0) {
        *(undefined2 *)(param_8 + 0x18d) = 1;
        cVar2 = *(char *)(param_8 + 0x19d);
        goto joined_r0x004cb37c;
      }
    }
  }
  cVar2 = *(char *)(param_8 + 0x19d);
joined_r0x004cb37c:
  if ((cVar2 == '\0') && ((uint)uVar3 <= (uVar4 & 0xffff))) {
    *(float *)(param_8 + 400) = *(float *)(param_8 + 0x194);
    uVar1 = (int)*(char *)(param_8 + 0x19a) - 1;
    if (*(char *)(param_8 + 0x19a) < 1) {
      if (*(float *)(param_8 + 0x194) <= DAT_01d4bec4) {
        *(undefined1 *)(param_8 + 0x19a) = 4;
      }
    }
    else {
      *(char *)(param_8 + 0x19a) = (char)uVar1;
      if ((uVar1 & 0xff) == 0) {
        *(undefined2 *)(param_8 + 0x19d) = 1;
      }
    }
  }
  return;
}


