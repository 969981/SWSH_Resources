/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c6330; name: FUN_014c6330
 */


void FUN_014c6330(long param_1,undefined8 param_2)

{
  int iVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  short *psVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  long local_78;
  long local_70;
  undefined4 local_68;
  
  psVar8 = (short *)FUN_0077d470(param_2);
  sVar2 = *psVar8;
  iVar14 = 0;
  bVar4 = false;
  do {
    while( true ) {
      while (sVar2 != 0x10) {
        if (sVar2 == 0) {
          return;
        }
        psVar8 = psVar8 + 1;
        sVar2 = *psVar8;
      }
      uVar9 = FUN_014bf120(psVar8);
      if ((uVar9 & 1) != 0) break;
      uVar9 = FUN_014bedc0(psVar8);
      if ((uVar9 & 1) == 0) {
        uVar9 = FUN_014bee20(psVar8);
        if ((uVar9 & 1) != 0) {
          uVar7 = FUN_0077dba0(psVar8,0);
          uVar9 = (ulong)(uVar7 & 0xffff);
          if (iVar14 == 0) {
            lVar13 = *(long *)(param_1 + 0x200);
            bVar4 = *(int *)(lVar13 + uVar9 * 8 + 4) != 0;
          }
          else {
            lVar13 = *(long *)(param_1 + 0x200);
          }
          uVar11 = *(undefined4 *)(lVar13 + uVar9 * 8);
          uVar12 = 1;
          goto LAB_014c6700;
        }
        uVar9 = FUN_014bee80(psVar8);
        if ((uVar9 & 1) != 0) {
          uVar7 = FUN_0077dba0(psVar8,0);
          uVar9 = (ulong)(uVar7 & 0xffff);
          if (iVar14 == 0) {
            lVar13 = *(long *)(param_1 + 0x200);
            bVar4 = *(int *)(lVar13 + uVar9 * 8 + 4) != 0;
          }
          else {
            lVar13 = *(long *)(param_1 + 0x200);
          }
          uVar11 = *(undefined4 *)(lVar13 + uVar9 * 8);
          uVar12 = 2;
          goto LAB_014c6700;
        }
        uVar9 = FUN_014beee0(psVar8);
        if ((uVar9 & 1) != 0) {
          uVar7 = FUN_0077dba0(psVar8,0);
          uVar9 = (ulong)(uVar7 & 0xffff);
          if (iVar14 == 0) {
            lVar13 = *(long *)(param_1 + 0x200);
            bVar4 = *(int *)(lVar13 + uVar9 * 8 + 4) != 0;
          }
          else {
            lVar13 = *(long *)(param_1 + 0x200);
          }
          uVar11 = *(undefined4 *)(lVar13 + uVar9 * 8);
          uVar12 = 3;
          goto LAB_014c6700;
        }
        uVar9 = FUN_014befd0(psVar8);
        if ((uVar9 & 1) != 0) {
          uVar9 = FUN_0077dba0(psVar8,0);
          uVar9 = uVar9 & 0xffff;
          if ((*(byte *)(*(long *)(param_1 + 0x1a0) + uVar9 * 0x18 + 0x12) & 1) != 0) {
            uVar11 = *(undefined4 *)(*(long *)(param_1 + 0x200) + uVar9 * 8);
            local_b0 = 0xdf8732707c30506e;
            pcStack_a8 = "common/place_name_indirect.dat";
            local_a0 = 0x1e;
            local_98 = 0;
            FUN_014bfd20(&local_90,&local_b0,10);
            uVar10 = FUN_014c7640(param_1,*(undefined8 *)(param_1 + 0x170),&local_90,uVar11);
            if ((uint)uVar9 < *(uint *)(param_1 + 0x198)) {
              uVar12 = *(undefined8 *)(param_1 + 0x170);
              lVar13 = uVar9 * 0x18;
              *(ulong *)(*(long *)(param_1 + 0x1a0) + lVar13 + 8) = uVar10 & 0xffff | 0x20000;
              FUN_0077d4d0(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + lVar13),uVar12);
              *(undefined2 *)(*(long *)(param_1 + 0x1a0) + lVar13 + 0x10) = 0;
              lVar13 = *(long *)(param_1 + 0x1a0) + lVar13;
              *(ushort *)(lVar13 + 0x12) = *(ushort *)(lVar13 + 0x12) & 0xfffe;
            }
            if ((local_78 != 0) && (local_90 != 0)) {
              (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
            }
            local_90 = 0;
            uStack_88 = 0xcbf29ce484222645;
            local_80 = &DAT_01d38550;
            local_78 = 0;
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            }
            local_70 = 0;
            local_68 = 0;
            if (local_98 != 0) {
              (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
              local_98 = 0;
            }
          }
          goto LAB_014c6704;
        }
        uVar9 = FUN_014bf030(psVar8);
        psVar8 = (short *)FUN_0077db30(psVar8);
        bVar5 = (uVar9 & 1) == 0;
        bVar3 = false;
        if (bVar5) {
          bVar3 = bVar4;
        }
        iVar1 = 0;
        if (bVar5) {
          iVar1 = iVar14;
        }
        sVar2 = *psVar8;
        iVar14 = iVar1;
        bVar4 = bVar3;
      }
      else {
        uVar7 = FUN_0077dba0(psVar8,0);
        uVar9 = (ulong)(uVar7 & 0xffff);
        if (iVar14 == 0) {
          lVar13 = *(long *)(param_1 + 0x200);
          bVar4 = *(int *)(lVar13 + uVar9 * 8 + 4) != 0;
        }
        else {
          lVar13 = *(long *)(param_1 + 0x200);
        }
        uVar11 = *(undefined4 *)(lVar13 + uVar9 * 8);
        uVar12 = 0;
LAB_014c6700:
        FUN_014c99a0(param_1,uVar9,uVar11,bVar4,uVar12);
LAB_014c6704:
        psVar8 = (short *)FUN_0077db30(psVar8);
        bVar4 = false;
        iVar14 = 0;
        sVar2 = *psVar8;
      }
    }
    cVar6 = FUN_014bed40(psVar8);
    if (cVar6 == '\x01') {
      bVar4 = true;
LAB_014c6458:
      iVar14 = 0x1c;
    }
    else if (cVar6 == '\0') {
      bVar4 = false;
      goto LAB_014c6458;
    }
    psVar8 = (short *)FUN_0077db30(psVar8);
    sVar2 = *psVar8;
  } while( true );
}


