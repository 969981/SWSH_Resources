/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ffa80; name: FUN_006ffa80
 */


void FUN_006ffa80(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  int iVar15;
  undefined8 local_c0 [8];
  
  puVar1 = PTR_DAT_02715500;
  uVar8 = *(uint *)((long)param_1 + 0x1fc);
  if (uVar8 != 0) {
    uVar9 = *(uint *)(param_1 + 0x3f);
    uVar10 = 0;
    do {
      if (uVar9 != 0) {
        uVar8 = 0;
        do {
          *(uint *)(param_1 + 0x40) = uVar8 + (int)param_1[0x3e];
          *(uint *)((long)param_1 + 0x204) = *(int *)((long)param_1 + 500) + uVar10;
          local_c0[6] = 0;
          local_c0[7] = 0;
          local_c0[4] = 0;
          local_c0[5] = 0;
          local_c0[2] = 0;
          local_c0[3] = 0;
          local_c0[0] = 0;
          local_c0[1] = 0;
          if ((long *)param_1[0x16] == (long *)0x0) {
            uVar12 = 0;
            plVar4 = (long *)param_1[0x18];
          }
          else {
            local_c0[0] = (**(code **)(*(long *)param_1[0x16] + 0x38))();
            if ((char)param_1[0x17] != '\0') {
              FUN_0199db10(*(long *)(param_1[0xc] + 0x58) + (long)*(int *)puVar1 * 0x170,local_c0[0]
                           ,param_1[0x16] + 0x98,0);
            }
            uVar12 = 1;
            plVar4 = (long *)param_1[0x18];
          }
          if (plVar4 != (long *)0x0) {
            uVar5 = (**(code **)(*plVar4 + 0x38))
                              (plVar4,(int)param_1[0x40],*(undefined4 *)((long)param_1 + 0x204));
            local_c0[uVar12] = uVar5;
            if ((char)param_1[0x19] != '\0') {
              FUN_0199db10(*(long *)(param_1[0xc] + 0x58) + (long)*(int *)puVar1 * 0x170,uVar5,
                           param_1[0x18] + 0x98,0);
            }
            uVar12 = (ulong)((int)uVar12 + 1);
          }
          plVar4 = (long *)param_1[0x1a];
          if (plVar4 != (long *)0x0) {
            uVar5 = (**(code **)(*plVar4 + 0x38))
                              (plVar4,(int)param_1[0x40],*(undefined4 *)((long)param_1 + 0x204));
            local_c0[uVar12] = uVar5;
            if ((char)param_1[0x1b] != '\0') {
              FUN_0199db10(*(long *)(param_1[0xc] + 0x58) + (long)*(int *)puVar1 * 0x170,uVar5,
                           param_1[0x1a] + 0x98,0);
            }
            uVar12 = (ulong)((int)uVar12 + 1);
          }
          plVar4 = (long *)param_1[0x1c];
          if (plVar4 != (long *)0x0) {
            uVar5 = (**(code **)(*plVar4 + 0x38))
                              (plVar4,(int)param_1[0x40],*(undefined4 *)((long)param_1 + 0x204));
            local_c0[uVar12] = uVar5;
            if ((char)param_1[0x1d] != '\0') {
              FUN_0199db10(*(long *)(param_1[0xc] + 0x58) + (long)*(int *)puVar1 * 0x170,uVar5,
                           param_1[0x1c] + 0x98,0);
            }
            uVar12 = (ulong)((int)uVar12 + 1);
          }
          plVar4 = (long *)param_1[0x1e];
          if (plVar4 != (long *)0x0) {
            uVar5 = (**(code **)(*plVar4 + 0x38))
                              (plVar4,(int)param_1[0x40],*(undefined4 *)((long)param_1 + 0x204));
            local_c0[uVar12] = uVar5;
            if ((char)param_1[0x1f] != '\0') {
              FUN_0199db10(*(long *)(param_1[0xc] + 0x58) + (long)*(int *)puVar1 * 0x170,uVar5,
                           param_1[0x1e] + 0x98,0);
            }
            uVar12 = (ulong)((int)uVar12 + 1);
          }
          plVar4 = (long *)param_1[0x20];
          if (plVar4 != (long *)0x0) {
            uVar5 = (**(code **)(*plVar4 + 0x38))
                              (plVar4,(int)param_1[0x40],*(undefined4 *)((long)param_1 + 0x204));
            local_c0[uVar12] = uVar5;
            if ((char)param_1[0x21] != '\0') {
              FUN_0199db10(*(long *)(param_1[0xc] + 0x58) + (long)*(int *)puVar1 * 0x170,uVar5,
                           param_1[0x20] + 0x98,0);
            }
            uVar12 = (ulong)((int)uVar12 + 1);
          }
          plVar4 = (long *)param_1[0x22];
          if (plVar4 != (long *)0x0) {
            uVar5 = (**(code **)(*plVar4 + 0x38))
                              (plVar4,(int)param_1[0x40],*(undefined4 *)((long)param_1 + 0x204));
            local_c0[uVar12] = uVar5;
            if ((char)param_1[0x23] != '\0') {
              FUN_0199db10(*(long *)(param_1[0xc] + 0x58) + (long)*(int *)puVar1 * 0x170,uVar5,
                           param_1[0x22] + 0x98,0);
            }
            uVar12 = (ulong)((int)uVar12 + 1);
          }
          plVar4 = (long *)param_1[0x24];
          if (plVar4 != (long *)0x0) {
            uVar5 = (**(code **)(*plVar4 + 0x38))
                              (plVar4,(int)param_1[0x40],*(undefined4 *)((long)param_1 + 0x204));
            local_c0[uVar12] = uVar5;
            if ((char)param_1[0x25] != '\0') {
              FUN_0199db10(*(long *)(param_1[0xc] + 0x58) + (long)*(int *)puVar1 * 0x170,uVar5,
                           param_1[0x24] + 0x98,0);
            }
            uVar12 = (ulong)((int)uVar12 + 1);
          }
          lVar13 = param_1[0x26];
          if (lVar13 == 0) {
            lVar13 = param_1[0x16];
          }
          if (lVar13 != 0) {
            iVar11 = *(int *)(*(long *)PTR_DAT_02710910 + 0x85bc);
            fVar14 = 1.0;
            if ((char)param_1[0x41] != '\0') {
              fVar14 = *(float *)(*(long *)PTR_DAT_02710910 + 0x85c4);
            }
            iVar2 = FUN_006f8300(lVar13,iVar11);
            iVar15 = (int)(fVar14 * (float)iVar2);
            iVar3 = FUN_006f8380(lVar13,iVar11);
            *(int *)(param_1 + 0x32) = (int)(fVar14 * (float)iVar2);
            iVar2 = (int)(fVar14 * (float)iVar3);
            *(int *)((long)param_1 + 0x164) = iVar2;
            *(int *)((long)param_1 + 0x194) = (int)(fVar14 * (float)iVar3);
            *(int *)(param_1 + 0x2c) = iVar15;
            *(int *)(param_1 + (long)iVar11 * 2 + 0x37) = iVar15;
            *(int *)((long)param_1 + (long)iVar11 * 0x10 + 0x1bc) = iVar2;
          }
          FUN_0199dfd0(*(long *)(param_1[0xc] + 0x58) + (long)*(int *)puVar1 * 0x170,0,1,
                       param_1 + 0x2b);
          FUN_0199e0a0(*(long *)(param_1[0xc] + 0x58) + (long)*(int *)puVar1 * 0x170,0,1,
                       param_1 + 0x31);
          iVar11 = (int)uVar12;
          if (param_1[0x26] == 0) {
            lVar13 = 0;
            if (iVar11 != 0) goto LAB_006ffebc;
LAB_006ffee0:
            if (lVar13 != 0) {
              uVar12 = 0;
              lVar6 = *(long *)(param_1[0xc] + 0x58) + (long)*(int *)puVar1 * 0x170;
              puVar7 = (undefined8 *)0x0;
              goto LAB_006ffefc;
            }
          }
          else {
            lVar13 = FUN_006f2970(param_1[0x26],uVar8,uVar10);
            if ((lVar13 != 0) && (*(char *)((long)param_1 + 0x1ac) != '\0')) {
              FUN_0199dd20(*(undefined4 *)(param_1[0x26] + 0x580),
                           *(long *)(param_1[0xc] + 0x58) + (long)*(int *)puVar1 * 0x170,lVar13,
                           *(undefined4 *)(param_1[0x26] + 0x584),3,0);
            }
            if (iVar11 == 0) goto LAB_006ffee0;
LAB_006ffebc:
            puVar7 = local_c0;
            lVar6 = *(long *)(param_1[0xc] + 0x58) + (long)*(int *)puVar1 * 0x170;
LAB_006ffefc:
            FUN_0199d150(lVar6,uVar12,puVar7,lVar13);
          }
          (**(code **)(*param_1 + 0x80))(param_1);
          uVar9 = (uint)(iVar11 != 0) << 7;
          if (lVar13 != 0) {
            uVar9 = (uint)(iVar11 != 0) << 7 | 0x100;
          }
          FUN_0199de60(*(long *)(param_1[0xc] + 0x58) + (long)*(int *)puVar1 * 0x170,uVar9);
          FUN_0199de90(*(long *)(param_1[0xc] + 0x58) + (long)*(int *)puVar1 * 0x170,0x20);
          uVar9 = *(uint *)(param_1 + 0x3f);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
        uVar8 = *(uint *)((long)param_1 + 0x1fc);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar8);
  }
  return;
}


