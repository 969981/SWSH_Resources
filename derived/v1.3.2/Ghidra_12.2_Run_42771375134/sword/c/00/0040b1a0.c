/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040b1a0; name: FUN_0040b1a0
 */


void FUN_0040b1a0(undefined8 param_1,long param_2,long param_3,ulong param_4,uint param_5)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  double dVar15;
  double dVar16;
  int local_60 [2];
  undefined1 local_58;
  
  lVar7 = *(long *)(param_2 + 0x18);
  uVar12 = param_3 - *(long *)(param_2 + 8);
  lVar1 = uVar12 + (param_4 & 0xffffffff);
  if (lVar7 == 0) goto LAB_0040b308;
  bVar4 = *(byte *)(param_2 + 0x44);
  uVar8 = (uint)bVar4;
  iVar11 = (int)uVar12;
  if ((bVar4 & 1) == 0) {
    if ((((param_5 & 1) != 0) && ((bVar4 >> 2 & 1) == 0)) && ((*(byte *)(lVar7 + 0x5a) & 1) != 0)) {
      uVar8 = iVar11 - *(int *)(lVar7 + 0x90);
      dVar15 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_02712b38);
      dVar15 = ((double)(int)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) * DAT_01cd51e8) / dVar15;
      dVar16 = 0.5;
      if (dVar15 <= 0.0) {
        dVar16 = -0.5;
      }
      local_60[0] = (int)(dVar16 + dVar15);
      local_60[1] = 4;
      local_58 = 0;
      FUN_00409300(lVar7,local_60,0xffffffff);
      uVar8 = *(byte *)(param_2 + 0x44) | 4;
LAB_0040b2a8:
      *(char *)(param_2 + 0x44) = (char)uVar8;
    }
  }
  else if ((iVar11 <= *(int *)(param_2 + 0x24)) && (*(int *)(param_2 + 0x24) < lVar1)) {
    if ((param_5 & 1) == 0) {
      FUN_004091c0(lVar7,param_2 + 0x28);
      uVar8 = (uint)*(byte *)(param_2 + 0x44);
    }
    else {
      uVar8 = bVar4 | 4;
      *(char *)(param_2 + 0x44) = (char)uVar8;
    }
    uVar8 = uVar8 & 0xfe;
    goto LAB_0040b2a8;
  }
  if ((uVar8 >> 1 & 1) != 0) {
    iVar3 = *(int *)(param_2 + 0x34);
    if ((iVar11 <= iVar3) && (iVar3 < lVar1)) {
      FUN_00409300(*(undefined8 *)(param_2 + 0x18),param_2 + 0x38,iVar3 - iVar11);
      *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) & 0xfd;
    }
  }
  lVar7 = *(long *)(param_2 + 0x18);
  if (((lVar7 != 0) && ((*(byte *)(lVar7 + 0x5a) >> 4 & 1) == 0)) &&
     ((*(byte *)(lVar7 + 0x5a) & 3) != 0)) {
    FUN_0041a260(param_1,lVar7,uVar12 & 0xffffffff,param_4 & 0xffffffff);
  }
LAB_0040b308:
  puVar6 = PTR_DAT_02712a90;
  puVar5 = PTR_DAT_02712a60;
  plVar9 = (long *)(param_2 + 0x10);
  if ((long *)*plVar9 != (long *)0x0) {
    plVar14 = (long *)*plVar9;
    plVar13 = (long *)0x0;
    do {
      while (plVar10 = plVar14, *plVar10 < lVar1) {
        if ((int)plVar10[1] == 1) {
          FUN_00406d20(*(undefined8 *)puVar5,plVar10[2]);
        }
        plVar14 = (long *)plVar10[3];
        plVar2 = plVar9;
        if ((long *)*plVar9 != plVar10) {
          plVar2 = plVar13 + 3;
        }
        *plVar2 = (long)plVar14;
        FUN_00404870(*(undefined4 *)puVar6,plVar10);
        if (plVar14 == (long *)0x0) {
          return;
        }
      }
      plVar14 = (long *)plVar10[3];
      plVar13 = plVar10;
    } while ((long *)plVar10[3] != (long *)0x0);
  }
  return;
}


