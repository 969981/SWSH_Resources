/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0050b260; name: FUN_0050b260
 */


/* WARNING: Removing unreachable block (ram,0x0050b2d8) */

undefined8
FUN_0050b260(long param_1,long param_2,undefined4 param_3,undefined8 param_4,int *param_5,
            long param_6,int param_7)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  
  *(uint *)(param_6 + 0x58) =
       *(int *)(param_6 + 0x58) +
       ((*(byte *)(param_1 + 0x1b) + 1) * (uint)*(ushort *)((long)param_5 + 10) + -2) * param_5[10];
  uVar4 = *(ushort *)((long)param_5 + 10);
  uVar9 = (ulong)uVar4;
  if (uVar9 == 0) {
    iVar14 = 0x100;
    goto LAB_0050b33c;
  }
  if (uVar4 == 1) {
    lVar10 = 0;
    uVar8 = 0xff;
LAB_0050b324:
    bVar11 = *(byte *)(param_2 + lVar10);
    uVar2 = (uint)bVar11;
    if (uVar8 <= bVar11 || bVar11 == 0) {
      uVar2 = uVar8;
    }
    uVar8 = uVar2;
  }
  else {
    lVar10 = 0;
    uVar8 = 0xff;
    do {
      pbVar1 = (byte *)(param_2 + lVar10);
      lVar10 = lVar10 + 2;
      bVar11 = *pbVar1;
      bVar3 = pbVar1[1];
      uVar2 = (uint)bVar11;
      if (uVar8 <= bVar11 || bVar11 == 0) {
        uVar2 = uVar8;
      }
      uVar8 = (uint)bVar3;
      if (uVar2 <= bVar3 || bVar3 == 0) {
        uVar8 = uVar2;
      }
    } while (uVar9 - (uVar9 & 1) != lVar10);
    if ((uVar4 & 1) != 0) goto LAB_0050b324;
  }
  iVar14 = uVar8 + 1;
