/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd9720; name: FUN_00fd9720
 */


void FUN_00fd9720(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  short sVar4;
  short *psVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float local_80 [2];
  float local_78;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(char *)(param_1 + 0x600) == '\0') {
    lVar9 = *(long *)(param_1 + 0x2b0);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(lVar9 + 0x2e8);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    lVar9 = *(long *)(param_1 + 0x2b0);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    lVar10 = *(long *)(lVar9 + 0x2e0);
    lVar1 = param_1 + 0x100;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    FUN_014c62d0(lVar10,lVar8,param_2);
    psVar5 = (short *)FUN_0077d470(lVar8);
    sVar4 = *psVar5;
    while (sVar4 != 0) {
      if (sVar4 == 10) {
        uVar12 = 0x3f800000;
        plVar7 = (long *)(param_1 + 0x5f0);
        puVar11 = &DAT_02162120;
        goto LAB_00fd9838;
      }
      psVar5 = psVar5 + 1;
      sVar4 = *psVar5;
    }
    plVar7 = (long *)(param_1 + 0x5e0);
    uVar12 = 0;
    puVar11 = &DAT_02162110;
LAB_00fd9838:
    lVar9 = *plVar7;
    lVar2 = plVar7[1];
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 0xda));
    uVar3 = *(undefined4 *)(lVar9 + 0x54);
    fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 0xdc));
    uVar6 = FUN_0077d470(lVar8);
    FUN_00ffd700(lVar1,puVar11,uVar6,10);
    FUN_019caad0(local_80,lVar2);
    *(undefined4 *)(lVar9 + 0x54) = uVar3;
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
    *(float *)(lVar9 + 0x50) = (local_78 - local_80[0]) + fVar13 + fVar14;
    FUN_00ffd510(uVar12,lVar1,&DAT_02162128);
    FUN_00787490(*(undefined8 *)(param_1 + 0x5d0),lVar2 + 0xb0);
    FUN_00ffd430(lVar1,&DAT_02162130);
    FUN_00ffd010(lVar1,&DAT_02162138);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
  }
  *(undefined2 *)(param_1 + 0x600) = 0x101;
  return;
}


