/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00590620; name: FUN_00590620
 */


ulong FUN_00590620(long param_1,long param_2,long param_3,long param_4,int param_5,ulong param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if (*(long **)(param_1 + 0x20) == (long *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((param_6 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x138))();
      (**(code **)(**(long **)(param_1 + 0x20) + 0x140))(*(long **)(param_1 + 0x20),0xffffffff);
      (**(code **)(**(long **)(param_1 + 0x20) + 0x150))(*(long **)(param_1 + 0x20),0);
    }
    uVar8 = *(undefined4 *)(param_3 + 0x54);
    uVar13 = *(undefined4 *)(param_3 + 0x58);
    fVar12 = *(float *)(param_3 + 0x90);
    fVar9 = *(float *)(param_3 + 0x94);
    fVar14 = *(float *)(param_3 + 0x88);
    fVar15 = *(float *)(param_3 + 0x8c);
    uVar16 = *(undefined4 *)(param_4 + 0x54);
    uVar17 = *(undefined4 *)(param_4 + 0x58);
    uVar2 = *(uint *)(param_2 + 0x54);
    uVar1 = *(uint *)(param_2 + 0x58);
    uVar3 = FUN_0059d300(param_2,0,0,1,0,0);
    if (-1 < (int)uVar3) {
      fVar11 = (float)NEON_ucvtf(uVar13);
      fVar10 = (float)NEON_ucvtf(uVar8);
      NEON_ucvtf(uVar16);
      NEON_ucvtf(uVar17);
      FUN_0059d000(0,0);
      do {
        lVar4 = param_3;
        param_3 = *(long *)(lVar4 + 0x120);
      } while (param_3 != 0);
      uVar6 = *(undefined8 *)(lVar4 + 0xa8);
      do {
        lVar4 = param_4;
        param_4 = *(long *)(lVar4 + 0x120);
      } while (param_4 != 0);
      uVar5 = *(undefined8 *)(lVar4 + 0xa8);
      puVar7 = (undefined8 *)(param_1 + 0x30);
      (**(code **)(*(long *)*puVar7 + 0xe8))
                ((long *)*puVar7,*(undefined4 *)((long)puVar7 + (long)param_5 * 4 + 0x22784));
      (**(code **)(*(long *)*puVar7 + 0xd0))((long *)*puVar7,*(undefined4 *)(param_1 + 0x40),uVar6);
      (**(code **)(*(long *)*puVar7 + 0xd0))((long *)*puVar7,*(undefined4 *)(param_1 + 0x44),uVar5);
      uVar2 = FUN_00572010(0,0,(float)uVar2,(float)uVar1,0,0,fVar14 * fVar10 + fVar12,
                           fVar15 * fVar11 + fVar9,param_1,0);
      uVar3 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
    }
  }
  return uVar3;
}


