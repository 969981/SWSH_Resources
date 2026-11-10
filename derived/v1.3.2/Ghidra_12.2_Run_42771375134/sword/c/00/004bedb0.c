/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bedb0; name: FUN_004bedb0
 */


undefined4 FUN_004bedb0(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  
  uVar6 = DAT_01d4c198;
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar2 = *(undefined8 **)(param_2 + 8);
    do {
      lVar1 = FUN_0042c0f0(*puVar2);
      if ((lVar1 != 0) && ((short)param_1[3] != 0)) {
        uVar3 = 0;
        lVar4 = 0x18;
        do {
          fVar5 = (float)FUN_00469550(lVar1 + 0x78,*param_1 + lVar4);
          uVar6 = NEON_fminnm(uVar6,fVar5 / *(float *)(lVar1 + 0x84));
          uVar3 = uVar3 + 1;
          lVar4 = lVar4 + 0x28;
        } while (uVar3 < *(ushort *)(param_1 + 3));
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined8 *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x10) * 8)
            );
  }
  return uVar6;
}


