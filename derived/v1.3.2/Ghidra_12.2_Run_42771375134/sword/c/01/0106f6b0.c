/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106f6b0; name: FUN_0106f6b0
 */


/* WARNING: Removing unreachable block (ram,0x0106f82c) */
/* WARNING: Removing unreachable block (ram,0x0106f80c) */
/* WARNING: Removing unreachable block (ram,0x0106f7e4) */

ulong FUN_0106f6b0(ulong param_1,undefined8 param_2,char param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  puVar3 = PTR_DAT_02723c90;
  bVar4 = param_3 != '\x01';
  uVar15 = 3;
  if (bVar4) {
    uVar15 = 0;
  }
  uVar13 = 4;
  puVar8 = (uint *)PTR_DAT_02723c98;
  if (bVar4) {
    uVar13 = 0xffffffff;
    puVar8 = (uint *)0x0;
  }
  uVar5 = 5;
  puVar1 = (uint *)PTR_DAT_02723c88;
  if (bVar4) {
    uVar5 = 0;
    puVar1 = (uint *)0x0;
  }
  uVar6 = 2;
  if (bVar4) {
    uVar6 = 0xffffffff;
  }
  puVar2 = (uint *)PTR_DAT_02723ca0;
  if (param_3 != '\0') {
    puVar2 = puVar8;
  }
  param_1 = param_1 & 0xffffffff;
  if (param_3 == '\0') {
    do {
      uVar13 = (uint)param_1;
      uVar15 = 0x5540 >> (ulong)((uVar13 & 0xf) << 1);
      if (uVar13 < 8) {
        uVar12 = -(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3;
        uVar10 = 0;
        do {
          if (*(uint *)(*(long *)((long)&PTR_DAT_0266ce60 + uVar12) + uVar10 * 4) == uVar13) {
            if ((uVar10 & 0xff) != 0) {
              uVar10 = (ulong)((int)uVar10 - 1);
              goto joined_r0x0106f90c;
            }
            break;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ulong *)(&DAT_021633d0 + uVar12));
      }
      else {
        uVar15 = 3;
      }
      uVar10 = 1;
      if ((uVar15 & 3) == 0) {
LAB_0106f950:
        puVar8 = puVar2;
      }
      else {
        uVar10 = 2;
        if ((uVar15 & 3) == 1) {
LAB_0106f938:
          puVar8 = (uint *)puVar3;
        }
        else {
          uVar10 = 0xffffffff;
joined_r0x0106f90c:
          if ((uVar15 & 3) == 0) goto LAB_0106f950;
          if ((uVar15 & 3) == 1) goto LAB_0106f938;
          puVar8 = (uint *)0x0;
        }
      }
      param_1 = (ulong)puVar8[uVar10 & 0xff];
      uVar10 = FUN_0106f400(param_2,param_1);
    } while ((uVar10 & 1) == 0);
  }
  else {
    do {
      uVar14 = (uint)param_1;
      uVar16 = 0x5540 >> (ulong)((uVar14 & 0xf) << 1);
      if (7 < uVar14) {
        uVar16 = 3;
      }
      if (uVar14 - 3 < 5) {
        puVar7 = puVar1;
        uVar11 = uVar5;
        if (uVar5 == 0) goto LAB_0106f84c;
LAB_0106f790:
        if ((*puVar7 == uVar14) || (param_3 != '\x01')) goto LAB_0106f84c;
        if (puVar7[1] == uVar14) {
          iVar9 = 1;
        }
        else if (puVar7[2] == uVar14) {
          iVar9 = 2;
        }
        else {
          if (uVar11 < 4) goto LAB_0106f84c;
          if (puVar7[3] == uVar14) {
            iVar9 = 3;
          }
          else {
            if ((uVar11 < 5) || (puVar7[4] != uVar14)) goto LAB_0106f84c;
            iVar9 = 4;
          }
        }
        uVar10 = (ulong)(iVar9 - 1);
        if ((uVar16 & 3) != 1) goto LAB_0106f7b4;
LAB_0106f878:
        puVar7 = puVar1;
      }
      else {
        if ((uVar14 < 3) && (puVar7 = puVar8, uVar11 = uVar15, uVar15 != 0)) goto LAB_0106f790;
LAB_0106f84c:
        uVar10 = (ulong)uVar6;
        if ((uVar16 & 3) == 0) {
LAB_0106f880:
          puVar7 = puVar2;
        }
        else {
          uVar10 = (ulong)uVar13;
          if (((uVar16 & 3) == 1) || (uVar10 = 0xffffffff, (uVar16 & 3) == 1)) goto LAB_0106f878;
LAB_0106f7b4:
          if ((uVar16 & 3) == 0) goto LAB_0106f880;
          puVar7 = (uint *)0x0;
        }
      }
      param_1 = (ulong)puVar7[uVar10 & 0xff];
      uVar10 = FUN_0106f400(param_2,param_1);
    } while ((uVar10 & 1) == 0);
  }
  return param_1;
}


