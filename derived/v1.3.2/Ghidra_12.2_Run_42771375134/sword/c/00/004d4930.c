/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d4930; name: FUN_004d4930
 */


void FUN_004d4930(long param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined2 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  void *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  if (*(short *)((long)param_2 + 0x12) != 0) {
    *(undefined4 *)(param_1 + 0x94) = 0x2d;
    if (*(int *)(param_1 + 0x348) == 4) {
      *(undefined4 *)(param_1 + 0x348) = 1;
    }
    uVar3 = *(ushort *)((long)param_2 + 0x12);
    if (((uint)*(ushort *)(param_2 + 2) != (uint)uVar3) && ((char)param_2[1] != '\0')) {
                    /* WARNING: Subroutine does not return */
      memset((void *)(*param_2 + (ulong)uVar3 * 4),0,
             (ulong)((*(ushort *)(param_2 + 2) - 1) - (uint)uVar3) * 4 + 4);
    }
    *(short *)((long)param_2 + 0x12) = (short)param_2[2];
    uVar4 = DAT_01d4c6b8;
    fVar9 = (float)NEON_fminnm(*(undefined4 *)(param_3 + 0xd0),DAT_01d4c6b8);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar8 = *(float *)(param_3 + 0x264);
    if (fVar9 != fVar8) {
      *(undefined1 *)(param_3 + 0x26b) = 1;
      uVar3 = *(ushort *)PTR_DAT_027133f0;
      *(float *)(param_3 + 0x264) = fVar9;
      fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x268));
      *(float *)(param_3 + 0x260) =
           *(float *)(param_3 + 0x260) +
           fVar9 * ((fVar8 - *(float *)(param_3 + 0x260)) / (float)uVar3);
    }
    fVar9 = (float)NEON_fminnm(*(undefined4 *)(param_3 + 0xd4),uVar4);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar8 = *(float *)(param_3 + 0x274);
    lVar1 = param_1 + 0x88;
    if (fVar9 != fVar8) {
      *(undefined1 *)(param_3 + 0x27b) = 1;
      uVar3 = *(ushort *)PTR_DAT_027133f0;
      *(float *)(param_3 + 0x274) = fVar9;
      fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x278));
      *(float *)(param_3 + 0x270) =
           *(float *)(param_3 + 0x270) +
           fVar9 * ((fVar8 - *(float *)(param_3 + 0x270)) / (float)uVar3);
    }
    if ((*(long *)(param_1 + 0x328) == 0) || (*(long *)(*(long *)(param_1 + 0x328) + 0x60) == 0)) {
      puVar2 = (undefined2 *)(param_1 + 0x80);
      uVar7 = FUN_004ced50(param_3 + 0xf0);
      if (((uVar7 & 1) == 0) ||
         (((*(long *)(param_3 + 0x1a0) != 0 && (*(long *)(param_3 + 0x250) != 0)) &&
          ((*(char *)(param_3 + 0x26e) == '\0' || (*(char *)(param_3 + 0x27e) == '\0')))))) {
        FUN_004cb0b0(*(undefined4 *)(param_1 + 0x84),param_2,lVar1,auStack_58 + 0x20,
                     *(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x30),*puVar2,
                     param_3 + 0xe0);
      }
      else {
        FUN_004cb400(*(undefined4 *)(param_1 + 0x84),param_2,lVar1,auStack_58 + 0x20,
                     *(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x30),*puVar2,
                     param_3 + 0xe0);
      }
      *(undefined2 *)(param_1 + 0x9a) = *puVar2;
      return;
    }
    local_78 = (void *)0x0;
    local_70 = 0x2b00000000;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    iVar5 = FUN_00490530(&local_78,(short)param_2[2],(int)param_2[1]);
    if (iVar5 == 1) {
      memcpy(local_78,(void *)*param_2,
             (ulong)*(ushort *)(param_2 + 2) * (ulong)*(byte *)(param_2 + 1) * 4);
      local_68 = CONCAT22((short)param_2[2],(undefined2)local_68);
      FUN_004d13e0(param_3 + 0xe0,&local_78);
    }
    else {
      local_78 = (void *)*param_2;
      local_68 = CONCAT22((short)param_2[2],(short)param_2[2]);
      local_70 = CONCAT44(local_70._4_4_,(int)param_2[1]);
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x328) + 0x60);
    (**(code **)(*plVar6 + 0x50))
              (*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14),
               *(undefined4 *)(param_3 + 0x18),(short)*(undefined4 *)(param_3 + 0x1c),plVar6,param_3
               ,&local_78,lVar1);
    if (iVar5 == 1) {
      FUN_004905b0(&local_78);
    }
  }
  return;
}


