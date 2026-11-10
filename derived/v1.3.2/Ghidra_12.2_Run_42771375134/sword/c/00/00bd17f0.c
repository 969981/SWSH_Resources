/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd17f0; name: FUN_00bd17f0
 */


void FUN_00bd17f0(undefined1 param_1 [16],float param_2,long param_3,int param_4,uint param_5,
                 uint param_6,uint param_7,uint param_8,int param_9)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  
  if (param_4 == 1) {
    uStack_88 = *(undefined8 *)(param_3 + 0x2fa8);
    local_90 = *(undefined8 *)(param_3 + 0x2fb0);
    local_78 = uStack_88;
    fVar11 = (float)FUN_0167b720(*(undefined8 *)(param_3 + 0x58),&local_78);
    fVar13 = param_2;
    fVar12 = (float)FUN_0167b720(*(undefined8 *)(param_3 + 0x58),&uStack_88);
    FUN_0167b720(*(undefined8 *)(param_3 + 0x58),&local_90);
    bVar5 = param_8 != 1;
    fVar12 = fVar12 - fVar11;
    fVar13 = fVar13 - param_2;
    iVar8 = 6;
    if (param_6 != 0 || bVar5) {
      param_8 = 1;
    }
    uVar10 = 0;
    if (param_6 == 0 && !bVar5) {
      uVar10 = param_6;
    }
    uVar7 = 0;
    if (param_7 < 7) {
      uVar7 = param_7;
    }
    bVar4 = 5 < uVar7 + param_9;
    bVar5 = uVar7 + param_9 == 6;
  }
  else {
    if (param_4 != 0) {
      return;
    }
    local_78 = *(undefined8 *)(param_3 + 0x2dc8);
    uStack_88 = *(undefined8 *)(param_3 + 0x2dd0);
    local_90 = *(undefined8 *)(param_3 + 0x2df8);
    fVar11 = (float)FUN_0167b720(*(undefined8 *)(param_3 + 0x58),&local_78);
    fVar13 = param_2;
    fVar12 = (float)FUN_0167b720(*(undefined8 *)(param_3 + 0x58),&uStack_88);
    FUN_0167b720(*(undefined8 *)(param_3 + 0x58),&local_90);
    uVar10 = 0;
    if (param_6 < 7) {
      uVar10 = param_6;
    }
    uVar3 = 6 - uVar10;
    if (uVar10 + param_8 < 7) {
      uVar3 = param_8;
    }
    uVar7 = 0;
    if (param_7 < 6) {
      uVar7 = param_7;
    }
    bVar4 = 4 < uVar7 + param_9;
    bVar5 = uVar7 + param_9 == 5;
    fVar12 = fVar12 - fVar11;
    fVar13 = fVar13 - param_2;
    iVar8 = 5;
    param_8 = uVar3;
  }
  iVar8 = iVar8 - uVar7;
  if (!bVar4 || bVar5) {
    iVar8 = param_9;
  }
  *(int *)(param_3 + 0x3008) = param_4;
  *(uint *)(param_3 + 0x300c) =
       iVar8 << 0x1a | (param_8 & 0x3f) << 0x14 | (uVar7 & 0x3f) << 0xe |
       param_5 & 0xff | (uVar10 & 0x3f) << 8;
  FUN_00bd1a80(param_3,0);
  iVar9 = iVar8 + -1;
  *(undefined4 *)(param_3 + 0x30a0) = 0;
  if ((-1 < iVar9) && (-1 < (int)(param_8 - 1))) {
    uVar10 = iVar8 * param_8 - 1;
    do {
      uVar7 = uVar10;
      iVar8 = param_8 - 1;
      do {
        lVar1 = param_3 + (ulong)uVar7;
        lVar2 = param_3 + 0x68;
        FUN_0167c250(*(undefined8 *)(param_3 + 0x58),lVar2 + (ulong)*(byte *)(lVar1 + 0x2d86) * 0x78
                    );
        local_78 = 0x26c7d6c10402e197;
        FUN_0167c0b0(*(undefined8 *)(param_3 + 0x58),&local_78,
                     lVar2 + (ulong)*(byte *)(lVar1 + 0x2d86) * 0x78);
        local_78 = CONCAT44(fVar13 * (float)iVar9,fVar12 * (float)iVar8);
        FUN_0167b630(*(undefined8 *)(param_3 + 0x58),lVar2 + (ulong)*(byte *)(lVar1 + 0x2d86) * 0x78
                     ,&local_78);
        uVar6 = FUN_0167b9f0(*(undefined8 *)(param_3 + 0x58),
                             lVar2 + (ulong)*(byte *)(lVar1 + 0x2d86) * 0x78);
        if ((uVar6 & 1) != 0) {
          *(uint *)(param_3 + 0x30a0) = *(uint *)(param_3 + 0x30a0) | 1 << (ulong)(uVar7 & 0x1f);
        }
        iVar8 = iVar8 + -1;
        uVar7 = uVar7 - 1;
      } while (-1 < iVar8);
      iVar9 = iVar9 + -1;
      uVar10 = uVar10 - param_8;
    } while (-1 < iVar9);
  }
  return;
}


