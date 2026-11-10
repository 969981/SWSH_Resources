/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00857b80; name: FUN_00857b80
 */


/* WARNING: Removing unreachable block (ram,0x00857bf4) */

undefined8 FUN_00857b80(long param_1,ulong *param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  
  puVar7 = PTR_DAT_027171f0;
  puVar1 = (ulong *)(param_1 + 0x28);
LAB_00857bc0:
  do {
    pbVar2 = (byte *)*param_2;
    if (pbVar2 < (byte *)param_2[1]) {
      bVar5 = *pbVar2;
      uVar9 = (uint)bVar5;
      if ((char)bVar5 < '\x01') {
        if (((byte *)param_2[1] <= pbVar2 + 1) ||
           (bVar4 = pbVar2[1], -1 < (char)((bVar4 ^ 0x80) & bVar5))) goto LAB_00857d64;
        uVar12 = (uVar9 + (uint)bVar4 * 0x80) - 0x80;
        *(uint *)(param_2 + 4) = uVar12;
        *param_2 = (ulong)(pbVar2 + 2);
      }
      else {
        uVar12 = (uint)bVar5;
        *(uint *)(param_2 + 4) = uVar9;
        *param_2 = (ulong)(pbVar2 + 1);
      }
LAB_00857c34:
      if (uVar12 == 0x1f3a) {
        uVar10 = param_2[7];
        *(int *)(param_2 + 7) = (int)uVar10 + -1;
        if ((int)uVar10 < 1) {
          return 0;
        }
        do {
          piVar11 = *(int **)(param_1 + 0x48);
          if (piVar11 == (int *)0x0) {
            iVar13 = *(int *)(param_1 + 0x44);
LAB_00857c98:
            FUN_00824290(param_1 + 0x38,iVar13 + 1);
            piVar11 = *(int **)(param_1 + 0x48);
            iVar13 = *piVar11;
LAB_00857cac:
            *piVar11 = iVar13 + 1;
            uVar14 = FUN_00860770(0,*(undefined8 *)(param_1 + 0x38));
            iVar13 = *(int *)(param_1 + 0x40);
            *(int *)(param_1 + 0x40) = iVar13 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar13 * 8 + 8) = uVar14;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x40);
            iVar13 = *piVar11;
            if (iVar13 <= iVar6) {
              if (iVar13 == *(int *)(param_1 + 0x44)) goto LAB_00857c98;
              goto LAB_00857cac;
            }
            *(int *)(param_1 + 0x40) = iVar6 + 1;
            uVar14 = *(undefined8 *)(piVar11 + (long)iVar6 * 2 + 2);
          }
          uVar8 = FUN_0080cab0(param_2);
          uVar10 = FUN_0085b9d0(uVar14,param_2);
          if ((uVar10 & 1) == 0) {
            return 0;
          }
          uVar10 = FUN_0080cc00(param_2,uVar8);
          if ((uVar10 & 1) == 0) {
            return 0;
          }
          pcVar3 = (char *)*param_2;
          if ((((int)(char *)param_2[1] - (int)pcVar3 < 2) || (*pcVar3 != -0x46)) ||
             (pcVar3[1] != '>')) goto LAB_00857d30;
          *param_2 = (ulong)(pcVar3 + 2);
        } while( true );
      }
    }
    else {
      uVar9 = 0;
LAB_00857d64:
      uVar12 = FUN_0080d8c0(param_2,uVar9);
      *(uint *)(param_2 + 4) = uVar12;
      if (uVar12 - 1 < 0x3fff) goto LAB_00857c34;
    }
    if (uVar12 == 0) {
      return 1;
    }
    if ((uVar12 & 7) == 4) {
      return 1;
    }
    if (uVar12 >> 6 < 0x7d) {
      if ((*puVar1 & 1) == 0) {
        uVar10 = FUN_009bb7d0(puVar1);
      }
      else {
        uVar10 = *puVar1 & 0xfffffffffffffffe;
      }
      uVar10 = FUN_00810550(param_2,uVar12,uVar10);
    }
    else {
      uVar14 = *(undefined8 *)puVar7;
      if ((*puVar1 & 1) == 0) {
        uVar10 = FUN_009bb7d0(puVar1);
      }
      else {
        uVar10 = *puVar1 & 0xfffffffffffffffe;
      }
      uVar10 = FUN_0083fc30(param_1 + 8,uVar12,param_2,uVar14,uVar10);
    }
    if ((uVar10 & 1) == 0) {
      return 0;
    }
  } while( true );
LAB_00857d30:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if ((pcVar3 == (char *)param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00857bc0;
}