LAB_0050b33c:
  do {
    iVar14 = iVar14 + 1;
    iVar6 = FUN_005099f0(param_1,param_2,param_3,param_4,param_5,param_6,iVar14);
  } while (iVar6 == 1);
  if (iVar6 == 2) {
    uVar7 = 0xffffff75;
  }
  else {
    if ((param_5[9] == 1) && (*(char *)(*(long *)(param_1 + 0x10) + 0x50) != '\0')) {
      iVar14 = param_5[3];
      uVar8 = 0x18U - param_5[1] & 0x1f;
      uVar2 = -iVar14 - 8U & 0x1f;
      *(int *)(*(long *)(param_1 + 0x10) + 0x34) =
           *param_5 << (ulong)(0x20 - uVar8 & 0x1f) | *param_5 >> uVar8;
      *(int *)(*(long *)(param_1 + 0x10) + 0x38) =
           (1 << (ulong)(*(byte *)(*(long *)(param_1 + 0x10) + 0x50) & 0x1f)) + -1;
      iVar6 = *(int *)(*(long *)(param_1 + 0x10) + 0x40);
      *(int *)(*(long *)(param_1 + 0x10) + 0x3c) =
           iVar6 << (ulong)(0x20 - uVar2 & 0x1f) | iVar6 >> uVar2;
      lVar10 = 0;
      do {
        uVar8 = (uint)lVar10;
        lVar10 = lVar10 + 1;
      } while (1 << (ulong)(uVar8 & 0x1f) != (uint)*(byte *)(param_1 + 0x1a));
      *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48) =
           *(undefined8 *)
            (((long)param_7 + -1) * 0x20 + (ulong)*(byte *)(param_1 + 0x1b) * 0x40 + lVar10 * 8 +
            0x25f8928);
      bVar11 = *(byte *)(param_1 + 0x1a);
      if ((bVar11 < 9) && ((1 << (ulong)(bVar11 & 0x1f) & 0x114U) != 0)) {
        puVar12 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = *(undefined4 *)((long)puVar12 + 0x34);
        puVar12[1] = CONCAT44(uVar5,uVar5);
        *puVar12 = CONCAT44(uVar5,uVar5);
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10) =
             *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x38);
        lVar13 = *(long *)(param_1 + 0x10);
        *(int *)(lVar13 + 0x14) =
             *(int *)(lVar13 + 0x38) << (ulong)(*(byte *)(lVar13 + 0x50) & 0x1f);
        lVar13 = *(long *)(param_1 + 0x10);
        *(int *)(lVar13 + 0x18) =
             *(int *)(lVar13 + 0x38) << (ulong)((*(byte *)(lVar13 + 0x50) & 0xf) << 1);
        lVar13 = *(long *)(param_1 + 0x10);
        *(int *)(lVar13 + 0x1c) =
             *(int *)(lVar13 + 0x38) << (ulong)((uint)*(byte *)(lVar13 + 0x50) * 3 & 0x1f);
        bVar11 = *(byte *)(param_1 + 0x1a);
      }
      if (bVar11 == 8) {
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x20) =
             *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x3c);
        lVar13 = *(long *)(param_1 + 0x10);
        *(int *)(lVar13 + 0x24) = *(int *)(lVar13 + 0x3c) >> (*(byte *)(lVar13 + 0x50) & 0x1f);
        lVar13 = *(long *)(param_1 + 0x10);
        *(int *)(lVar13 + 0x28) = *(int *)(lVar13 + 0x3c) >> ((*(byte *)(lVar13 + 0x50) & 0xf) << 1)
        ;
        lVar13 = *(long *)(param_1 + 0x10);
        *(int *)(lVar13 + 0x2c) =
             *(int *)(lVar13 + 0x3c) >> ((uint)*(byte *)(lVar13 + 0x50) * 3 & 0x1f);
        bVar11 = *(byte *)(param_1 + 0x1a);
      }
      if ((bVar11 == 4) || (bVar11 == 2)) {
        lVar13 = *(long *)(param_1 + 0x10);
        uVar8 = (uint)*(byte *)(lVar13 + 0x50) * -3 - param_5[3];
        iVar14 = (-iVar14 - 8U) - uVar8;
        if (iVar14 < 1) {
          *(undefined4 *)(lVar13 + 0x30) = 0;
          uVar8 = *(uint *)(lVar13 + 0x3c);
          lVar13 = *(long *)(param_1 + 0x10);
        }
        else {
          *(int *)(lVar13 + 0x30) = iVar14;
          lVar13 = *(long *)(param_1 + 0x10);
          uVar8 = *(int *)(lVar13 + 0x40) >> (uVar8 & 0x1f);
        }
        *(uint *)(lVar13 + 0x20) = uVar8;
        *(uint *)(*(long *)(param_1 + 0x10) + 0x24) =
             uVar8 >> (ulong)(*(byte *)(*(long *)(param_1 + 0x10) + 0x50) & 0x1f);
        *(uint *)(*(long *)(param_1 + 0x10) + 0x28) =
             uVar8 >> (ulong)((*(byte *)(*(long *)(param_1 + 0x10) + 0x50) & 0xf) << 1);
        *(uint *)(*(long *)(param_1 + 0x10) + 0x2c) =
             uVar8 >> (ulong)((uint)*(byte *)(*(long *)(param_1 + 0x10) + 0x50) * 3 & 0x1f);
        if (0xffff < ((1 << (ulong)(*(byte *)(*(long *)(param_1 + 0x10) + 0x50) & 0x1f)) + -1) *
                     uVar8) {
          *(undefined **)(*(long *)(param_1 + 0x10) + 0x48) =
               (&PTR_LAB_025f89a8)
               [lVar10 + (ulong)*(byte *)(param_1 + 0x1b) * 8 + ((long)param_7 + -1) * 4];
          return 0;
        }
      }
    }
    uVar7 = 0;
  }
  return uVar7;
}


