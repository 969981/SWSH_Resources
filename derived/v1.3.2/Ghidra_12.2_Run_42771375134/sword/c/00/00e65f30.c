/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e65f30; name: FUN_00e65f30
 */


undefined1  [16] FUN_00e65f30(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  
  uVar1 = *(uint *)(param_1 + 0x520);
  uVar7 = 0;
  uVar10 = 0;
  if ((uVar1 != 0) && (*(int *)(param_1 + 0x524) != 0)) {
    fVar4 = *(float *)(param_1 + 0x574) + *(float *)(param_1 + 0x570);
    *(float *)(param_1 + 0x570) = fVar4;
    *(float *)(param_1 + 0x578) = *(float *)(param_1 + 0x57c) + *(float *)(param_1 + 0x578);
    if (*(int *)(param_1 + 0x590) != 0) {
      uVar2 = *(int *)(param_1 + 0x590) - 1;
      *(ulong *)(param_1 + 0x518) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x518) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(param_1 + 0x5a8) >> 0x20),
                    (float)*(undefined8 *)(param_1 + 0x518) -
                    (float)*(undefined8 *)(param_1 + 0x5a8));
      *(ulong *)(param_1 + 0x510) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x510) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(param_1 + 0x5a0) >> 0x20),
                    (float)*(undefined8 *)(param_1 + 0x510) -
                    (float)*(undefined8 *)(param_1 + 0x5a0));
      *(uint *)(param_1 + 0x590) = uVar2;
      if (uVar2 <= uVar1) {
        *(undefined4 *)(param_1 + 0x58c) = 1;
        *(uint *)(param_1 + 0x524) = uVar1;
      }
    }
    if ((*(char *)(param_1 + 0x588) == '\0') && (*(float *)(param_1 + 0x580) <= fVar4)) {
      FUN_00e65b60(param_1);
      fVar4 = *(float *)(param_1 + 0x570);
    }
    uVar10 = 0;
    uVar7 = 0;
    if (1.0 <= fVar4) {
      if ((*(int *)(param_1 + 0x58c) == 2) && (*(char *)(param_1 + 0x588) == '\0')) {
        *(undefined4 *)(param_1 + 0x528) = 0xffffffff;
        *(undefined8 *)(param_1 + 0x570) = 0x3f800000;
        *(undefined8 *)(param_1 + 0x580) = 0x3f8000003f800000;
        *(undefined8 *)(param_1 + 0x518) = 0;
        *(undefined8 *)(param_1 + 0x510) = 0;
        *(undefined8 *)(param_1 + 0x548) = 0;
        *(undefined8 *)(param_1 + 0x540) = 0;
        *(undefined8 *)(param_1 + 0x538) = 0;
        *(undefined8 *)(param_1 + 0x530) = 0;
        *(undefined8 *)(param_1 + 0x578) = 0;
        *(undefined1 *)(param_1 + 0x588) = 0;
        *(undefined8 *)(param_1 + 0x58c) = 0;
        *(undefined8 *)(param_1 + 0x520) = 0;
        goto LAB_00e6607c;
      }
      fVar4 = *(float *)(param_1 + 0x578);
      *(undefined8 *)(param_1 + 0x578) = 0;
      *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x57c);
      *(undefined8 *)(param_1 + 0x530) = *(undefined8 *)(param_1 + 0x550);
      *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(param_1 + 0x568);
      *(undefined8 *)(param_1 + 0x538) = *(undefined8 *)(param_1 + 0x558);
      *(float *)(param_1 + 0x570) = fVar4;
      *(undefined1 *)(param_1 + 0x588) = 0;
      *(undefined8 *)(param_1 + 0x540) = *(undefined8 *)(param_1 + 0x560);
    }
    puVar3 = PTR_PTR_02718e90;
    fVar4 = (float)(**(code **)(PTR_PTR_02718e90 + 0x18))(fVar4);
    fVar6 = (float)*(undefined8 *)(param_1 + 0x530);
    fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x530) >> 0x20);
    fVar9 = (float)*(undefined8 *)(param_1 + 0x538);
    fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x538) >> 0x20);
    fVar6 = fVar6 + ((float)*(undefined8 *)(param_1 + 0x540) - fVar6) * fVar4;
    fVar8 = fVar8 + ((float)((ulong)*(undefined8 *)(param_1 + 0x540) >> 0x20) - fVar8) * fVar4;
    uVar7 = CONCAT44(fVar8,fVar6);
    fVar9 = fVar9 + ((float)*(undefined8 *)(param_1 + 0x548) - fVar9) * fVar4;
    fVar11 = fVar11 + ((float)((ulong)*(undefined8 *)(param_1 + 0x548) >> 0x20) - fVar11) * fVar4;
    uVar10 = CONCAT44(fVar11,fVar9);
    if (*(char *)(param_1 + 0x588) != '\0') {
      fVar4 = (float)(**(code **)(puVar3 + 0x18))(*(undefined4 *)(param_1 + 0x578));
      uVar7 = CONCAT44(fVar8 + ((float)((ulong)*(undefined8 *)(param_1 + 0x560) >> 0x20) -
                               (float)((ulong)*(undefined8 *)(param_1 + 0x550) >> 0x20)) * fVar4,
                       fVar6 + ((float)*(undefined8 *)(param_1 + 0x560) -
                               (float)*(undefined8 *)(param_1 + 0x550)) * fVar4);
      uVar10 = CONCAT44(fVar11 + ((float)((ulong)*(undefined8 *)(param_1 + 0x568) >> 0x20) -
                                 (float)((ulong)*(undefined8 *)(param_1 + 0x558) >> 0x20)) * fVar4,
                        fVar9 + ((float)*(undefined8 *)(param_1 + 0x568) -
                                (float)*(undefined8 *)(param_1 + 0x558)) * fVar4);
    }
  }
LAB_00e6607c:
  auVar5._8_8_ = uVar10;
  auVar5._0_8_ = uVar7;
  return auVar5;
}


