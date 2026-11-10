/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d06a0; name: FUN_004d06a0
 */


void FUN_004d06a0(float param_1,long *param_2,long param_3,uint param_4,uint param_5,
                 undefined1 *param_6,byte *param_7,long param_8)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_78 [4];
  undefined1 local_74 [4];
  
  bVar4 = (**(code **)(*param_2 + 0x80))(param_2,local_74,auStack_78);
  *param_7 = bVar4 & 1;
  if ((bVar4 & 1) != 0) {
    if ((param_4 & 0xff) != 0) {
      lVar7 = param_2[9];
      if (lVar7 != 0) {
        fVar8 = *(float *)(param_2 + 7);
        uVar2 = param_4 & 0xff;
        plVar1 = param_2 + 5;
LAB_004d07a4:
        do {
          if ((~*(byte *)(lVar7 + 0x2a4) & 3) != 0) {
            uVar5 = FUN_004699c0(lVar7);
            if (uVar2 == *(uint *)(lVar7 + 0x29c)) {
LAB_004d07c8:
              if (*(long *)(lVar7 + 0x20) != 0) {
                uVar3 = *(undefined8 *)(lVar7 + 0x30);
                *(uint *)(lVar7 + 0x29c) = uVar2;
                *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar7 + 0x38);
                *(undefined8 *)(lVar7 + 0x38) = uVar3;
              }
              fVar9 = 0.0;
              if ((*(byte *)(lVar7 + 0x2a4) & 1) == 0) {
                fVar9 = fVar8 * param_1 * *(float *)(lVar7 + 0x290);
              }
              *(float *)(lVar7 + 0x14) = fVar9;
              if ((int)param_2[6] != 0) {
                if ((*(ushort *)(param_3 + 0x154) & 3) == 0) {
                  if ((*(ushort *)(param_3 + 0x154) >> 4 & 1) == 0) {
                    bVar4 = *(byte *)(param_2 + 0xc) >> 1 & 1;
                  }
                  else {
                    bVar4 = 1;
                  }
                  FUN_0042c4c0(param_3,plVar1,param_4,bVar4,lVar7);
                }
                else {
                  FUN_0042e020(param_3,plVar1,param_4,lVar7);
                  FUN_0042cb90(param_3,plVar1,param_4,lVar7);
                }
              }
              if (param_8 != 0) {
                FUN_0042e320(param_8,lVar7);
              }
              if ((*(byte *)(lVar7 + 0x2a4) >> 1 & 1) != 0) {
                iVar6 = *(int *)(lVar7 + 0x29c);
                uVar5 = FUN_004699c0(lVar7);
                uVar5 = ((uVar5 & 0xff) + 3 & 0x1fc) * iVar6;
                if (uVar5 != 0) {
                  memcpy(*(void **)(lVar7 + 0x38),*(void **)(lVar7 + 0x30),(ulong)uVar5 << 2);
                }
LAB_004d0764:
                *(undefined4 *)(lVar7 + 0x10) = 0;
                lVar7 = *(long *)(lVar7 + 0x40);
                if (lVar7 == 0) break;
                goto LAB_004d07a4;
              }
              if ((*(byte *)(param_2 + 0xc) >> 2 & 1) == 0) {
                iVar6 = *(int *)(lVar7 + 0x29c);
                uVar5 = FUN_004699c0(lVar7);
                uVar5 = ((uVar5 & 0xff) + 3 & 0x1fc) * iVar6;
                if (uVar5 != 0) {
                  memcpy(*(void **)(lVar7 + 0x38),*(void **)(lVar7 + 0x30),(ulong)uVar5 << 2);
                }
                *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar7 + 0x14);
                *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(lVar7 + 0x1c);
                if ((param_5 & 1) != 0) goto LAB_004d0764;
              }
            }
            else {
              FUN_0046a690(lVar7 + 0x20);
              *(undefined4 *)(lVar7 + 0x29c) = 0;
              iVar6 = FUN_0046a5e0(lVar7 + 0x20,uVar2,uVar5 & 0xff);
              if (iVar6 == 1) {
                iVar6 = ((uVar5 & 0xff) + 3 & 0x1fc) * uVar2;
                if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                  memset(*(void **)(lVar7 + 0x38),0,(ulong)(uint)(iVar6 * 4));
                }
                FUN_004cd520(lVar7 + 0xf0);
                iVar6 = FUN_004cd3e0(lVar7 + 0xf0,param_4);
                if (iVar6 == 1) goto LAB_004d07c8;
              }
            }
          }
          lVar7 = *(long *)(lVar7 + 0x40);
        } while (lVar7 != 0);
      }
      *(undefined8 *)(param_3 + 0x120) = *(undefined8 *)(param_3 + 0x110);
      *(undefined8 *)(param_3 + 0x128) = *(undefined8 *)(param_3 + 0x118);
    }
    *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) & 0xfd;
    *(ushort *)(param_3 + 0x154) = *(ushort *)(param_3 + 0x154) & 0xffef;
  }
  *param_6 = local_74[0];
  return;
}


