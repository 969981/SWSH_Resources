/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004528e0; name: FUN_004528e0
 */


/* WARNING: Removing unreachable block (ram,0x00452b28) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_004528e0(long param_1,float *param_2,uint param_3,long *param_4,undefined8 param_5,
            undefined8 param_6,long param_7,undefined8 param_8,long *param_9)

{
  float *pfVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  float fVar13;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((param_3 & 1) != 0) {
    FUN_00452c80(param_1,param_2,0,param_5);
    FUN_00452c80(param_1,param_2 + 6,6,param_5);
    plVar10 = *(long **)(param_1 + 0x100);
    if (plVar10 == (long *)0x0) {
      fVar13 = 0.0;
    }
    else {
      fVar13 = 0.0;
      do {
        pfVar1 = (float *)(plVar10 + 5);
        plVar10 = (long *)*plVar10;
        fVar13 = *pfVar1 + fVar13;
      } while (plVar10 != (long *)0x0);
    }
    if (fVar13 <= *(float *)(param_1 + 0xd0)) {
      fVar13 = *(float *)(param_1 + 0xd0);
    }
    *param_2 = fVar13 + *param_2;
  }
  if ((param_3 >> 1 & 1) != 0) {
    FUN_00452c80(param_1,param_2 + 2,2,param_5);
  }
  if ((param_3 >> 2 & 1) != 0) {
    FUN_00452c80(param_1,param_2 + 3,3,param_5);
  }
  if ((param_3 >> 3 & 1) != 0) {
    FUN_00452c80(param_1,param_2 + 4,4,param_5);
  }
  FUN_00483b40(param_1,param_2,param_4,param_5);
  if (((param_7 != 0) && (*(long *)(param_1 + 0x38) != 0)) &&
     (*(char *)(*(long *)(param_1 + 0x38) + 0x20) != '\0')) {
    local_78 = param_1 + 0x30;
    uStack_70 = 0;
    local_68 = 2;
    FUN_00477770(*(undefined8 *)PTR_DAT_02712dc0,&local_78,param_7);
  }
  if ((*PTR_DAT_02713040 != '\0') && ((*(byte *)(param_1 + 0x164) >> 6 & 1) != 0)) {
    plVar8 = (long *)*param_4;
    uVar4 = *(uint *)(param_4 + 1);
    plVar10 = plVar8;
    if (uVar4 == 0) {
LAB_00452a88:
      if (plVar10 != plVar8 + (ulong)uVar4 * 3) {
        *(undefined4 *)(plVar10 + 2) = 0;
        plVar10 = *(long **)(param_1 + 0x80);
        goto joined_r0x00452c18;
      }
    }
    else {
      lVar11 = (ulong)uVar4 * 0x18;
      do {
        if ((*plVar10 == param_1) && ((*(byte *)(plVar10 + 1) & 1) != 0)) goto LAB_00452a88;
        lVar11 = lVar11 + -0x18;
        plVar10 = plVar10 + 3;
      } while (lVar11 != 0);
    }
    uVar12 = *(uint *)((long)param_4 + 0xc);
    if (uVar12 <= uVar4) {
      uVar12 = uVar12 + 1;
      puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar12 * 0x18);
      if (puVar6 == (undefined8 *)0x0) goto LAB_00452c14;
      puVar7 = (undefined8 *)*param_4;
      if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar6)) {
        uVar5 = *(uint *)(param_4 + 1);
        if (uVar5 != 0) {
          puVar6[2] = puVar7[2];
          puVar6[1] = puVar7[1];
          *puVar6 = *puVar7;
          if (uVar5 != 1) {
            if (uVar5 == 2) {
              lVar11 = 1;
            }
            else {
              lVar11 = 1;
              lVar9 = 0;
              do {
                lVar2 = *param_4 + lVar9;
                *(undefined8 *)((long)puVar6 + lVar9 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
                *(undefined8 *)((long)puVar6 + lVar9 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
                *(undefined8 *)((long)puVar6 + lVar9 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
                lVar2 = *param_4 + lVar9;
                *(undefined8 *)((long)puVar6 + lVar9 + 0x40) = *(undefined8 *)(lVar2 + 0x40);
                *(undefined8 *)((long)puVar6 + lVar9 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
                lVar11 = lVar11 + 2;
                *(undefined8 *)((long)puVar6 + lVar9 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
                lVar9 = lVar9 + 0x30;
              } while ((ulong)uVar5 - (ulong)(~uVar5 & 1) != lVar11);
              if ((~uVar5 & 1) == 0) goto LAB_00452bbc;
            }
            puVar7 = puVar6 + lVar11 * 3;
            puVar3 = (undefined8 *)(*param_4 + lVar11 * 0x18);
            puVar7[2] = puVar3[2];
            puVar7[1] = puVar3[1];
            *puVar7 = *puVar3;
          }
LAB_00452bbc:
          puVar7 = (undefined8 *)*param_4;
        }
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar7);
      }
      *param_4 = (long)puVar6;
      *(uint *)((long)param_4 + 0xc) = uVar12;
    }
    if (uVar4 < uVar12) {
      uVar4 = *(uint *)(param_4 + 1);
      lVar11 = *param_4;
      *(uint *)(param_4 + 1) = uVar4 + 1;
      plVar10 = (long *)(lVar11 + (ulong)uVar4 * 0x18);
      if (plVar10 != (long *)0x0) {
        *plVar10 = param_1;
        lVar11 = lVar11 + (ulong)uVar4 * 0x18;
        *(undefined8 *)(lVar11 + 8) = 1;
        *(undefined4 *)(lVar11 + 0x10) = 0;
      }
    }
  }
LAB_00452c14:
  plVar10 = *(long **)(param_1 + 0x80);
joined_r0x00452c18:
  if ((plVar10 != (long *)0x0) && (plVar10 != param_9)) {
    (**(code **)(*plVar10 + 0x150))
              (plVar10,param_2,param_3 & 0xffffffef,param_4,param_5,param_6,param_7,0,param_9);
  }
  return 1;
}


