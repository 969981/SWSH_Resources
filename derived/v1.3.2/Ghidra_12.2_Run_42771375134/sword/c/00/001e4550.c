/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e4550; name: FUN_001e4550
 */


void FUN_001e4550(long *param_1,int param_2,long *param_3,long *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar1 = *(uint *)(param_1 + 1) >> 0x1e;
  if ((uVar1 == 3) || ((uVar1 == 2 && (*(char *)(*param_1 + 0x1fb9) != '\0')))) {
    uVar5 = FUN_00400880();
    FUN_00400890(uVar5,8,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/buffering/ScbParticleSystem.cpp"
                 ,0xdb,"Particle operations are not allowed while simulation is running.");
    return;
  }
  if ((*(uint *)(param_1 + 1) >> 10 & 1) == 0) {
    fVar13 = (float)FUN_003a9a80(param_1 + 3);
    if (3 < param_5) goto LAB_001e4628;
LAB_001e45ec:
    fVar16 = 1.0;
    switch((long)&switchD_001e4604::switchdataD_01d4cd58 +
           (long)(int)(&switchD_001e4604::switchdataD_01d4cd58)[param_5]) {
    case 0x1e4608:
      fVar16 = 1.0 / fVar13;
    case 0x1e4610:
      plVar12 = param_1 + 0x16;
      goto LAB_001e4644;
    case 0x1e4630:
      fVar16 = 1.0 / fVar13;
      break;
    case 0x1e463c:
      fVar16 = 1.0;
    }
  }
  else {
    fVar13 = *(float *)(param_1[2] + 0x2c);
    if (param_5 < 4) goto LAB_001e45ec;
LAB_001e4628:
    fVar16 = 0.0;
  }
  plVar12 = param_1 + 0x19;
LAB_001e4644:
  uVar4 = FUN_003a9c30(param_1 + 3);
  FUN_001e3a90(plVar12,uVar4);
  if (param_2 != 0) {
    lVar7 = *param_3;
    iVar6 = 0;
    lVar8 = *param_4;
    lVar9 = *(long *)*plVar12;
    do {
      while( true ) {
        pfVar11 = (float *)(lVar8 + (ulong)(uint)((int)param_4[1] * iVar6));
        uVar1 = *(uint *)(lVar7 + (ulong)(uint)((int)param_3[1] * iVar6));
        uVar10 = (ulong)uVar1;
        fVar13 = *pfVar11;
        fVar15 = pfVar11[1];
        fVar14 = pfVar11[2];
        uVar3 = (ulong)(uVar1 >> 5);
        uVar1 = *(uint *)(lVar9 + uVar3 * 4);
        uVar2 = 1 << (uVar10 & 0x1f);
        if ((uVar1 & uVar2) == 0) break;
        pfVar11 = (float *)(plVar12[1] + uVar10 * 0xc);
        pfVar11[1] = fVar16 * fVar15 + pfVar11[1];
        *pfVar11 = fVar16 * fVar13 + *pfVar11;
        iVar6 = iVar6 + 1;
        pfVar11[2] = fVar16 * fVar14 + pfVar11[2];
        if (param_2 == iVar6) goto LAB_001e4718;
      }
      *(uint *)(lVar9 + uVar3 * 4) = uVar1 | uVar2;
      pfVar11 = (float *)(plVar12[1] + uVar10 * 0xc);
      *pfVar11 = fVar16 * fVar13;
      pfVar11[1] = fVar16 * fVar15;
      iVar6 = iVar6 + 1;
      pfVar11[2] = fVar16 * fVar14;
    } while (param_2 != iVar6);
LAB_001e4718:
    *(undefined1 *)(plVar12 + 2) = 1;
  }
  return;
}


