/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01009c00; name: FUN_01009c00
 */


undefined8
FUN_01009c00(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 *param_5)

{
  uint *puVar1;
  ushort uVar2;
  bool bVar3;
  int *piVar4;
  ushort *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong uVar9;
  byte bVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_80 [24];
  long local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  ulong uStack_48;
  undefined8 local_38;
  
  local_38 = 0;
  piVar4 = (int *)FUN_01009440(param_1,param_2,&local_38);
  puVar5 = (ushort *)((long)piVar4 - (long)*piVar4);
  piVar8 = (int *)0x0;
  if (4 < *puVar5) {
    piVar8 = (int *)0x0;
    if ((ulong)puVar5[2] != 0) {
      puVar6 = (uint *)((long)piVar4 + (ulong)puVar5[2]);
      piVar8 = (int *)((long)puVar6 + (ulong)*puVar6);
    }
  }
  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 7) ||
     (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar9 == 0)) {
    if (*param_2 != 0) {
      return 0;
    }
  }
  else if (*param_2 != *(long *)((long)piVar8 + uVar9)) {
    return 0;
  }
  if (*puVar5 < 0x1b) {
    puVar6 = (uint *)0x0;
    uVar14 = uRam0000000000000000;
  }
  else {
    puVar6 = (uint *)0x0;
    if ((ulong)puVar5[0xd] != 0) {
      puVar6 = (uint *)((long)piVar4 + (ulong)puVar5[0xd]);
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    }
    uVar14 = *puVar6;
  }
  if (uVar14 != 0) {
    bVar10 = 0;
    do {
      piVar8 = (int *)((long)(puVar6 + (ulong)bVar10 + 1) + (ulong)puVar6[(ulong)bVar10 + 1]);
      puVar1 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (4 - (long)*piVar8)));
      piVar4 = (int *)((long)puVar1 + (ulong)*puVar1);
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar9 == 0)) {
        piVar4 = (int *)0x0;
      }
      else {
        puVar1 = (uint *)((long)piVar4 + uVar9);
        piVar4 = (int *)((long)puVar1 + (ulong)*puVar1);
      }
      puVar5 = (ushort *)((long)piVar4 - (long)*piVar4);
      uVar2 = *puVar5;
      if ((uVar2 < 0x17) || ((ulong)puVar5[0xb] == 0)) {
        bVar3 = *param_3 == 0;
      }
      else {
        bVar3 = *(long *)((long)piVar4 + (ulong)puVar5[0xb]) == *param_3;
      }
      if (bVar3) {
        if (uVar2 < 5) {
          uVar14 = 0;
          uVar11 = 0;
          uVar13 = 0;
LAB_01009e60:
          fVar15 = 0.0;
        }
        else {
          uVar11 = 0;
          if ((ulong)puVar5[2] != 0) {
            uVar11 = *(undefined4 *)((long)piVar4 + (ulong)puVar5[2]);
          }
          if (uVar2 < 7) {
            uVar14 = 0;
            uVar13 = 0;
            goto LAB_01009e60;
          }
          uVar13 = 0;
          if ((ulong)puVar5[3] != 0) {
            uVar13 = *(undefined4 *)((long)piVar4 + (ulong)puVar5[3]);
          }
          if (uVar2 < 9) {
            uVar14 = 0;
            goto LAB_01009e60;
          }
          uVar14 = 0;
          if ((ulong)puVar5[4] != 0) {
            uVar14 = *(uint *)((long)piVar4 + (ulong)puVar5[4]);
          }
          if (uVar2 < 0xb) goto LAB_01009e60;
          fVar15 = 0.0;
          if ((ulong)puVar5[5] != 0) {
            fVar15 = *(float *)((long)piVar4 + (ulong)puVar5[5]);
          }
          if (0xc < uVar2) {
            fVar12 = 0.0;
            if ((ulong)puVar5[6] != 0) {
              fVar12 = *(float *)((long)piVar4 + (ulong)puVar5[6]);
            }
            fVar16 = 0.0;
            if ((0xe < uVar2) && ((ulong)puVar5[7] != 0)) {
              fVar16 = *(float *)((long)piVar4 + (ulong)puVar5[7]);
            }
            goto LAB_01009e68;
          }
        }
        fVar12 = 0.0;
        fVar16 = fVar12;
LAB_01009e68:
        local_50 = CONCAT44(uVar13,uVar11);
        uStack_48 = (ulong)uVar14;
        local_60 = FUN_00a92cd0((fVar12 / DAT_01d4c284) * DAT_01d4bb38,
                                (fVar15 / DAT_01d4c284) * DAT_01d4bb38,
                                (fVar16 / DAT_01d4c284) * DAT_01d4bb38);
        FUN_01009b20(auStack_80,param_1,&local_38);
        FUN_00db1870(param_4,auStack_80,*param_2,&local_50,local_60);
        if (param_5 != (undefined8 *)0x0) {
          puVar6 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (4 - (long)*piVar8)));
          piVar8 = (int *)((long)puVar6 + (ulong)*puVar6);
          if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 7) ||
             (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar9 == 0)) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)((long)piVar8 + uVar9);
          }
          *param_5 = uVar7;
        }
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        }
        return 1;
      }
      bVar10 = bVar10 + 1;
    } while (bVar10 < uVar14);
  }
  return 0;
}


