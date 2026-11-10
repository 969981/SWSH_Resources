/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007160f0; name: FUN_007160f0
 */


void FUN_007160f0(long param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  ushort uVar7;
  long lVar8;
  size_t sVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  if (param_2 != (uint *)0x0) {
    FUN_00718ac0(param_1 + 0x260,*param_2);
    if (*param_2 != 0) {
      uVar20 = NEON_fmov(0x3f800000,4);
      uVar17 = 0;
      do {
        puVar15 = *(undefined8 **)(param_1 + 0x268);
        if (puVar15 < *(undefined8 **)(param_1 + 0x270)) {
          uVar16 = *(undefined8 *)(param_1 + 0x278);
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar16;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          puVar15[4] = 0xcbf29ce484222645;
          puVar15[5] = &DAT_01d38550;
          puVar15[8] = 0;
          puVar15[9] = 0;
          puVar15[10] = 0;
          puVar15[0xb] = 0;
          *(undefined8 *)((long)puVar15 + 0x45) = 0;
          *(undefined4 *)(puVar15 + 0xb) = 0xffffffff;
          puVar15[6] = 0;
          puVar15[7] = 0;
          puVar15[2] = 0;
          puVar15[3] = 0;
          *puVar15 = 0;
          puVar15[1] = 0;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          lVar8 = *(long *)(param_1 + 0x268) + 0x60;
          *(long *)(param_1 + 0x268) = lVar8;
        }
        else {
          FUN_0071fb90(param_1 + 0x260);
          lVar8 = *(long *)(param_1 + 0x268);
        }
        piVar2 = (int *)((long)(param_2 + uVar17 + 1) + (ulong)param_2[uVar17 + 1]);
        if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
          uVar12 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
          uVar12 = 0;
          if (uVar11 != 0) {
            uVar12 = (ulong)*(uint *)((long)piVar2 + uVar11);
          }
        }
        puVar1 = (uint *)(param_3 + 4 + uVar12 * 4);
        piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
           (uVar12 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar12 == 0)) {
          lVar18 = 0;
        }
        else {
          puVar1 = (uint *)((long)piVar3 + uVar12);
          lVar18 = (long)puVar1 + (ulong)*puVar1;
        }
        sVar9 = strlen((char *)(lVar18 + 4));
        bVar6 = *(byte *)(lVar18 + 4);
        uVar12 = 0xcbf29ce484222645;
        if (bVar6 != 0) {
          uVar12 = 0xcbf29ce484222645;
          pbVar14 = (byte *)(lVar18 + 5);
          do {
            uVar12 = (uVar12 ^ bVar6) * 0x100000001b3;
            bVar6 = *pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (bVar6 != 0);
        }
        *(ulong *)(lVar8 + -0x40) = uVar12;
        *(char **)(lVar8 + -0x38) = (char *)(lVar18 + 4);
        *(size_t *)(lVar8 + -0x30) = sVar9;
        if (*(long *)(lVar8 + -0x28) != 0) {
          plVar13 = (long *)(*(long *)(lVar8 + -0x28) + 0x48);
          (**(code **)(*plVar13 + 0x18))(plVar13);
          *(undefined8 *)(lVar8 + -0x28) = 0;
        }
        *(undefined8 *)(lVar8 + -0x28) = 0;
        uVar7 = *(ushort *)((long)piVar2 + (8 - (long)*piVar2));
        puVar4 = (undefined4 *)((long)piVar2 + (ulong)uVar7);
        uVar19 = *puVar4;
        puVar5 = (undefined4 *)0x0;
        if (uVar7 != 0) {
          puVar5 = puVar4;
        }
        uVar21 = puVar5[1];
        uVar22 = (undefined4)((ulong)uVar20 >> 0x20);
        uVar23 = puVar4[5];
        uVar16 = *(undefined8 *)(puVar5 + 3);
        *(ulong *)(lVar8 + -0x58) = CONCAT44(uVar22,puVar4[2]);
        *(ulong *)(lVar8 + -0x60) = CONCAT44(uVar21,uVar19);
        *(ulong *)(lVar8 + -0x48) = CONCAT44(uVar22,uVar23);
        *(undefined8 *)(lVar8 + -0x50) = uVar16;
        if (*(ushort *)((long)piVar2 - (long)*piVar2) < 7) {
          iVar10 = 0;
        }
        else {
          uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
          iVar10 = 0;
          if (uVar12 != 0) {
            iVar10 = *(int *)((long)piVar2 + uVar12);
          }
        }
        *(long *)(lVar8 + -0x20) = *(long *)(param_1 + 0x230) + (long)iVar10 * 0x40;
        if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) {
          uVar19 = 0;
        }
        else {
          uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5];
          uVar19 = 0;
          if (uVar12 != 0) {
            uVar19 = *(undefined4 *)((long)piVar2 + uVar12);
          }
        }
        *(undefined4 *)(lVar8 + -0x18) = uVar19;
        uVar17 = uVar17 + 1;
      } while (uVar17 < *param_2);
    }
  }
  return;
}


