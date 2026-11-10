/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bf990; name: FUN_014bf990
 */


int FUN_014bf990(float param_1,ushort *param_2,long *param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  ushort uVar12;
  undefined8 uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  puVar1 = PTR_DAT_02710820;
  uVar13 = *(undefined8 *)PTR_DAT_02710820;
  uVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  uVar4 = FUN_014c30d0(uVar13,uVar4);
  puVar2 = PTR_DAT_02710828;
  uVar13 = *(undefined8 *)puVar1;
  uVar5 = FUN_008d4030(*(undefined8 *)PTR_DAT_02710828);
  plVar10 = (long *)FUN_014c26c0(uVar13,uVar4,uVar5);
  iVar6 = (**(code **)(*plVar10 + 0x20))();
  uVar12 = *param_2;
  if (uVar12 == 0) {
    fVar17 = 0.0;
    iVar14 = 0;
    fVar15 = 0.0;
  }
  else {
    fVar15 = 0.0;
    fVar17 = 0.0;
    iVar14 = 0;
    do {
      while (uVar11 = FUN_014ba310(uVar12), (uVar11 & 1) == 0) {
        uVar11 = FUN_014ba2e0(*param_2,0);
        fVar16 = fVar15;
        if ((uVar11 & 1) == 0) {
          if (*param_2 != 0x10) {
            if (*param_2 == 10) {
              fVar16 = fVar17;
              if (fVar17 <= fVar15) {
                fVar16 = fVar15;
              }
              iVar14 = iVar14 + 1;
              fVar17 = 0.0;
              uVar12 = param_2[1];
            }
            else {
              iVar8 = (**(code **)(*plVar10 + 0x80))(plVar10);
              fVar15 = 0.0;
              if ((param_2[1] | 0x10) != 0x10) {
                iVar9 = (**(code **)(*plVar10 + 0xa0))(plVar10,*param_2);
                fVar15 = (param_1 / (float)iVar6) * (float)iVar9;
              }
              fVar17 = fVar17 + (param_1 / (float)iVar6) * (float)iVar8 + fVar15;
              uVar12 = param_2[1];
            }
            goto joined_r0x014bfba4;
          }
          uVar7 = FUN_0077db50(param_2);
          bVar3 = FUN_0077db50(param_2);
          if (((uVar7 & 0xff00) == 0xbe00) && (bVar3 < 2)) {
            if (fVar17 <= fVar15) {
              fVar17 = fVar15;
            }
            fVar15 = fVar17;
            fVar17 = 0.0;
            iVar14 = iVar14 + 1;
          }
          param_2 = (ushort *)FUN_0077db30(param_2);
          uVar12 = *param_2;
        }
        else {
          uVar13 = *(undefined8 *)puVar1;
          uVar5 = FUN_014ba2c0(*param_2);
          plVar10 = (long *)FUN_014c26c0(uVar13,uVar4,uVar5);
          uVar12 = param_2[1];
joined_r0x014bfba4:
          param_2 = param_2 + 1;
          fVar15 = fVar16;
        }
        if (uVar12 == 0) goto LAB_014bfbb8;
      }
      uVar13 = *(undefined8 *)puVar1;
      uVar5 = FUN_008d4030(*(undefined8 *)puVar2);
      plVar10 = (long *)FUN_014c26c0(uVar13,uVar4,uVar5);
      param_2 = param_2 + 1;
      uVar12 = *param_2;
    } while (uVar12 != 0);
  }
LAB_014bfbb8:
  if (fVar17 <= fVar15) {
    fVar17 = fVar15;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar14 + 1;
  }
  return (int)fVar17;
}


