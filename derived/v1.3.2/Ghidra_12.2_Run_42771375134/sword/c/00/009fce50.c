/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fce50; name: FUN_009fce50
 */


ulong FUN_009fce50(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  char local_68 [4];
  char local_64;
  char cStack_63;
  
  local_64 = (char)DAT_021534c4;
  cStack_63 = (char)((ushort)DAT_021534c4 >> 8);
  local_68[0] = (char)DAT_021534c0;
  local_68[1] = (char)((uint)DAT_021534c0 >> 8);
  local_68[2] = (char)((uint)DAT_021534c0 >> 0x10);
  local_68[3] = (char)((uint)DAT_021534c0 >> 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar3 = FUN_009fe1a0(*(long *)(param_1 + 0x10),0xb);
    pcVar10 = (char *)((ulong)local_68 | 3);
    pcVar14 = (char *)((ulong)local_68 | 1);
    pcVar15 = (char *)((ulong)local_68 | 2);
    pcVar11 = (char *)((ulong)local_68 | 4);
    pcVar9 = (char *)((ulong)local_68 | 5);
    iVar6 = 0;
    if (iVar3 == 0) {
      do {
        uVar4 = FUN_009ff3e0(*(undefined8 *)(param_1 + 0x10),iVar6);
        uVar1 = FUN_009ff420(*(undefined8 *)(param_1 + 0x10),iVar6);
        iVar3 = FUN_00884820(*param_2);
        if (iVar3 != 0) {
          uVar13 = 0;
          do {
            lVar7 = (**(code **)(*(long *)*param_2 + 0x58))((long *)*param_2,uVar13);
            if ((((((lVar7 != 0) && (uVar8 = FUN_0087d610(lVar7,2), (uVar8 & 1) == 0)) &&
                  (uVar5 = FUN_008783b0(lVar7), uVar5 == (uVar4 & 0xffff))) &&
                 (((uVar2 = FUN_008783c0(lVar7), (uVar1 & 0xff) == uVar2 &&
                   (uVar13 != (int)local_68[0])) &&
                  ((uVar13 != (int)local_68[1] &&
                   ((uVar13 != (int)local_68[2] && (uVar13 != (int)local_68[3])))))))) &&
                (uVar13 != (int)local_64)) && (uVar13 != (int)cStack_63)) {
              if (local_68[0] == -1) {
                pcVar12 = local_68;
              }
              else {
                pcVar12 = pcVar14;
                if ((((local_68[1] != -1) && (pcVar12 = pcVar15, local_68[2] != -1)) &&
                    (pcVar12 = pcVar10, local_68[3] != -1)) &&
                   ((pcVar12 = pcVar11, local_64 != -1 && (pcVar12 = pcVar9, cStack_63 != -1))))
                goto LAB_009fd150;
              }
              *pcVar12 = (char)uVar13;
            }
LAB_009fd150:
            uVar13 = uVar13 + 1;
            uVar5 = FUN_00884820(*param_2);
          } while (uVar13 < uVar5);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 9);
    }
    else {
      do {
        uVar4 = FUN_009ff460(*(undefined8 *)(param_1 + 0x10),iVar6);
        uVar1 = FUN_009ff4a0(*(undefined8 *)(param_1 + 0x10),iVar6);
        iVar3 = FUN_00884820(*param_2);
        if (iVar3 != 0) {
          uVar13 = 0;
          do {
            lVar7 = (**(code **)(*(long *)*param_2 + 0x58))((long *)*param_2,uVar13);
            if ((((lVar7 != 0) && (uVar8 = FUN_0087d610(lVar7,2), (uVar8 & 1) == 0)) &&
                (((uVar5 = FUN_008783b0(lVar7), uVar5 == (uVar4 & 0xffff) &&
                  (((uVar2 = FUN_008783c0(lVar7), (uVar1 & 0xff) == uVar2 &&
                    (uVar13 != (int)local_68[0])) && (uVar13 != (int)local_68[1])))) &&
                 (((uVar13 != (int)local_68[2] && (uVar13 != (int)local_68[3])) &&
                  (uVar13 != (int)local_64)))))) && (uVar13 != (int)cStack_63)) {
              if (local_68[0] == -1) {
                pcVar12 = local_68;
              }
              else {
                pcVar12 = pcVar14;
                if (((local_68[1] != -1) && (pcVar12 = pcVar15, local_68[2] != -1)) &&
                   ((pcVar12 = pcVar10, local_68[3] != -1 &&
                    ((pcVar12 = pcVar11, local_64 != -1 && (pcVar12 = pcVar9, cStack_63 != -1))))))
                goto LAB_009fcffc;
              }
              *pcVar12 = (char)uVar13;
            }
LAB_009fcffc:
            uVar13 = uVar13 + 1;
            uVar5 = FUN_00884820(*param_2);
          } while (uVar13 < uVar5);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 9);
    }
    FUN_009fe1a0(*(undefined8 *)(param_1 + 0x10),2);
    uVar4 = FUN_009fe1a0(*(undefined8 *)(param_1 + 0x10),3);
    FUN_00884820(*param_2);
    iVar6 = FUN_00884820(*param_2);
    if (iVar6 != 0) {
      uVar13 = 0;
      do {
        lVar7 = (**(code **)(*(long *)*param_2 + 0x58))((long *)*param_2,uVar13);
        if ((((lVar7 != 0) && (uVar8 = FUN_0087d610(lVar7,2), (uVar8 & 1) == 0)) &&
            (uVar13 != (int)local_68[0])) &&
           (((uVar13 != (int)local_68[1] && (uVar13 != (int)local_68[2])) &&
            ((uVar13 != (int)local_68[3] &&
             ((uVar13 != (int)local_64 && (uVar13 != (int)cStack_63)))))))) {
          if (local_68[0] == -1) {
            pcVar12 = local_68;
          }
          else {
            pcVar12 = pcVar14;
            if ((((local_68[1] != -1) && (pcVar12 = pcVar15, local_68[2] != -1)) &&
                (pcVar12 = pcVar10, local_68[3] != -1)) &&
               ((pcVar12 = pcVar11, local_64 != -1 && (pcVar12 = pcVar9, cStack_63 != -1))))
            goto LAB_009fd278;
          }
          *pcVar12 = (char)uVar13;
        }
LAB_009fd278:
        uVar13 = uVar13 + 1;
        uVar5 = FUN_00884820(*param_2);
      } while (uVar13 < uVar5);
    }
    if (uVar4 < 6) {
                    /* WARNING: Subroutine does not return */
      memset(local_68 + uVar4,0xff,(ulong)(5 - uVar4) + 1);
    }
  }
  return (ulong)CONCAT15(cStack_63,
                         CONCAT14(local_64,CONCAT13(local_68[3],
                                                    CONCAT12(local_68[2],
                                                             CONCAT11(local_68[1],local_68[0])))));
}


