/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b5db0; name: FUN_011b5db0
 */


undefined8
FUN_011b5db0(undefined1 param_1,undefined8 param_2,undefined8 *param_3,void *param_4,long param_5)

{
  byte *pbVar1;
  ushort uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ushort uVar9;
  uint uVar10;
  byte *pbVar11;
  byte local_310 [8];
  undefined2 local_308;
  undefined1 local_2ff;
  byte local_2fb;
  undefined1 local_2f4;
  undefined4 local_2f0;
  undefined2 local_2ec;
  short local_2ea;
  undefined2 local_2e8;
  short local_2e6;
  undefined2 local_2e4;
  short local_2e2;
  undefined2 local_2e0;
  short local_2de;
  undefined2 local_2dc;
  short local_2da;
  ushort local_44;
  byte abStack_42 [2];
  
  pbVar11 = local_310;
  uVar7 = 0x80000000;
  *param_3 = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (((param_3 != (undefined8 *)0x0) && (param_4 != (void *)0x0)) && (param_5 == 0x2d0)) {
    memcpy(local_310,param_4,0x2d0);
    uVar6 = local_44;
    puVar5 = PTR_DAT_02725658;
    puVar4 = PTR_DAT_02725650;
    local_44 = 0;
    if (*PTR_DAT_02725650 == '\0') {
      uVar8 = 0;
      do {
        uVar9 = 0;
        if ((char)uVar8 < '\0') {
          uVar9 = 0x8108;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar9 = uVar9 | 0x4084;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar9 = uVar9 | 0x2042;
        }
        if ((uVar8 & 0x10) != 0) {
          uVar9 = uVar9 | 0x1021;
        }
        if ((uVar8 & 8) != 0) {
          uVar9 = uVar9 ^ 0x8000;
        }
        uVar2 = uVar9 << 1;
        if ((short)uVar9 < 0) {
          uVar2 = uVar9 << 1 ^ 0x1021;
        }
        if ((uVar8 & 4) != 0) {
          uVar2 = uVar2 ^ 0x8000;
        }
        uVar9 = uVar2 << 1;
        if ((short)uVar2 < 0) {
          uVar9 = uVar2 << 1 ^ 0x1021;
        }
        if ((uVar8 & 2) != 0) {
          uVar9 = uVar9 ^ 0x8000;
        }
        uVar2 = uVar9 << 1;
        if ((short)uVar9 < 0) {
          uVar2 = uVar9 << 1 ^ 0x1021;
        }
        if ((uVar8 & 1) != 0) {
          uVar2 = uVar2 ^ 0x8000;
        }
        uVar9 = uVar2 << 1;
        if ((short)uVar2 < 0) {
          uVar9 = uVar2 << 1 ^ 0x1021;
        }
        *(ushort *)(puVar5 + uVar8 * 2) = uVar9;
        uVar8 = uVar8 + 1;
      } while (uVar8 != 0x100);
      *puVar4 = 1;
    }
    uVar10 = 0xffff;
    do {
      bVar3 = *pbVar11;
      pbVar1 = pbVar11 + 1;
      pbVar11 = pbVar11 + 2;
      uVar10 = (uint)*(ushort *)
                      (PTR_DAT_02725658 +
                      ((ulong)((uint)*pbVar1 ^
                              ((uint)*(ushort *)
                                      (PTR_DAT_02725658 +
                                      ((ulong)((uint)bVar3 ^ uVar10 >> 8) & 0xff) * 2) ^ uVar10 << 8
                              ) >> 8) & 0xff) * 2) ^
               (uint)*(ushort *)(PTR_DAT_02725658 + ((ulong)((uint)bVar3 ^ uVar10 >> 8) & 0xff) * 2)
               << 8;
    } while (pbVar11 != abStack_42 + 2);
    if ((uint)uVar6 == (uVar10 & 0xffff)) {
      *(undefined2 *)(param_3 + 1) = local_308;
      *(ushort *)((long)param_3 + 10) = (ushort)local_2fb;
      *(undefined1 *)((long)param_3 + 0xc) = local_2ff;
      *(undefined1 *)((long)param_3 + 0xe) = param_1;
      *(undefined1 *)((long)param_3 + 0xf) = local_2f4;
      switch(local_2ff) {
      case 1:
        FUN_011b58c0(param_2,param_3,local_310);
        uVar7 = 0;
        break;
      case 2:
        *(undefined2 *)(param_3 + 6) = (undefined2)local_2f0;
        *(short *)((long)param_3 + 0x32) = local_2f0._2_2_;
        *(undefined2 *)((long)param_3 + 0x34) = local_2ec;
        *(short *)((long)param_3 + 0x36) = local_2ea;
        *(undefined2 *)(param_3 + 7) = local_2e8;
        *(short *)((long)param_3 + 0x3a) = local_2e6;
        *(undefined2 *)((long)param_3 + 0x3c) = local_2e4;
        *(short *)((long)param_3 + 0x3e) = local_2e2;
        *(undefined2 *)(param_3 + 8) = local_2e0;
        *(short *)((long)param_3 + 0x42) = local_2de;
        *(undefined2 *)((long)param_3 + 0x44) = local_2dc;
        *(short *)((long)param_3 + 0x46) = local_2da;
        if (local_2f0._2_2_ != 0) {
          *(char *)((long)param_3 + 0xd) = *(char *)((long)param_3 + 0xd) + '\x01';
        }
        if (local_2ea != 0) {
          *(char *)((long)param_3 + 0xd) = *(char *)((long)param_3 + 0xd) + '\x01';
        }
        if (local_2e6 != 0) {
          *(char *)((long)param_3 + 0xd) = *(char *)((long)param_3 + 0xd) + '\x01';
        }
        if (local_2e2 != 0) {
          *(char *)((long)param_3 + 0xd) = *(char *)((long)param_3 + 0xd) + '\x01';
        }
        if (local_2de != 0) {
          *(char *)((long)param_3 + 0xd) = *(char *)((long)param_3 + 0xd) + '\x01';
        }
        uVar7 = 0;
        if (local_2da != 0) {
          *(char *)((long)param_3 + 0xd) = *(char *)((long)param_3 + 0xd) + '\x01';
        }
        break;
      case 3:
      case 5:
        uVar7 = 0;
        *(undefined4 *)(param_3 + 6) = local_2f0;
        break;
      case 4:
        FUN_011b5b80(param_3,&local_2f0);
        uVar7 = 0;
        break;
      default:
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 0x80000001;
    }
  }
  return uVar7;
}


