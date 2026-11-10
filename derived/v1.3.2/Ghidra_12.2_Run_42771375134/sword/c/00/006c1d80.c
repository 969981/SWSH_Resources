/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c1d80; name: FUN_006c1d80
 */


void FUN_006c1d80(long *param_1,long param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  uint *puVar16;
  int local_a0;
  undefined1 local_9c [4];
  long local_98;
  long local_90;
  long local_88;
  ulong local_80;
  char *pcStack_78;
  size_t local_70;
  long local_68;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar15 = param_1 + 2;
  *plVar15 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_0075ecb0();
  }
  param_1[5] = lVar6;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  if (((*param_1 != 0) && (piVar7 = (int *)param_1[1], piVar7 != (int *)0x0)) &&
     ((4 < *(ushort *)((long)piVar7 - (long)*piVar7) &&
      ((uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar9 != 0 &&
       (puVar1 = (uint *)((long)piVar7 + uVar9), puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1),
       *puVar1 != 0)))))) {
    FUN_006c22b0(plVar15);
    local_88 = *(long *)(*param_1 + 0x350);
    puVar16 = puVar1 + 1;
    if ((ulong)*puVar1 != 0) {
      puVar1 = puVar16 + *puVar1;
      do {
        lVar6 = local_88;
        piVar7 = (int *)((long)puVar16 + (ulong)*puVar16);
        if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
           (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar9 == 0)) {
          lVar11 = 0;
        }
        else {
          puVar2 = (uint *)((long)piVar7 + uVar9);
          lVar11 = (long)puVar2 + (ulong)*puVar2;
        }
        local_70 = strlen((char *)(lVar11 + 4));
        bVar3 = *(byte *)(lVar11 + 4);
        local_80 = 0xcbf29ce484222645;
        if (bVar3 != 0) {
          local_80 = 0xcbf29ce484222645;
          pbVar10 = (byte *)(lVar11 + 5);
          do {
            local_80 = (local_80 ^ bVar3) * 0x100000001b3;
            bVar3 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar3 != 0);
        }
        local_68 = 0;
        pcStack_78 = (char *)(lVar11 + 4);
        iVar5 = FUN_00722fb0(lVar6,&local_80);
        if (iVar5 < 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)(lVar6 + 0x1b8) + (long)iVar5 * 0x130;
        }
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
        lVar11 = local_88;
        if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 9) ||
           (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[4], uVar9 == 0)) {
          lVar14 = 0;
        }
        else {
          puVar2 = (uint *)((long)piVar7 + uVar9);
          lVar14 = (long)puVar2 + (ulong)*puVar2;
        }
        local_90 = lVar6;
        local_70 = strlen((char *)(lVar14 + 4));
        bVar3 = *(byte *)(lVar14 + 4);
        local_80 = 0xcbf29ce484222645;
        if (bVar3 != 0) {
          local_80 = 0xcbf29ce484222645;
          pbVar10 = (byte *)(lVar14 + 5);
          do {
            local_80 = (local_80 ^ bVar3) * 0x100000001b3;
            bVar3 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar3 != 0);
        }
        local_68 = 0;
        pcStack_78 = (char *)(lVar14 + 4);
        iVar5 = FUN_00722fb0(lVar11,&local_80);
        if (iVar5 < 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)(lVar11 + 0x1b8) + (long)iVar5 * 0x130;
        }
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
        lVar11 = local_88;
        if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
           (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar9 == 0)) {
          lVar14 = 0;
        }
        else {
          puVar2 = (uint *)((long)piVar7 + uVar9);
          lVar14 = (long)puVar2 + (ulong)*puVar2;
        }
        local_98 = lVar6;
        local_70 = strlen((char *)(lVar14 + 4));
        bVar3 = *(byte *)(lVar14 + 4);
        local_80 = 0xcbf29ce484222645;
        if (bVar3 != 0) {
          local_80 = 0xcbf29ce484222645;
          pbVar10 = (byte *)(lVar14 + 5);
          do {
            local_80 = (local_80 ^ bVar3) * 0x100000001b3;
            bVar3 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar3 != 0);
        }
        local_68 = 0;
        pcStack_78 = (char *)(lVar14 + 4);
        iVar5 = FUN_00722fb0(lVar11,&local_80);
        if (iVar5 < 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(long *)(lVar11 + 0x1b8) + (long)iVar5 * 0x130;
        }
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
        if (*(ushort *)((long)piVar7 - (long)*piVar7) < 0xd) {
          local_9c[0] = false;
        }
        else {
          uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[6];
          local_9c[0] = false;
          if (uVar8 != 0) {
            local_9c[0] = *(char *)((long)piVar7 + uVar8) != '\0';
          }
        }
        lVar6 = *(long *)(local_88 + 0x1b8);
        local_a0 = *(int *)(*(long *)(local_90 + 0x128) + 0x40);
        lVar14 = (long)local_a0;
        lVar11 = (long)((int)((ulong)(*(long *)(local_88 + 0x1c0) - lVar6) >> 4) * 0x286bca1b);
        local_80 = uVar9;
        if ((lVar14 + 1 < lVar11) &&
           (local_a0 <= *(int *)(*(long *)(lVar6 + (lVar14 + 1) * 0x130 + 0x128) + 0x44))) {
          lVar12 = 0;
          plVar13 = (long *)(lVar6 + lVar14 * 0x130 + 0x388);
          do {
            if (lVar11 <= lVar14 + 2 + lVar12) {
              local_a0 = local_a0 + (int)lVar12 + 1;
              uVar9 = param_1[3];
              if ((ulong)param_1[4] <= uVar9) goto LAB_006c2204;
              goto LAB_006c2150;
            }
            lVar6 = *plVar13;
            plVar13 = plVar13 + 0x26;
            lVar12 = lVar12 + 1;
          } while (local_a0 <= *(int *)(lVar6 + 0x44));
          local_a0 = local_a0 + (int)lVar12;
        }
        uVar9 = param_1[3];
        if (uVar9 < (ulong)param_1[4]) {
LAB_006c2150:
          lVar11 = param_1[5];
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar11;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          FUN_006c2730(uVar9,local_88,local_a0,local_90,local_98,local_80,local_9c[0]);
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          param_1[3] = param_1[3] + 0x50;
        }
        else {
LAB_006c2204:
          FUN_006c24c0(plVar15,&local_88,&local_a0,&local_90,&local_98,&local_80,local_9c);
        }
        puVar2 = (uint *)((long)piVar7 + (ulong)*(ushort *)((long)piVar7 + (6 - (long)*piVar7)));
        cVar4 = *(char *)((long)puVar2 + (ulong)*puVar2 + 4);
        if (cVar4 == 'R') {
          lVar6 = param_1[2];
          lVar11 = param_1[3] - lVar6;
          plVar13 = param_1 + 9;
LAB_006c226c:
          *plVar13 = lVar6 + lVar11 + -0x50;
        }
        else if (cVar4 == 'L') {
          lVar6 = param_1[2];
          lVar11 = param_1[3] - lVar6;
          plVar13 = param_1 + 8;
          goto LAB_006c226c;
        }
        puVar16 = puVar16 + 1;
      } while (puVar16 != puVar1);
    }
  }
  return;
}


