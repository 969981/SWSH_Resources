/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ea9a0; name: FUN_004ea9a0
 */


void FUN_004ea9a0(undefined8 param_1,float param_2,ulong param_3,long param_4,undefined4 param_5,
                 uint param_6,ulong *param_7,long *param_8)

{
  int iVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  param_7[param_6] = param_3;
  if (*(int *)(param_3 + 0x80) == *(int *)(param_4 + 100)) {
    iVar6 = *(int *)(param_3 + 0x78) + -1;
    uVar8 = *param_7;
    lVar5 = *(long *)(param_3 + 0x70);
    iVar3 = 0;
    if (-1 < iVar6) {
      do {
        while( true ) {
          iVar1 = iVar6 - iVar3;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar3 + (iVar1 >> 1);
          uVar7 = *(ulong *)(lVar5 + (long)iVar1 * 0x110);
          if (uVar8 > uVar7 || uVar7 == uVar8) break;
          iVar6 = iVar1 + -1;
          if (iVar6 < iVar3) goto LAB_004eaa6c;
        }
        if (uVar8 <= uVar7) {
          puVar2 = (ulong *)(lVar5 + (long)iVar1 * 0x110);
          if (puVar2 != (ulong *)0x0) goto LAB_004eaa98;
          goto LAB_004eacb4;
        }
        iVar3 = iVar1 + 1;
      } while (iVar3 <= iVar6);
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x78) = 0;
    *(undefined4 *)(param_3 + 0x80) = *(undefined4 *)(param_4 + 100);
    uVar8 = *param_7;
    lVar5 = *(long *)(param_3 + 0x70);
    iVar3 = 0;
  }
LAB_004eaa6c:
  if ((lVar5 == 0) || (lVar5 + (long)iVar3 * 0x110 == 0)) {
    puVar2 = (ulong *)FUN_004ea5c0(param_3 + 0x70);
  }
  else {
    puVar2 = (ulong *)FUN_004ea440();
  }
  if (puVar2 != (ulong *)0x0) {
    *puVar2 = uVar8;
LAB_004eaa98:
    if ((float)param_1 < *(float *)((long)puVar2 + 0x104)) {
      *(uint *)(puVar2 + 0x20) = param_6 + 1;
      uVar4 = 8;
      if (param_6 + 1 < 8) {
        uVar4 = param_6 + 1;
      }
      *(float *)((long)puVar2 + 0x104) = (float)param_1;
      *(float *)(puVar2 + 0x21) = param_2;
      if (uVar4 != 0) {
        *puVar2 = *param_7;
        lVar5 = *param_8;
        puVar2[8] = *(ulong *)(lVar5 + 0x38);
        *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(lVar5 + 0x48);
        *(undefined4 *)((long)puVar2 + 0x4c) = *(undefined4 *)(lVar5 + 0x4c);
        *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(lVar5 + 0x54);
        *(undefined4 *)((long)puVar2 + 0x54) = *(undefined4 *)(lVar5 + 0x58);
        if (1 < uVar4) {
          puVar2[1] = param_7[1];
          lVar5 = param_8[1];
          puVar2[0xb] = *(ulong *)(lVar5 + 0x38);
          *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(lVar5 + 0x48);
          *(undefined4 *)((long)puVar2 + 100) = *(undefined4 *)(lVar5 + 0x4c);
          *(undefined4 *)(puVar2 + 0xd) = *(undefined4 *)(lVar5 + 0x54);
          *(undefined4 *)((long)puVar2 + 0x6c) = *(undefined4 *)(lVar5 + 0x58);
          if (uVar4 != 2) {
            puVar2[2] = param_7[2];
            lVar5 = param_8[2];
            puVar2[0xe] = *(ulong *)(lVar5 + 0x38);
            *(undefined4 *)(puVar2 + 0xf) = *(undefined4 *)(lVar5 + 0x48);
            *(undefined4 *)((long)puVar2 + 0x7c) = *(undefined4 *)(lVar5 + 0x4c);
            *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(lVar5 + 0x54);
            *(undefined4 *)((long)puVar2 + 0x84) = *(undefined4 *)(lVar5 + 0x58);
            if (3 < uVar4) {
              puVar2[3] = param_7[3];
              lVar5 = param_8[3];
              puVar2[0x11] = *(ulong *)(lVar5 + 0x38);
              *(undefined4 *)(puVar2 + 0x12) = *(undefined4 *)(lVar5 + 0x48);
              *(undefined4 *)((long)puVar2 + 0x94) = *(undefined4 *)(lVar5 + 0x4c);
              *(undefined4 *)(puVar2 + 0x13) = *(undefined4 *)(lVar5 + 0x54);
              *(undefined4 *)((long)puVar2 + 0x9c) = *(undefined4 *)(lVar5 + 0x58);
              if (uVar4 != 4) {
                puVar2[4] = param_7[4];
                lVar5 = param_8[4];
                puVar2[0x14] = *(ulong *)(lVar5 + 0x38);
                *(undefined4 *)(puVar2 + 0x15) = *(undefined4 *)(lVar5 + 0x48);
                *(undefined4 *)((long)puVar2 + 0xac) = *(undefined4 *)(lVar5 + 0x4c);
                *(undefined4 *)(puVar2 + 0x16) = *(undefined4 *)(lVar5 + 0x54);
                *(undefined4 *)((long)puVar2 + 0xb4) = *(undefined4 *)(lVar5 + 0x58);
                if (5 < uVar4) {
                  puVar2[5] = param_7[5];
                  lVar5 = param_8[5];
                  puVar2[0x17] = *(ulong *)(lVar5 + 0x38);
                  *(undefined4 *)(puVar2 + 0x18) = *(undefined4 *)(lVar5 + 0x48);
                  *(undefined4 *)((long)puVar2 + 0xc4) = *(undefined4 *)(lVar5 + 0x4c);
                  *(undefined4 *)(puVar2 + 0x19) = *(undefined4 *)(lVar5 + 0x54);
                  *(undefined4 *)((long)puVar2 + 0xcc) = *(undefined4 *)(lVar5 + 0x58);
                  if (uVar4 != 6) {
                    puVar2[6] = param_7[6];
                    lVar5 = param_8[6];
                    puVar2[0x1a] = *(ulong *)(lVar5 + 0x38);
                    *(undefined4 *)(puVar2 + 0x1b) = *(undefined4 *)(lVar5 + 0x48);
                    *(undefined4 *)((long)puVar2 + 0xdc) = *(undefined4 *)(lVar5 + 0x4c);
                    *(undefined4 *)(puVar2 + 0x1c) = *(undefined4 *)(lVar5 + 0x54);
                    *(undefined4 *)((long)puVar2 + 0xe4) = *(undefined4 *)(lVar5 + 0x58);
                    if (7 < uVar4) {
                      puVar2[7] = param_7[7];
                      lVar5 = param_8[7];
                      puVar2[0x1d] = *(ulong *)(lVar5 + 0x38);
                      *(undefined4 *)(puVar2 + 0x1e) = *(undefined4 *)(lVar5 + 0x48);
                      *(undefined4 *)((long)puVar2 + 0xf4) = *(undefined4 *)(lVar5 + 0x4c);
                      *(undefined4 *)(puVar2 + 0x1f) = *(undefined4 *)(lVar5 + 0x54);
                      *(undefined4 *)((long)puVar2 + 0xfc) = *(undefined4 *)(lVar5 + 0x58);
                      uVar4 = *(uint *)(param_3 + 0x30);
                      goto joined_r0x004eacb8;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_004eacb4:
  uVar4 = *(uint *)(param_3 + 0x30);
joined_r0x004eacb8:
  if (uVar4 != 0) {
    uVar8 = (ulong)uVar4;
    plVar9 = *(long **)(param_3 + 0x28);
    param_6 = param_6 + 1;
    if (param_6 == 0) {
      do {
        plVar10 = plVar9 + 1;
        FUN_004e8c60(param_1,*(float *)(param_3 + 0x84) * param_2,*plVar9,param_4,param_5,0,param_7,
                     param_8);
        plVar9 = plVar10;
      } while (plVar10 != (long *)(*(long *)(param_3 + 0x28) + (ulong)*(uint *)(param_3 + 0x30) * 8)
              );
    }
    else {
      plVar10 = plVar9;
      do {
        uVar7 = 0;
        do {
          if (param_8[uVar7] == *plVar10) goto LAB_004ead18;
          uVar4 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar4;
        } while (uVar4 < param_6);
        FUN_004e8c60(param_1,*(float *)(param_3 + 0x84) * param_2,*plVar10,param_4,param_5,param_6,
                     param_7,param_8);
        plVar9 = *(long **)(param_3 + 0x28);
        uVar8 = (ulong)*(uint *)(param_3 + 0x30);
LAB_004ead18:
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar9 + uVar8);
    }
  }
  return;
}


